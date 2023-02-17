#ifdef SIN_LUT_FP64_H
#error Already included
#else

#define SIN_LUT_FP64_H  1

namespace sin_lut_fp64
{
    using fp64 = double;
    using lut_func_t = fp64 (*)();

    constexpr unsigned int MAX_LUT_ELEM = 361U;

    extern lut_func_t const lut[MAX_LUT_ELEM];
}

#endif
