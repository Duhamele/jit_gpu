//
// Created by duhamel on 16/11/2026.
//
#include "jit_gpu_execpt.h"
namespace jit_gpu
{
    LoadlibError::LoadlibError(std::string const & lib):runtime_error("[Error][JIT GPU] failure load "+lib+"\n")
    {
        this->lib = lib;
    }

    LoadlibError::~LoadlibError()
    {
        this->lib.clear();
        this->function.clear();
    }

    LoadlibError::LoadlibError(std::string const& lib, std::string const& function):runtime_error("[Error][JIT GPU] failure load func "+function+" in "+lib+"\n")
    {
        this->lib = lib;
        this->function = function;
    }
}
