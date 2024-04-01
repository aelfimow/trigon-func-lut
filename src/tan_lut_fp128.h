#ifdef TAN_LUT_FP128_H
#error Already included
#else

#define TAN_LUT_FP128_H     1

namespace tan_lut_fp128
{
    using lut_func_t = fp128 (*)();

    constexpr unsigned int MAX_LUT_ELEM = 361U;

    extern lut_func_t const lut[MAX_LUT_ELEM];
}

#endif
