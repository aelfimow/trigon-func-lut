#ifdef COT_LUT_FP80_H
#error Already included
#else

#define COT_LUT_FP80_H  1

namespace cot_lut_fp80
{
    using lut_func_t = fp80 (*)();

    constexpr unsigned int MAX_LUT_ELEM = 361U;

    extern lut_func_t const lut[MAX_LUT_ELEM];
}

#endif
