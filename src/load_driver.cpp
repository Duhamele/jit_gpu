//
// Created by duhamel on 14/11/2026.
//

#include <dlfcn.h>


void * load_lib_nvidia()
{
    void *  lib=dlopen("libcuda.so.1", RTLD_LAZY);
    if (!lib)
    {
        lib = dlopen("libcuda.so", RTLD_LAZY);
        if (!lib)
        {

        }
    }
    return lib;
}
