add_library(jit_gpu SHARED jit_gpu.cpp
        jit_gpu_type.cpp
        DriverNvidiaImpl.cpp
        DriverNvidiaImpl.h
        load_driver.cpp
        jit_gpu_execpt.cpp)