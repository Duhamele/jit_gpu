//
// Created by duhamel on 13/11/2026.
//

#ifndef JIT_GPU_JIT_GPU_TYPE_H
#define JIT_GPU_JIT_GPU_TYPE_H


namespace jit_gpu
{
    enum gpu_type :unsigned int{
        unknown,
        boolean,
        uint8,
        uint16,
        uint32,
        uint64,
        int8,
        int16,
        int32,
        int64,
        float16,
        float32,
        float64,
        bit8,
        bit16,
        bit32,
        bit64,
        bit128,

    };
    extern const gpu_type TYPE_BOOLEAN;
    extern const gpu_type TYPE_UINT8;
    extern const gpu_type TYPE_UINT16;
    extern const gpu_type TYPE_UINT32;
    extern const gpu_type TYPE_UINT64;
    extern const gpu_type TYPE_INT8;
    extern const gpu_type TYPE_INT16;
    extern const gpu_type TYPE_INT32;
    extern const gpu_type TYPE_INT64;
    extern const gpu_type TYPE_FLOAT16;
    extern const gpu_type TYPE_FLOAT32;
    extern const gpu_type TYPE_FLOAT64;
    extern const gpu_type TYPE_BIT8;
    extern const gpu_type TYPE_BIT16;
    extern const gpu_type TYPE_BIT32;
    extern const gpu_type TYPE_BIT64;
    extern const gpu_type TYPE_BIT128;

}

#endif //JIT_GPU_JIT_GPU_TYPE_H
