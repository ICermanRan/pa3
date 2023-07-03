#ifndef _FIXEDPTC_H_
#define _FIXEDPTC_H_

/*
 * fixedptc.h is a 32-bit or 64-bit fixed point numeric library.
 *
 * The symbol FIXEDPT_BITS, if defined before this library header file
 * is included, determines the number of bits in the data type (its "width").
 * The default width is 32-bit (FIXEDPT_BITS=32) and it can be used
 * on any recent C99 compiler. The 64-bit precision (FIXEDPT_BITS=64) is
 * available on compilers which implement 128-bit "long long" types. This
 * precision has been tested on GCC 4.2+.
 *
 * The FIXEDPT_WBITS symbols governs how many bits are dedicated to the
 * "whole" part of the number (to the left of the decimal point). The larger
 * this width is, the larger the numbers which can be stored in the fixedpt
 * number. The rest of the bits (available in the FIXEDPT_FBITS symbol) are
 * dedicated to the fraction part of the number (to the right of the decimal
 * point).
 *
 * Since the number of bits in both cases is relatively low, many complex
 * functions (more complex than div & mul) take a large hit on the precision
 * of the end result because errors in precision accumulate.
 * This loss of precision can be lessened by increasing the number of
 * bits dedicated to the fraction part, but at the loss of range.
 *
 * Adventurous users might utilize this library to build two data types:
 * one which has the range, and one which has the precision, and carefully
 * convert between them (including adding two number of each type to produce
 * a simulated type with a larger range and precision).
 *
 * The ideas and algorithms have been cherry-picked from a large number
 * of previous implementations available on the Internet.
 * Tim Hartrick has contributed cleanup and 64-bit support patches.
 *
 * == Special notes for the 32-bit precision ==
 * Signed 32-bit fixed point numeric library for the 24.8 format.
 * The specific limits are -8388608.999... to 8388607.999... and the
 * most precise number is 0.00390625. In practice, you should not count
 * on working with numbers larger than a million or to the precision
 * of more than 2 decimal places. Make peace with the fact that PI
 * is 3.14 here. :)
 */

