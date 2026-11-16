//
// Created by duhamel on 13/11/2026.
//

#ifndef JIT_GPU_JIT_GPU_DRIVER_H
#define JIT_GPU_JIT_GPU_DRIVER_H


namespace jit_gpu
{
    class AbstractDriver
    {
        public:
        virtual ~AbstractDriver() = default;
        virtual int countDevices()=delete;

    };
}
#endif //JIT_GPU_JIT_GPU_DRIVER_H
