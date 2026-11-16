//
// Created by duhamel on 16/11/2026.
//

#ifndef JIT_GPU_JIT_GPU_EXECPT_H
#define JIT_GPU_JIT_GPU_EXECPT_H

#include <stdexcept>

namespace jit_gpu
{
    class LoadlibError:std::runtime_error
    {


        public:
        LoadlibError(std::string const& lib, std::string const& function);

        LoadlibError(std::string const& lib);

        ~LoadlibError();
    private:
        std::string lib;
        std::string function;


    };
}

#endif //JIT_GPU_JIT_GPU_EXECPT_H
