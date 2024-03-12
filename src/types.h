#ifdef TYPES_H
#error Already included
#else

#define TYPES_H  1

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

using fp128 = __float128;
static_assert(sizeof(fp128) == 16U);


#endif