/*-
 * Copyright (c) 2010-2012 Ivan Voras <ivoras@freebsd.org>
 * Copyright (c) 2012 Tim Hartrick <tim@edgecast.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef FIXEDPT_BITS
#define FIXEDPT_BITS	32
#endif

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#if FIXEDPT_BITS == 32
typedef int32_t fixedpt;
typedef	int64_t	fixedptd;
typedef	uint32_t fixedptu;
typedef	uint64_t fixedptud;
#elif FIXEDPT_BITS == 64
typedef int64_t fixedpt;
typedef	__int128_t fixedptd;
typedef	uint64_t fixedptu;
typedef	__uint128_t fixedptud;
#else
#error "FIXEDPT_BITS must be equal to 32 or 64"
#endif

//FIXEDPT_WBITS:定义了定点数的整数部分位数，默认值为24。
#ifndef FIXEDPT_WBITS
#define FIXEDPT_WBITS	24
#endif

#if FIXEDPT_WBITS >= FIXEDPT_BITS
#error "FIXEDPT_WBITS must be less than or equal to FIXEDPT_BITS"
#endif

#define FIXEDPT_VCSID "$Id$"

//FIXEDPT_FBITS:定义了定点数数的小数部分位数，计算得出为8
#define FIXEDPT_FBITS	(FIXEDPT_BITS - FIXEDPT_WBITS)

//掩码:FIXEDPT_FMASK与定点数进行按位与运算,用于获取定点数小数部分
  //其位数与定点数的小数部分相对应,其值等于0xff
#define FIXEDPT_FMASK	(((fixedpt)1 << FIXEDPT_FBITS) - 1)

//掩码:FIXEDPT_WMASK与定点数进行按位与运算,用于获取定点数整数部分
  //其位数与定点数的整数数部分相对应,其值等于
#define FIXEDPT_WMASK (((fixedpt)1 << FIXEDPT_WBITS) - 1) << FIXEDPT_FBITS

//fixedpt_rconst:将浮点数常量R转换为定点数的宏
#define fixedpt_rconst(R) ((fixedpt)((R) * FIXEDPT_ONE + ((R) >= 0 ? 0.5 : -0.5)))

//fixedpt_fromint:将整数I转换为定点数的宏
  //首先将整数的二进制表达式,左移FIXEDPT_FBITS,即左移8位
  //这是因为24.8规定中,小数部分占低8位,
//   31 30                         8 7         0
// +----+---------------------------+----------+
// |sign|          integer          | fraction |
// +----+---------------------------+----------+
  //整数左移8位,就把整数部分移到了30-8 bit范围,小数则位于7-0 bit范围
  //然后因为整数I原本的数据类型可能并不支持这么多位,因为强转为fixedptd数据类型,以支持这个定点数规定
#define fixedpt_fromint(I) ((fixedptd)(I) << FIXEDPT_FBITS)

#define fixedpt_toint(F) ((F) >> FIXEDPT_FBITS)
#define fixedpt_add(A,B) ((A) + (B))
#define fixedpt_sub(A,B) ((A) - (B))

//fixedpt_fracpart:获取定点数A的小数部分
#define fixedpt_fracpart(A) ((fixedpt)(A) & FIXEDPT_FMASK)

//fixedpt_intpart:获取定点数A的整数部分
#define fixedpt_intpart(A) ((fixedpt)(A) & FIXEDPT_WMASK)

#define FIXEDPT_ONE	((fixedpt)((fixedpt)1 << FIXEDPT_FBITS))
#define FIXEDPT_ONE_HALF (FIXEDPT_ONE >> 1)
#define FIXEDPT_TWO	(FIXEDPT_ONE + FIXEDPT_ONE)
#define FIXEDPT_PI	fixedpt_rconst(3.14159265358979323846)
#define FIXEDPT_TWO_PI	fixedpt_rconst(2 * 3.14159265358979323846)
#define FIXEDPT_HALF_PI	fixedpt_rconst(3.14159265358979323846 / 2)
#define FIXEDPT_E	fixedpt_rconst(2.7182818284590452354)

/* fixedpt is meant to be usable in environments without floating point support
 * (e.g. microcontrollers, kernels), so we can't use floating point types directly.
 * Putting them only in macros will effectively make them optional. */
#define fixedpt_tofloat(T) ((float) ((T)*((float)(1)/(float)(1L << FIXEDPT_FBITS))))

/*为了避免编译时对静态内联函数waring,把需要后续调用的函数放在前面声明*/

/* Multiplies two fixedpt numbers, returns the result. */
static inline fixedpt fixedpt_mul(fixedpt A, fixedpt B) {
// fixedpt fixedpt_mul(fixedpt A, fixedpt B) {
  //在定点数运算中,为了保持足够的精度,将定点数扩展到更宽的整数类型进行计算
  //fixedpt类型转换为更宽的fixedptd类型,可以提供更多的位数用于存储乘法运算的结果，从而减小精度损失
	return (((fixedptd)A * (fixedptd)B) >> FIXEDPT_FBITS);
}


/* Divides two fixedpt numbers, returns the result. */
static inline fixedpt fixedpt_div(fixedpt A, fixedpt B) {
  //在定点数运算中,为了保持足够的精度,将定点数扩展到更宽的整数类型进行计算
  //fixedpt类型转换为更宽的fixedptd类型,可以提供更多的位数用于存储乘法运算的结果，从而减小精度损失
	// return (((fixedptd)A / (fixedptd)B) <<  FIXEDPT_FBITS);
  return (((fixedptd)A << FIXEDPT_FBITS) / (fixedptd)B);
}

/* Multiplies a fixedpt number with an integer, returns the result. */
static inline fixedpt fixedpt_muli(fixedpt A, int B) {
  return fixedpt_mul(A, fixedpt_fromint(B));
}

/* Divides a fixedpt number with an integer, returns the result. */
static inline fixedpt fixedpt_divi(fixedpt A, int B) {
	return fixedpt_div(A, fixedpt_fromint(B));
}



