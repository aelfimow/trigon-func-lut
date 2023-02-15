#ifdef TAN_LUT_FP32_H
#error Already included
#else

#define TAN_LUT_FP32_H  1

namespace tan_lut_fp32
{
    using fp32 = float;
    using lut_func_t = fp32 (*)();

    constexpr unsigned int MAX_LUT_ELEM = 361U;

    extern lut_func_t const lut[MAX_LUT_ELEM];
}

#endif
