//
// Created by duhamel on 14/11/2026.
//

#include "DriverNvidiaImpl.h"

#include <dlfcn.h>
#include <iostream>
#include <ostream>
#include <stdexcept>

#include "load_driver.h"
namespace jit_gpu
{

    DriverNvidiaImpl* DriverNvidiaImpl::driver = nullptr;
    DriverNvidiaInterface* get_driver_nvidia()
    {
        if (DriverNvidiaImpl::driver == nullptr)
        {
            try
            {
                DriverNvidiaImpl::driver = new DriverNvidiaImpl();
            }catch(std::runtime_error& e)
            {
                std::cerr << e.what() << std::endl;
                return nullptr;
            }
        }

        return DriverNvidiaImpl::driver;
    }

    DriverNvidiaImpl::DriverNvidiaImpl()
    {
        dl_libcuda=load_lib_nvidia();
        if (dl_libcuda==nullptr)
        {
            throw std::runtime_error("load_lib_nvidia() failed");
        }
        cuInit=reinterpret_cast<func_cuInit>(dlsym(dl_libcuda,"cuInit"));
        if (cuInit==nullptr)
        {
            throw std::runtime_error("dlsym() failed");
        }
        CUresult cuErr=cuInit(0);
        if (cuErr!=CUDA_SUCCESS)
        {
            throw std::runtime_error("cuInit() failed");
        }
    }
} // jit_gpu