static inline fixedpt fixedpt_abs(fixedpt A) {
	return ( A < 0 ? -A : A );
}

static inline fixedpt fixedpt_floor(fixedpt A) {
	//首先检查 A 的小数部分是否为零，或者 A 是否等于特定的边界值（0、最大正数、最小负数）,均用补码表示
  //如果满足,则直接返回
  if (fixedpt_fracpart(A) == 0 || A == 0 || A == 0x7fffffff || A == 0x80000001) {
    return A;
  }
  else {
  //如果 A 不满足上述条件，那么函数调用 fixedpt_intpart 宏，
  //该宏提取固定点数 A 的整数部分。
    // return (fixedpt)fixedpt_toint(A); 
    return fixedpt_intpart(A);
  }
}

static inline fixedpt fixedpt_ceil(fixedpt A) {
	//首先检查 A 的小数部分是否为零，或者 A 是否等于特定的边界值（0、最大正数）,均用补码表示
  //如果满足,则直接返回
  // if (fixedpt_fracpart(A) == 0 || A == 0 || A == 0x7fffffff) {
  //   return A;
  // }
  
  // if(A > 0 && A != 0x7fffffff) {
  //   return (fixedpt)(fixedpt_intpart(A) + FIXEDPT_ONE);
  // }
  // else if(A < 0) {
  //   return (fixedpt)fixedpt_intpart(A);
  // }
  if (A == 0 || A == 0x7fffffff || A == 0x80000001 || fixedpt_fracpart(A)==0){	// -0, +0 || NaN || -NaN || integer.
		return A;
	}
	else{																			// other real number.
		return fixedpt_intpart(A) + FIXEDPT_ONE;
	}
}

/*
 * Note: adding and substracting fixedpt numbers can be done by using
 * the regular integer operators + and -.
 */

/**
 * Convert the given fixedpt number to a decimal string.
 * The max_dec argument specifies how many decimal digits to the right
 * of the decimal point to generate. If set to -1, the "default" number
 * of decimal digits will be used (2 for 32-bit fixedpt width, 10 for
 * 64-bit fixedpt width); If set to -2, "all" of the digits will
 * be returned, meaning there will be invalid, bogus digits outside the
 * specified precisions.
 */
void fixedpt_str(fixedpt A, char *str, int max_dec);

/* Converts the given fixedpt number into a string, using a static
 * (non-threadsafe) string buffer */
static inline char* fixedpt_cstr(const fixedpt A, const int max_dec) {
	static char str[25];

	fixedpt_str(A, str, max_dec);
	return (str);
}


/* Returns the square root of the given number, or -1 in case of error */
fixedpt fixedpt_sqrt(fixedpt A);


/* Returns the sine of the given fixedpt number. 
 * Note: the loss of precision is extraordinary! */
fixedpt fixedpt_sin(fixedpt fp);


/* Returns the cosine of the given fixedpt number */
static inline fixedpt fixedpt_cos(fixedpt A) {
	return (fixedpt_sin(FIXEDPT_HALF_PI - A));
}


/* Returns the tangens of the given fixedpt number */
static inline fixedpt fixedpt_tan(fixedpt A) {
	return fixedpt_div(fixedpt_sin(A), fixedpt_cos(A));
}


/* Returns the value exp(x), i.e. e^x of the given fixedpt number. */
fixedpt fixedpt_exp(fixedpt fp);


/* Returns the natural logarithm of the given fixedpt number. */
fixedpt fixedpt_ln(fixedpt x);


/* Returns the logarithm of the given base of the given fixedpt number */
static inline fixedpt fixedpt_log(fixedpt x, fixedpt base) {
	return (fixedpt_div(fixedpt_ln(x), fixedpt_ln(base)));
}


/* Return the power value (n^exp) of the given fixedpt numbers */
static inline fixedpt fixedpt_pow(fixedpt n, fixedpt exp) {
	if (exp == 0)
		return (FIXEDPT_ONE);
	if (n < 0)
		return 0;
	return (fixedpt_exp(fixedpt_mul(fixedpt_ln(n), exp)));
}

#ifdef __cplusplus
}
#endif

#endif
