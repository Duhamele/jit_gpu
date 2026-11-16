//
// Created by duhamel on 14/11/2026.
//

#ifndef JIT_GPU_DRIVERNVIDIAIMPL_H
#define JIT_GPU_DRIVERNVIDIAIMPL_H
#include "jit_gpu_driver_nvidia.h"
#include <cuda.h>
namespace jit_gpu
{
    class DriverNvidiaImpl:DriverNvidiaInterface
    {

        protected:
        static DriverNvidiaImpl* driver;

        friend DriverNvidiaInterface* get_driver_nvidia();
        DriverNvidiaImpl();
        void * dl_libcuda=nullptr;
        typedef CUresult(*func_cuInit)(unsigned int);
        func_cuInit cuInit=nullptr;


    };

} // jit_gpu

#endif //JIT_GPU_DRIVERNVIDIAIMPL_H
