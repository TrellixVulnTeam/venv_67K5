/*===---- arm_neon.h - ARM Neon intrinsics ---------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_NEON_H
#define __ARM_NEON_H

#if !defined(__ARM_NEON__) && !defined(__AARCH_FEATURE_ADVSIMD)
#error "NEON support not enabled"
#endif

#include <stdint.h>

typedef float float32_t;
typedef __fp16 float16_t;
#ifdef __aarch64__
typedef double float64_t;
#endif

#ifdef __aarch64__
typedef uint8_t poly8_t;
typedef uint16_t poly16_t;
#else
typedef int8_t poly8_t;
typedef int16_t poly16_t;
#endif
typedef __attribute__((neon_vector_type(8)))  int8_t int8x8_t;
typedef __attribute__((neon_vector_type(16))) int8_t int8x16_t;
typedef __attribute__((neon_vector_type(4)))  int16_t int16x4_t;
typedef __attribute__((neon_vector_type(8)))  int16_t int16x8_t;
typedef __attribute__((neon_vector_type(2)))  int32_t int32x2_t;
typedef __attribute__((neon_vector_type(4)))  int32_t int32x4_t;
typedef __attribute__((neon_vector_type(1)))  int64_t int64x1_t;
typedef __attribute__((neon_vector_type(2)))  int64_t int64x2_t;
typedef __attribute__((neon_vector_type(8)))  uint8_t uint8x8_t;
typedef __attribute__((neon_vector_type(16))) uint8_t uint8x16_t;
typedef __attribute__((neon_vector_type(4)))  uint16_t uint16x4_t;
typedef __attribute__((neon_vector_type(8)))  uint16_t uint16x8_t;
typedef __attribute__((neon_vector_type(2)))  uint32_t uint32x2_t;
typedef __attribute__((neon_vector_type(4)))  uint32_t uint32x4_t;
typedef __attribute__((neon_vector_type(1)))  uint64_t uint64x1_t;
typedef __attribute__((neon_vector_type(2)))  uint64_t uint64x2_t;
typedef __attribute__((neon_vector_type(4)))  float16_t float16x4_t;
typedef __attribute__((neon_vector_type(8)))  float16_t float16x8_t;
typedef __attribute__((neon_vector_type(2)))  float32_t float32x2_t;
typedef __attribute__((neon_vector_type(4)))  float32_t float32x4_t;
#ifdef __aarch64__
typedef __attribute__((neon_vector_type(2)))  float64_t float64x2_t;
#endif
typedef __attribute__((neon_polyvector_type(8)))  poly8_t poly8x8_t;
typedef __attribute__((neon_polyvector_type(16))) poly8_t poly8x16_t;
typedef __attribute__((neon_polyvector_type(4)))  poly16_t poly16x4_t;
typedef __attribute__((neon_polyvector_type(8)))  poly16_t poly16x8_t;

typedef struct int8x8x2_t {
  int8x8_t val[2];
} int8x8x2_t;

typedef struct int8x16x2_t {
  int8x16_t val[2];
} int8x16x2_t;

typedef struct int16x4x2_t {
  int16x4_t val[2];
} int16x4x2_t;

typedef struct int16x8x2_t {
  int16x8_t val[2];
} int16x8x2_t;

typedef struct int32x2x2_t {
  int32x2_t val[2];
} int32x2x2_t;

typedef struct int32x4x2_t {
  int32x4_t val[2];
} int32x4x2_t;

typedef struct int64x1x2_t {
  int64x1_t val[2];
} int64x1x2_t;

typedef struct int64x2x2_t {
  int64x2_t val[2];
} int64x2x2_t;

typedef struct uint8x8x2_t {
  uint8x8_t val[2];
} uint8x8x2_t;

typedef struct uint8x16x2_t {
  uint8x16_t val[2];
} uint8x16x2_t;

typedef struct uint16x4x2_t {
  uint16x4_t val[2];
} uint16x4x2_t;

typedef struct uint16x8x2_t {
  uint16x8_t val[2];
} uint16x8x2_t;

typedef struct uint32x2x2_t {
  uint32x2_t val[2];
} uint32x2x2_t;

typedef struct uint32x4x2_t {
  uint32x4_t val[2];
} uint32x4x2_t;

typedef struct uint64x1x2_t {
  uint64x1_t val[2];
} uint64x1x2_t;

typedef struct uint64x2x2_t {
  uint64x2_t val[2];
} uint64x2x2_t;

typedef struct float16x4x2_t {
  float16x4_t val[2];
} float16x4x2_t;

typedef struct float16x8x2_t {
  float16x8_t val[2];
} float16x8x2_t;

typedef struct float32x2x2_t {
  float32x2_t val[2];
} float32x2x2_t;

typedef struct float32x4x2_t {
  float32x4_t val[2];
} float32x4x2_t;

#ifdef __aarch64__
typedef struct float64x2x2_t {
  float64x2_t val[2];
} float64x2x2_t;
#endif

typedef struct poly8x8x2_t {
  poly8x8_t val[2];
} poly8x8x2_t;

typedef struct poly8x16x2_t {
  poly8x16_t val[2];
} poly8x16x2_t;

typedef struct poly16x4x2_t {
  poly16x4_t val[2];
} poly16x4x2_t;

typedef struct poly16x8x2_t {
  poly16x8_t val[2];
} poly16x8x2_t;

typedef struct int8x8x3_t {
  int8x8_t val[3];
} int8x8x3_t;

typedef struct int8x16x3_t {
  int8x16_t val[3];
} int8x16x3_t;

typedef struct int16x4x3_t {
  int16x4_t val[3];
} int16x4x3_t;

typedef struct int16x8x3_t {
  int16x8_t val[3];
} int16x8x3_t;

typedef struct int32x2x3_t {
  int32x2_t val[3];
} int32x2x3_t;

typedef struct int32x4x3_t {
  int32x4_t val[3];
} int32x4x3_t;

typedef struct int64x1x3_t {
  int64x1_t val[3];
} int64x1x3_t;

typedef struct int64x2x3_t {
  int64x2_t val[3];
} int64x2x3_t;

typedef struct uint8x8x3_t {
  uint8x8_t val[3];
} uint8x8x3_t;

typedef struct uint8x16x3_t {
  uint8x16_t val[3];
} uint8x16x3_t;

typedef struct uint16x4x3_t {
  uint16x4_t val[3];
} uint16x4x3_t;

typedef struct uint16x8x3_t {
  uint16x8_t val[3];
} uint16x8x3_t;

typedef struct uint32x2x3_t {
  uint32x2_t val[3];
} uint32x2x3_t;

typedef struct uint32x4x3_t {
  uint32x4_t val[3];
} uint32x4x3_t;

typedef struct uint64x1x3_t {
  uint64x1_t val[3];
} uint64x1x3_t;

typedef struct uint64x2x3_t {
  uint64x2_t val[3];
} uint64x2x3_t;

typedef struct float16x4x3_t {
  float16x4_t val[3];
} float16x4x3_t;

typedef struct float16x8x3_t {
  float16x8_t val[3];
} float16x8x3_t;

typedef struct float32x2x3_t {
  float32x2_t val[3];
} float32x2x3_t;

typedef struct float32x4x3_t {
  float32x4_t val[3];
} float32x4x3_t;

#ifdef __aarch64__
typedef struct float64x2x3_t {
  float64x2_t val[3];
} float64x2x3_t;
#endif

typedef struct poly8x8x3_t {
  poly8x8_t val[3];
} poly8x8x3_t;

typedef struct poly8x16x3_t {
  poly8x16_t val[3];
} poly8x16x3_t;

typedef struct poly16x4x3_t {
  poly16x4_t val[3];
} poly16x4x3_t;

typedef struct poly16x8x3_t {
  poly16x8_t val[3];
} poly16x8x3_t;

typedef struct int8x8x4_t {
  int8x8_t val[4];
} int8x8x4_t;

typedef struct int8x16x4_t {
  int8x16_t val[4];
} int8x16x4_t;

typedef struct int16x4x4_t {
  int16x4_t val[4];
} int16x4x4_t;

typedef struct int16x8x4_t {
  int16x8_t val[4];
} int16x8x4_t;

typedef struct int32x2x4_t {
  int32x2_t val[4];
} int32x2x4_t;

typedef struct int32x4x4_t {
  int32x4_t val[4];
} int32x4x4_t;

typedef struct int64x1x4_t {
  int64x1_t val[4];
} int64x1x4_t;

typedef struct int64x2x4_t {
  int64x2_t val[4];
} int64x2x4_t;

typedef struct uint8x8x4_t {
  uint8x8_t val[4];
} uint8x8x4_t;

typedef struct uint8x16x4_t {
  uint8x16_t val[4];
} uint8x16x4_t;

typedef struct uint16x4x4_t {
  uint16x4_t val[4];
} uint16x4x4_t;

typedef struct uint16x8x4_t {
  uint16x8_t val[4];
} uint16x8x4_t;

typedef struct uint32x2x4_t {
  uint32x2_t val[4];
} uint32x2x4_t;

typedef struct uint32x4x4_t {
  uint32x4_t val[4];
} uint32x4x4_t;

typedef struct uint64x1x4_t {
  uint64x1_t val[4];
} uint64x1x4_t;

typedef struct uint64x2x4_t {
  uint64x2_t val[4];
} uint64x2x4_t;

typedef struct float16x4x4_t {
  float16x4_t val[4];
} float16x4x4_t;

typedef struct float16x8x4_t {
  float16x8_t val[4];
} float16x8x4_t;

typedef struct float32x2x4_t {
  float32x2_t val[4];
} float32x2x4_t;

typedef struct float32x4x4_t {
  float32x4_t val[4];
} float32x4x4_t;

#ifdef __aarch64__
typedef struct float64x2x4_t {
  float64x2_t val[4];
} float64x2x4_t;
#endif

typedef struct poly8x8x4_t {
  poly8x8_t val[4];
} poly8x8x4_t;

typedef struct poly8x16x4_t {
  poly8x16_t val[4];
} poly8x16x4_t;

typedef struct poly16x4x4_t {
  poly16x4_t val[4];
} poly16x4x4_t;

typedef struct poly16x8x4_t {
  poly16x8_t val[4];
} poly16x8x4_t;

#define __ai static inline __attribute__((__always_inline__, __nodebug__))

__ai int16x8_t vmovl_s8(int8x8_t __a) {
  return (int16x8_t)__builtin_neon_vmovl_v(__a, 33); }
__ai int32x4_t vmovl_s16(int16x4_t __a) {
  return (int32x4_t)__builtin_neon_vmovl_v((int8x8_t)__a, 34); }
__ai int64x2_t vmovl_s32(int32x2_t __a) {
  return (int64x2_t)__builtin_neon_vmovl_v((int8x8_t)__a, 35); }
__ai uint16x8_t vmovl_u8(uint8x8_t __a) {
  return (uint16x8_t)__builtin_neon_vmovl_v((int8x8_t)__a, 49); }
__ai uint32x4_t vmovl_u16(uint16x4_t __a) {
  return (uint32x4_t)__builtin_neon_vmovl_v((int8x8_t)__a, 50); }
__ai uint64x2_t vmovl_u32(uint32x2_t __a) {
  return (uint64x2_t)__builtin_neon_vmovl_v((int8x8_t)__a, 51); }

__ai int16x8_t vmull_s8(int8x8_t __a, int8x8_t __b) {
  return (int16x8_t)__builtin_neon_vmull_v(__a, __b, 33); }
__ai int32x4_t vmull_s16(int16x4_t __a, int16x4_t __b) {
  return (int32x4_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)__b, 34); }
__ai int64x2_t vmull_s32(int32x2_t __a, int32x2_t __b) {
  return (int64x2_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)__b, 35); }
__ai uint16x8_t vmull_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint16x8_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)__b, 49); }
__ai uint32x4_t vmull_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint32x4_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)__b, 50); }
__ai uint64x2_t vmull_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint64x2_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)__b, 51); }
__ai poly16x8_t vmull_p8(poly8x8_t __a, poly8x8_t __b) {
  return (poly16x8_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)__b, 37); }

__ai int8x8_t vabd_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vabd_v(__a, __b, 0); }
__ai int16x4_t vabd_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vabd_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vabd_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vabd_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vabd_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vabd_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vabd_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vabd_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vabd_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vabd_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai float32x2_t vabd_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vabd_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai int8x16_t vabdq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vabdq_v(__a, __b, 32); }
__ai int16x8_t vabdq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vabdq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vabdq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vabdq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vabdq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai float32x4_t vabdq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 39); }

__ai int16x8_t vabdl_s8(int8x8_t __a, int8x8_t __b) {
  return (int16x8_t)vmovl_u8((uint8x8_t)vabd_s8(__a, __b)); }
__ai int32x4_t vabdl_s16(int16x4_t __a, int16x4_t __b) {
  return (int32x4_t)vmovl_u16((uint16x4_t)vabd_s16(__a, __b)); }
__ai int64x2_t vabdl_s32(int32x2_t __a, int32x2_t __b) {
  return (int64x2_t)vmovl_u32((uint32x2_t)vabd_s32(__a, __b)); }
__ai uint16x8_t vabdl_u8(uint8x8_t __a, uint8x8_t __b) {
  return vmovl_u8(vabd_u8(__a, __b)); }
__ai uint32x4_t vabdl_u16(uint16x4_t __a, uint16x4_t __b) {
  return vmovl_u16(vabd_u16(__a, __b)); }
__ai uint64x2_t vabdl_u32(uint32x2_t __a, uint32x2_t __b) {
  return vmovl_u32(vabd_u32(__a, __b)); }

__ai int8x8_t vaba_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c) {
  return __a + vabd_s8(__b, __c); }
__ai int16x4_t vaba_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c) {
  return __a + vabd_s16(__b, __c); }
__ai int32x2_t vaba_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c) {
  return __a + vabd_s32(__b, __c); }
__ai uint8x8_t vaba_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return __a + vabd_u8(__b, __c); }
__ai uint16x4_t vaba_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return __a + vabd_u16(__b, __c); }
__ai uint32x2_t vaba_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return __a + vabd_u32(__b, __c); }
__ai int8x16_t vabaq_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c) {
  return __a + vabdq_s8(__b, __c); }
__ai int16x8_t vabaq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c) {
  return __a + vabdq_s16(__b, __c); }
__ai int32x4_t vabaq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c) {
  return __a + vabdq_s32(__b, __c); }
__ai uint8x16_t vabaq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c) {
  return __a + vabdq_u8(__b, __c); }
__ai uint16x8_t vabaq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return __a + vabdq_u16(__b, __c); }
__ai uint32x4_t vabaq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return __a + vabdq_u32(__b, __c); }

__ai int16x8_t vabal_s8(int16x8_t __a, int8x8_t __b, int8x8_t __c) {
  return __a + vabdl_s8(__b, __c); }
__ai int32x4_t vabal_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c) {
  return __a + vabdl_s16(__b, __c); }
__ai int64x2_t vabal_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c) {
  return __a + vabdl_s32(__b, __c); }
__ai uint16x8_t vabal_u8(uint16x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return __a + vabdl_u8(__b, __c); }
__ai uint32x4_t vabal_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return __a + vabdl_u16(__b, __c); }
__ai uint64x2_t vabal_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return __a + vabdl_u32(__b, __c); }


__ai int8x8_t vabs_s8(int8x8_t __a) {
  return (int8x8_t)__builtin_neon_vabs_v(__a, 0); }
__ai int16x4_t vabs_s16(int16x4_t __a) {
  return (int16x4_t)__builtin_neon_vabs_v((int8x8_t)__a, 1); }
__ai int32x2_t vabs_s32(int32x2_t __a) {
  return (int32x2_t)__builtin_neon_vabs_v((int8x8_t)__a, 2); }
__ai float32x2_t vabs_f32(float32x2_t __a) {
  return (float32x2_t)__builtin_neon_vabs_v((int8x8_t)__a, 7); }
__ai int8x16_t vabsq_s8(int8x16_t __a) {
  return (int8x16_t)__builtin_neon_vabsq_v(__a, 32); }
__ai int16x8_t vabsq_s16(int16x8_t __a) {
  return (int16x8_t)__builtin_neon_vabsq_v((int8x16_t)__a, 33); }
__ai int32x4_t vabsq_s32(int32x4_t __a) {
  return (int32x4_t)__builtin_neon_vabsq_v((int8x16_t)__a, 34); }
__ai float32x4_t vabsq_f32(float32x4_t __a) {
  return (float32x4_t)__builtin_neon_vabsq_v((int8x16_t)__a, 39); }

__ai int8x8_t vadd_s8(int8x8_t __a, int8x8_t __b) {
  return __a + __b; }
__ai int16x4_t vadd_s16(int16x4_t __a, int16x4_t __b) {
  return __a + __b; }
__ai int32x2_t vadd_s32(int32x2_t __a, int32x2_t __b) {
  return __a + __b; }
__ai int64x1_t vadd_s64(int64x1_t __a, int64x1_t __b) {
  return __a + __b; }
__ai float32x2_t vadd_f32(float32x2_t __a, float32x2_t __b) {
  return __a + __b; }
__ai uint8x8_t vadd_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a + __b; }
__ai uint16x4_t vadd_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a + __b; }
__ai uint32x2_t vadd_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a + __b; }
__ai uint64x1_t vadd_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a + __b; }
__ai int8x16_t vaddq_s8(int8x16_t __a, int8x16_t __b) {
  return __a + __b; }
__ai int16x8_t vaddq_s16(int16x8_t __a, int16x8_t __b) {
  return __a + __b; }
__ai int32x4_t vaddq_s32(int32x4_t __a, int32x4_t __b) {
  return __a + __b; }
__ai int64x2_t vaddq_s64(int64x2_t __a, int64x2_t __b) {
  return __a + __b; }
__ai float32x4_t vaddq_f32(float32x4_t __a, float32x4_t __b) {
  return __a + __b; }
__ai uint8x16_t vaddq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a + __b; }
__ai uint16x8_t vaddq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a + __b; }
__ai uint32x4_t vaddq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a + __b; }
__ai uint64x2_t vaddq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a + __b; }

__ai int8x8_t vaddhn_s16(int16x8_t __a, int16x8_t __b) {
  return (int8x8_t)__builtin_neon_vaddhn_v((int8x16_t)__a, (int8x16_t)__b, 0); }
__ai int16x4_t vaddhn_s32(int32x4_t __a, int32x4_t __b) {
  return (int16x4_t)__builtin_neon_vaddhn_v((int8x16_t)__a, (int8x16_t)__b, 1); }
__ai int32x2_t vaddhn_s64(int64x2_t __a, int64x2_t __b) {
  return (int32x2_t)__builtin_neon_vaddhn_v((int8x16_t)__a, (int8x16_t)__b, 2); }
__ai uint8x8_t vaddhn_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint8x8_t)__builtin_neon_vaddhn_v((int8x16_t)__a, (int8x16_t)__b, 16); }
__ai uint16x4_t vaddhn_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint16x4_t)__builtin_neon_vaddhn_v((int8x16_t)__a, (int8x16_t)__b, 17); }
__ai uint32x2_t vaddhn_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint32x2_t)__builtin_neon_vaddhn_v((int8x16_t)__a, (int8x16_t)__b, 18); }

__ai int16x8_t vaddl_s8(int8x8_t __a, int8x8_t __b) {
  return vmovl_s8(__a) + vmovl_s8(__b); }
__ai int32x4_t vaddl_s16(int16x4_t __a, int16x4_t __b) {
  return vmovl_s16(__a) + vmovl_s16(__b); }
__ai int64x2_t vaddl_s32(int32x2_t __a, int32x2_t __b) {
  return vmovl_s32(__a) + vmovl_s32(__b); }
__ai uint16x8_t vaddl_u8(uint8x8_t __a, uint8x8_t __b) {
  return vmovl_u8(__a) + vmovl_u8(__b); }
__ai uint32x4_t vaddl_u16(uint16x4_t __a, uint16x4_t __b) {
  return vmovl_u16(__a) + vmovl_u16(__b); }
__ai uint64x2_t vaddl_u32(uint32x2_t __a, uint32x2_t __b) {
  return vmovl_u32(__a) + vmovl_u32(__b); }

__ai int16x8_t vaddw_s8(int16x8_t __a, int8x8_t __b) {
  return __a + vmovl_s8(__b); }
__ai int32x4_t vaddw_s16(int32x4_t __a, int16x4_t __b) {
  return __a + vmovl_s16(__b); }
__ai int64x2_t vaddw_s32(int64x2_t __a, int32x2_t __b) {
  return __a + vmovl_s32(__b); }
__ai uint16x8_t vaddw_u8(uint16x8_t __a, uint8x8_t __b) {
  return __a + vmovl_u8(__b); }
__ai uint32x4_t vaddw_u16(uint32x4_t __a, uint16x4_t __b) {
  return __a + vmovl_u16(__b); }
__ai uint64x2_t vaddw_u32(uint64x2_t __a, uint32x2_t __b) {
  return __a + vmovl_u32(__b); }

__ai int8x8_t vand_s8(int8x8_t __a, int8x8_t __b) {
  return __a & __b; }
__ai int16x4_t vand_s16(int16x4_t __a, int16x4_t __b) {
  return __a & __b; }
__ai int32x2_t vand_s32(int32x2_t __a, int32x2_t __b) {
  return __a & __b; }
__ai int64x1_t vand_s64(int64x1_t __a, int64x1_t __b) {
  return __a & __b; }
__ai uint8x8_t vand_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a & __b; }
__ai uint16x4_t vand_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a & __b; }
__ai uint32x2_t vand_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a & __b; }
__ai uint64x1_t vand_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a & __b; }
__ai int8x16_t vandq_s8(int8x16_t __a, int8x16_t __b) {
  return __a & __b; }
__ai int16x8_t vandq_s16(int16x8_t __a, int16x8_t __b) {
  return __a & __b; }
__ai int32x4_t vandq_s32(int32x4_t __a, int32x4_t __b) {
  return __a & __b; }
__ai int64x2_t vandq_s64(int64x2_t __a, int64x2_t __b) {
  return __a & __b; }
__ai uint8x16_t vandq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a & __b; }
__ai uint16x8_t vandq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a & __b; }
__ai uint32x4_t vandq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a & __b; }
__ai uint64x2_t vandq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a & __b; }

__ai int8x8_t vbic_s8(int8x8_t __a, int8x8_t __b) {
  return __a & ~__b; }
__ai int16x4_t vbic_s16(int16x4_t __a, int16x4_t __b) {
  return __a & ~__b; }
__ai int32x2_t vbic_s32(int32x2_t __a, int32x2_t __b) {
  return __a & ~__b; }
__ai int64x1_t vbic_s64(int64x1_t __a, int64x1_t __b) {
  return __a & ~__b; }
__ai uint8x8_t vbic_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a & ~__b; }
__ai uint16x4_t vbic_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a & ~__b; }
__ai uint32x2_t vbic_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a & ~__b; }
__ai uint64x1_t vbic_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a & ~__b; }
__ai int8x16_t vbicq_s8(int8x16_t __a, int8x16_t __b) {
  return __a & ~__b; }
__ai int16x8_t vbicq_s16(int16x8_t __a, int16x8_t __b) {
  return __a & ~__b; }
__ai int32x4_t vbicq_s32(int32x4_t __a, int32x4_t __b) {
  return __a & ~__b; }
__ai int64x2_t vbicq_s64(int64x2_t __a, int64x2_t __b) {
  return __a & ~__b; }
__ai uint8x16_t vbicq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a & ~__b; }
__ai uint16x8_t vbicq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a & ~__b; }
__ai uint32x4_t vbicq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a & ~__b; }
__ai uint64x2_t vbicq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a & ~__b; }

__ai int8x8_t vbsl_s8(uint8x8_t __a, int8x8_t __b, int8x8_t __c) {
  return (int8x8_t)__builtin_neon_vbsl_v((int8x8_t)__a, __b, __c, 0); }
__ai int16x4_t vbsl_s16(uint16x4_t __a, int16x4_t __b, int16x4_t __c) {
  return (int16x4_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 1); }
__ai int32x2_t vbsl_s32(uint32x2_t __a, int32x2_t __b, int32x2_t __c) {
  return (int32x2_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 2); }
__ai int64x1_t vbsl_s64(uint64x1_t __a, int64x1_t __b, int64x1_t __c) {
  return (int64x1_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 3); }
__ai uint8x8_t vbsl_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return (uint8x8_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 16); }
__ai uint16x4_t vbsl_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return (uint16x4_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 17); }
__ai uint32x2_t vbsl_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return (uint32x2_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 18); }
__ai uint64x1_t vbsl_u64(uint64x1_t __a, uint64x1_t __b, uint64x1_t __c) {
  return (uint64x1_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 19); }
__ai float32x2_t vbsl_f32(uint32x2_t __a, float32x2_t __b, float32x2_t __c) {
  return (float32x2_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 7); }
__ai poly8x8_t vbsl_p8(uint8x8_t __a, poly8x8_t __b, poly8x8_t __c) {
  return (poly8x8_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 4); }
__ai poly16x4_t vbsl_p16(uint16x4_t __a, poly16x4_t __b, poly16x4_t __c) {
  return (poly16x4_t)__builtin_neon_vbsl_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 5); }
__ai int8x16_t vbslq_s8(uint8x16_t __a, int8x16_t __b, int8x16_t __c) {
  return (int8x16_t)__builtin_neon_vbslq_v((int8x16_t)__a, __b, __c, 32); }
__ai int16x8_t vbslq_s16(uint16x8_t __a, int16x8_t __b, int16x8_t __c) {
  return (int16x8_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 33); }
__ai int32x4_t vbslq_s32(uint32x4_t __a, int32x4_t __b, int32x4_t __c) {
  return (int32x4_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 34); }
__ai int64x2_t vbslq_s64(uint64x2_t __a, int64x2_t __b, int64x2_t __c) {
  return (int64x2_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 35); }
__ai uint8x16_t vbslq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c) {
  return (uint8x16_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 48); }
__ai uint16x8_t vbslq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return (uint16x8_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 49); }
__ai uint32x4_t vbslq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return (uint32x4_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 50); }
__ai uint64x2_t vbslq_u64(uint64x2_t __a, uint64x2_t __b, uint64x2_t __c) {
  return (uint64x2_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 51); }
__ai float32x4_t vbslq_f32(uint32x4_t __a, float32x4_t __b, float32x4_t __c) {
  return (float32x4_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 39); }
__ai poly8x16_t vbslq_p8(uint8x16_t __a, poly8x16_t __b, poly8x16_t __c) {
  return (poly8x16_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 36); }
__ai poly16x8_t vbslq_p16(uint16x8_t __a, poly16x8_t __b, poly16x8_t __c) {
  return (poly16x8_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 37); }

__ai uint32x2_t vcage_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vcage_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint32x4_t vcageq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vcageq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

__ai uint32x2_t vcagt_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vcagt_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint32x4_t vcagtq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vcagtq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

__ai uint32x2_t vcale_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vcale_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint32x4_t vcaleq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vcaleq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

__ai uint32x2_t vcalt_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vcalt_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint32x4_t vcaltq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vcaltq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

__ai uint8x8_t vceq_s8(int8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)(__a == __b); }
__ai uint16x4_t vceq_s16(int16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)(__a == __b); }
__ai uint32x2_t vceq_s32(int32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)(__a == __b); }
__ai uint32x2_t vceq_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)(__a == __b); }
__ai uint8x8_t vceq_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)(__a == __b); }
__ai uint16x4_t vceq_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)(__a == __b); }
__ai uint32x2_t vceq_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)(__a == __b); }
__ai uint8x8_t vceq_p8(poly8x8_t __a, poly8x8_t __b) {
  return (uint8x8_t)(__a == __b); }
__ai uint8x16_t vceqq_s8(int8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)(__a == __b); }
__ai uint16x8_t vceqq_s16(int16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)(__a == __b); }
__ai uint32x4_t vceqq_s32(int32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)(__a == __b); }
__ai uint32x4_t vceqq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)(__a == __b); }
__ai uint8x16_t vceqq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)(__a == __b); }
__ai uint16x8_t vceqq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)(__a == __b); }
__ai uint32x4_t vceqq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)(__a == __b); }
__ai uint8x16_t vceqq_p8(poly8x16_t __a, poly8x16_t __b) {
  return (uint8x16_t)(__a == __b); }

__ai uint8x8_t vcge_s8(int8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)(__a >= __b); }
__ai uint16x4_t vcge_s16(int16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)(__a >= __b); }
__ai uint32x2_t vcge_s32(int32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)(__a >= __b); }
__ai uint32x2_t vcge_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)(__a >= __b); }
__ai uint8x8_t vcge_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)(__a >= __b); }
__ai uint16x4_t vcge_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)(__a >= __b); }
__ai uint32x2_t vcge_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)(__a >= __b); }
__ai uint8x16_t vcgeq_s8(int8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)(__a >= __b); }
__ai uint16x8_t vcgeq_s16(int16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)(__a >= __b); }
__ai uint32x4_t vcgeq_s32(int32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)(__a >= __b); }
__ai uint32x4_t vcgeq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)(__a >= __b); }
__ai uint8x16_t vcgeq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)(__a >= __b); }
__ai uint16x8_t vcgeq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)(__a >= __b); }
__ai uint32x4_t vcgeq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)(__a >= __b); }

__ai uint8x8_t vcgt_s8(int8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)(__a > __b); }
__ai uint16x4_t vcgt_s16(int16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)(__a > __b); }
__ai uint32x2_t vcgt_s32(int32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)(__a > __b); }
__ai uint32x2_t vcgt_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)(__a > __b); }
__ai uint8x8_t vcgt_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)(__a > __b); }
__ai uint16x4_t vcgt_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)(__a > __b); }
__ai uint32x2_t vcgt_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)(__a > __b); }
__ai uint8x16_t vcgtq_s8(int8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)(__a > __b); }
__ai uint16x8_t vcgtq_s16(int16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)(__a > __b); }
__ai uint32x4_t vcgtq_s32(int32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)(__a > __b); }
__ai uint32x4_t vcgtq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)(__a > __b); }
__ai uint8x16_t vcgtq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)(__a > __b); }
__ai uint16x8_t vcgtq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)(__a > __b); }
__ai uint32x4_t vcgtq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)(__a > __b); }

__ai uint8x8_t vcle_s8(int8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)(__a <= __b); }
__ai uint16x4_t vcle_s16(int16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)(__a <= __b); }
__ai uint32x2_t vcle_s32(int32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)(__a <= __b); }
__ai uint32x2_t vcle_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)(__a <= __b); }
__ai uint8x8_t vcle_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)(__a <= __b); }
__ai uint16x4_t vcle_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)(__a <= __b); }
__ai uint32x2_t vcle_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)(__a <= __b); }
__ai uint8x16_t vcleq_s8(int8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)(__a <= __b); }
__ai uint16x8_t vcleq_s16(int16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)(__a <= __b); }
__ai uint32x4_t vcleq_s32(int32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)(__a <= __b); }
__ai uint32x4_t vcleq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)(__a <= __b); }
__ai uint8x16_t vcleq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)(__a <= __b); }
__ai uint16x8_t vcleq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)(__a <= __b); }
__ai uint32x4_t vcleq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)(__a <= __b); }

__ai int8x8_t vcls_s8(int8x8_t __a) {
  return (int8x8_t)__builtin_neon_vcls_v(__a, 0); }
__ai int16x4_t vcls_s16(int16x4_t __a) {
  return (int16x4_t)__builtin_neon_vcls_v((int8x8_t)__a, 1); }
__ai int32x2_t vcls_s32(int32x2_t __a) {
  return (int32x2_t)__builtin_neon_vcls_v((int8x8_t)__a, 2); }
__ai int8x16_t vclsq_s8(int8x16_t __a) {
  return (int8x16_t)__builtin_neon_vclsq_v(__a, 32); }
__ai int16x8_t vclsq_s16(int16x8_t __a) {
  return (int16x8_t)__builtin_neon_vclsq_v((int8x16_t)__a, 33); }
__ai int32x4_t vclsq_s32(int32x4_t __a) {
  return (int32x4_t)__builtin_neon_vclsq_v((int8x16_t)__a, 34); }

__ai uint8x8_t vclt_s8(int8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)(__a < __b); }
__ai uint16x4_t vclt_s16(int16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)(__a < __b); }
__ai uint32x2_t vclt_s32(int32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)(__a < __b); }
__ai uint32x2_t vclt_f32(float32x2_t __a, float32x2_t __b) {
  return (uint32x2_t)(__a < __b); }
__ai uint8x8_t vclt_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)(__a < __b); }
__ai uint16x4_t vclt_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)(__a < __b); }
__ai uint32x2_t vclt_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)(__a < __b); }
__ai uint8x16_t vcltq_s8(int8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)(__a < __b); }
__ai uint16x8_t vcltq_s16(int16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)(__a < __b); }
__ai uint32x4_t vcltq_s32(int32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)(__a < __b); }
__ai uint32x4_t vcltq_f32(float32x4_t __a, float32x4_t __b) {
  return (uint32x4_t)(__a < __b); }
__ai uint8x16_t vcltq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)(__a < __b); }
__ai uint16x8_t vcltq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)(__a < __b); }
__ai uint32x4_t vcltq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)(__a < __b); }

__ai int8x8_t vclz_s8(int8x8_t __a) {
  return (int8x8_t)__builtin_neon_vclz_v(__a, 0); }
__ai int16x4_t vclz_s16(int16x4_t __a) {
  return (int16x4_t)__builtin_neon_vclz_v((int8x8_t)__a, 1); }
__ai int32x2_t vclz_s32(int32x2_t __a) {
  return (int32x2_t)__builtin_neon_vclz_v((int8x8_t)__a, 2); }
__ai uint8x8_t vclz_u8(uint8x8_t __a) {
  return (uint8x8_t)__builtin_neon_vclz_v((int8x8_t)__a, 16); }
__ai uint16x4_t vclz_u16(uint16x4_t __a) {
  return (uint16x4_t)__builtin_neon_vclz_v((int8x8_t)__a, 17); }
__ai uint32x2_t vclz_u32(uint32x2_t __a) {
  return (uint32x2_t)__builtin_neon_vclz_v((int8x8_t)__a, 18); }
__ai int8x16_t vclzq_s8(int8x16_t __a) {
  return (int8x16_t)__builtin_neon_vclzq_v(__a, 32); }
__ai int16x8_t vclzq_s16(int16x8_t __a) {
  return (int16x8_t)__builtin_neon_vclzq_v((int8x16_t)__a, 33); }
__ai int32x4_t vclzq_s32(int32x4_t __a) {
  return (int32x4_t)__builtin_neon_vclzq_v((int8x16_t)__a, 34); }
__ai uint8x16_t vclzq_u8(uint8x16_t __a) {
  return (uint8x16_t)__builtin_neon_vclzq_v((int8x16_t)__a, 48); }
__ai uint16x8_t vclzq_u16(uint16x8_t __a) {
  return (uint16x8_t)__builtin_neon_vclzq_v((int8x16_t)__a, 49); }
__ai uint32x4_t vclzq_u32(uint32x4_t __a) {
  return (uint32x4_t)__builtin_neon_vclzq_v((int8x16_t)__a, 50); }

__ai uint8x8_t vcnt_u8(uint8x8_t __a) {
  return (uint8x8_t)__builtin_neon_vcnt_v((int8x8_t)__a, 16); }
__ai int8x8_t vcnt_s8(int8x8_t __a) {
  return (int8x8_t)__builtin_neon_vcnt_v(__a, 0); }
__ai poly8x8_t vcnt_p8(poly8x8_t __a) {
  return (poly8x8_t)__builtin_neon_vcnt_v((int8x8_t)__a, 4); }
__ai uint8x16_t vcntq_u8(uint8x16_t __a) {
  return (uint8x16_t)__builtin_neon_vcntq_v((int8x16_t)__a, 48); }
__ai int8x16_t vcntq_s8(int8x16_t __a) {
  return (int8x16_t)__builtin_neon_vcntq_v(__a, 32); }
__ai poly8x16_t vcntq_p8(poly8x16_t __a) {
  return (poly8x16_t)__builtin_neon_vcntq_v((int8x16_t)__a, 36); }

__ai int8x16_t vcombine_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x16_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai int16x8_t vcombine_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x8_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai int32x4_t vcombine_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x4_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai int64x2_t vcombine_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x2_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai float16x8_t vcombine_f16(float16x4_t __a, float16x4_t __b) {
  return (float16x8_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai float32x4_t vcombine_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x4_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai uint8x16_t vcombine_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x16_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai uint16x8_t vcombine_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x8_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai uint32x4_t vcombine_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x4_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai uint64x2_t vcombine_u64(uint64x1_t __a, uint64x1_t __b) {
  return (uint64x2_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai poly8x16_t vcombine_p8(poly8x8_t __a, poly8x8_t __b) {
  return (poly8x16_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }
__ai poly16x8_t vcombine_p16(poly16x4_t __a, poly16x4_t __b) {
  return (poly16x8_t)__builtin_shufflevector((int64x1_t)__a, (int64x1_t)__b, 0, 1); }

__ai int8x8_t vcreate_s8(uint64_t __a) {
  return (int8x8_t)__a; }
__ai int16x4_t vcreate_s16(uint64_t __a) {
  return (int16x4_t)__a; }
__ai int32x2_t vcreate_s32(uint64_t __a) {
  return (int32x2_t)__a; }
__ai float16x4_t vcreate_f16(uint64_t __a) {
  return (float16x4_t)__a; }
__ai float32x2_t vcreate_f32(uint64_t __a) {
  return (float32x2_t)__a; }
__ai uint8x8_t vcreate_u8(uint64_t __a) {
  return (uint8x8_t)__a; }
__ai uint16x4_t vcreate_u16(uint64_t __a) {
  return (uint16x4_t)__a; }
__ai uint32x2_t vcreate_u32(uint64_t __a) {
  return (uint32x2_t)__a; }
__ai uint64x1_t vcreate_u64(uint64_t __a) {
  return (uint64x1_t)__a; }
__ai poly8x8_t vcreate_p8(uint64_t __a) {
  return (poly8x8_t)__a; }
__ai poly16x4_t vcreate_p16(uint64_t __a) {
  return (poly16x4_t)__a; }
__ai int64x1_t vcreate_s64(uint64_t __a) {
  return (int64x1_t)__a; }

__ai float16x4_t vcvt_f16_f32(float32x4_t __a) {
  return (float16x4_t)__builtin_neon_vcvt_f16_v((int8x16_t)__a, 6); }

__ai float32x2_t vcvt_f32_s32(int32x2_t __a) {
  return (float32x2_t)__builtin_neon_vcvt_f32_v((int8x8_t)__a, 2); }
__ai float32x2_t vcvt_f32_u32(uint32x2_t __a) {
  return (float32x2_t)__builtin_neon_vcvt_f32_v((int8x8_t)__a, 18); }
__ai float32x4_t vcvtq_f32_s32(int32x4_t __a) {
  return (float32x4_t)__builtin_neon_vcvtq_f32_v((int8x16_t)__a, 34); }
__ai float32x4_t vcvtq_f32_u32(uint32x4_t __a) {
  return (float32x4_t)__builtin_neon_vcvtq_f32_v((int8x16_t)__a, 50); }

__ai float32x4_t vcvt_f32_f16(float16x4_t __a) {
  return (float32x4_t)__builtin_neon_vcvt_f32_f16((int8x8_t)__a, 6); }

#define vcvt_n_f32_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (float32x2_t)__builtin_neon_vcvt_n_f32_v((int8x8_t)__a, __b, 2); })
#define vcvt_n_f32_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (float32x2_t)__builtin_neon_vcvt_n_f32_v((int8x8_t)__a, __b, 18); })
#define vcvtq_n_f32_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (float32x4_t)__builtin_neon_vcvtq_n_f32_v((int8x16_t)__a, __b, 34); })
#define vcvtq_n_f32_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (float32x4_t)__builtin_neon_vcvtq_n_f32_v((int8x16_t)__a, __b, 50); })

#define vcvt_n_s32_f32(a, __b) __extension__ ({ \
  float32x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vcvt_n_s32_v((int8x8_t)__a, __b, 2); })
#define vcvtq_n_s32_f32(a, __b) __extension__ ({ \
  float32x4_t __a = (a); \
  (int32x4_t)__builtin_neon_vcvtq_n_s32_v((int8x16_t)__a, __b, 34); })

#define vcvt_n_u32_f32(a, __b) __extension__ ({ \
  float32x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vcvt_n_u32_v((int8x8_t)__a, __b, 18); })
#define vcvtq_n_u32_f32(a, __b) __extension__ ({ \
  float32x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vcvtq_n_u32_v((int8x16_t)__a, __b, 50); })

__ai int32x2_t vcvt_s32_f32(float32x2_t __a) {
  return (int32x2_t)__builtin_neon_vcvt_s32_v((int8x8_t)__a, 2); }
__ai int32x4_t vcvtq_s32_f32(float32x4_t __a) {
  return (int32x4_t)__builtin_neon_vcvtq_s32_v((int8x16_t)__a, 34); }

__ai uint32x2_t vcvt_u32_f32(float32x2_t __a) {
  return (uint32x2_t)__builtin_neon_vcvt_u32_v((int8x8_t)__a, 18); }
__ai uint32x4_t vcvtq_u32_f32(float32x4_t __a) {
  return (uint32x4_t)__builtin_neon_vcvtq_u32_v((int8x16_t)__a, 50); }

#define vdup_lane_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdup_lane_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b); })
#define vdup_lane_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b); })
#define vdup_lane_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdup_lane_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b); })
#define vdup_lane_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b); })
#define vdup_lane_p8(a, __b) __extension__ ({ \
  poly8x8_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdup_lane_p16(a, __b) __extension__ ({ \
  poly16x4_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b); })
#define vdup_lane_f32(a, __b) __extension__ ({ \
  float32x2_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b); })
#define vdupq_lane_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdupq_lane_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdupq_lane_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b); })
#define vdupq_lane_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdupq_lane_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdupq_lane_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b); })
#define vdupq_lane_p8(a, __b) __extension__ ({ \
  poly8x8_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdupq_lane_p16(a, __b) __extension__ ({ \
  poly16x4_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b, __b, __b, __b, __b); })
#define vdupq_lane_f32(a, __b) __extension__ ({ \
  float32x2_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b, __b, __b); })
#define vdup_lane_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b); })
#define vdup_lane_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b); })
#define vdupq_lane_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b); })
#define vdupq_lane_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  __builtin_shufflevector(__a, __a, __b, __b); })

__ai uint8x8_t vdup_n_u8(uint8_t __a) {
  return (uint8x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai uint16x4_t vdup_n_u16(uint16_t __a) {
  return (uint16x4_t){ __a, __a, __a, __a }; }
__ai uint32x2_t vdup_n_u32(uint32_t __a) {
  return (uint32x2_t){ __a, __a }; }
__ai int8x8_t vdup_n_s8(int8_t __a) {
  return (int8x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai int16x4_t vdup_n_s16(int16_t __a) {
  return (int16x4_t){ __a, __a, __a, __a }; }
__ai int32x2_t vdup_n_s32(int32_t __a) {
  return (int32x2_t){ __a, __a }; }
__ai poly8x8_t vdup_n_p8(poly8_t __a) {
  return (poly8x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai poly16x4_t vdup_n_p16(poly16_t __a) {
  return (poly16x4_t){ __a, __a, __a, __a }; }
__ai float32x2_t vdup_n_f32(float32_t __a) {
  return (float32x2_t){ __a, __a }; }
__ai uint8x16_t vdupq_n_u8(uint8_t __a) {
  return (uint8x16_t){ __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai uint16x8_t vdupq_n_u16(uint16_t __a) {
  return (uint16x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai uint32x4_t vdupq_n_u32(uint32_t __a) {
  return (uint32x4_t){ __a, __a, __a, __a }; }
__ai int8x16_t vdupq_n_s8(int8_t __a) {
  return (int8x16_t){ __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai int16x8_t vdupq_n_s16(int16_t __a) {
  return (int16x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai int32x4_t vdupq_n_s32(int32_t __a) {
  return (int32x4_t){ __a, __a, __a, __a }; }
__ai poly8x16_t vdupq_n_p8(poly8_t __a) {
  return (poly8x16_t){ __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai poly16x8_t vdupq_n_p16(poly16_t __a) {
  return (poly16x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai float32x4_t vdupq_n_f32(float32_t __a) {
  return (float32x4_t){ __a, __a, __a, __a }; }
__ai int64x1_t vdup_n_s64(int64_t __a) {
  return (int64x1_t){ __a }; }
__ai uint64x1_t vdup_n_u64(uint64_t __a) {
  return (uint64x1_t){ __a }; }
__ai int64x2_t vdupq_n_s64(int64_t __a) {
  return (int64x2_t){ __a, __a }; }
__ai uint64x2_t vdupq_n_u64(uint64_t __a) {
  return (uint64x2_t){ __a, __a }; }

__ai int8x8_t veor_s8(int8x8_t __a, int8x8_t __b) {
  return __a ^ __b; }
__ai int16x4_t veor_s16(int16x4_t __a, int16x4_t __b) {
  return __a ^ __b; }
__ai int32x2_t veor_s32(int32x2_t __a, int32x2_t __b) {
  return __a ^ __b; }
__ai int64x1_t veor_s64(int64x1_t __a, int64x1_t __b) {
  return __a ^ __b; }
__ai uint8x8_t veor_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a ^ __b; }
__ai uint16x4_t veor_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a ^ __b; }
__ai uint32x2_t veor_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a ^ __b; }
__ai uint64x1_t veor_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a ^ __b; }
__ai int8x16_t veorq_s8(int8x16_t __a, int8x16_t __b) {
  return __a ^ __b; }
__ai int16x8_t veorq_s16(int16x8_t __a, int16x8_t __b) {
  return __a ^ __b; }
__ai int32x4_t veorq_s32(int32x4_t __a, int32x4_t __b) {
  return __a ^ __b; }
__ai int64x2_t veorq_s64(int64x2_t __a, int64x2_t __b) {
  return __a ^ __b; }
__ai uint8x16_t veorq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a ^ __b; }
__ai uint16x8_t veorq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a ^ __b; }
__ai uint32x4_t veorq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a ^ __b; }
__ai uint64x2_t veorq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a ^ __b; }

#define vext_s8(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vext_v(__a, __b, __c, 0); })
#define vext_u8(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 16); })
#define vext_p8(a, b, __c) __extension__ ({ \
  poly8x8_t __a = (a); poly8x8_t __b = (b); \
  (poly8x8_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 4); })
#define vext_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 1); })
#define vext_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 17); })
#define vext_p16(a, b, __c) __extension__ ({ \
  poly16x4_t __a = (a); poly16x4_t __b = (b); \
  (poly16x4_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 5); })
#define vext_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 2); })
#define vext_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 18); })
#define vext_s64(a, b, __c) __extension__ ({ \
  int64x1_t __a = (a); int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 3); })
#define vext_u64(a, b, __c) __extension__ ({ \
  uint64x1_t __a = (a); uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 19); })
#define vext_f32(a, b, __c) __extension__ ({ \
  float32x2_t __a = (a); float32x2_t __b = (b); \
  (float32x2_t)__builtin_neon_vext_v((int8x8_t)__a, (int8x8_t)__b, __c, 7); })
#define vextq_s8(a, b, __c) __extension__ ({ \
  int8x16_t __a = (a); int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vextq_v(__a, __b, __c, 32); })
#define vextq_u8(a, b, __c) __extension__ ({ \
  uint8x16_t __a = (a); uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 48); })
#define vextq_p8(a, b, __c) __extension__ ({ \
  poly8x16_t __a = (a); poly8x16_t __b = (b); \
  (poly8x16_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 36); })
#define vextq_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 33); })
#define vextq_u16(a, b, __c) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 49); })
#define vextq_p16(a, b, __c) __extension__ ({ \
  poly16x8_t __a = (a); poly16x8_t __b = (b); \
  (poly16x8_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 37); })
#define vextq_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 34); })
#define vextq_u32(a, b, __c) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 50); })
#define vextq_s64(a, b, __c) __extension__ ({ \
  int64x2_t __a = (a); int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 35); })
#define vextq_u64(a, b, __c) __extension__ ({ \
  uint64x2_t __a = (a); uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 51); })
#define vextq_f32(a, b, __c) __extension__ ({ \
  float32x4_t __a = (a); float32x4_t __b = (b); \
  (float32x4_t)__builtin_neon_vextq_v((int8x16_t)__a, (int8x16_t)__b, __c, 39); })

__ai float32x2_t vfma_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c) {
  return (float32x2_t)__builtin_neon_vfma_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 7); }
__ai float32x4_t vfmaq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c) {
  return (float32x4_t)__builtin_neon_vfmaq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 39); }

__ai int8x8_t vget_high_s8(int8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 8, 9, 10, 11, 12, 13, 14, 15); }
__ai int16x4_t vget_high_s16(int16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 4, 5, 6, 7); }
__ai int32x2_t vget_high_s32(int32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 2, 3); }
__ai int64x1_t vget_high_s64(int64x2_t __a) {
  return __builtin_shufflevector(__a, __a, 1); }
__ai float16x4_t vget_high_f16(float16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 4, 5, 6, 7); }
__ai float32x2_t vget_high_f32(float32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 2, 3); }
__ai uint8x8_t vget_high_u8(uint8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 8, 9, 10, 11, 12, 13, 14, 15); }
__ai uint16x4_t vget_high_u16(uint16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 4, 5, 6, 7); }
__ai uint32x2_t vget_high_u32(uint32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 2, 3); }
__ai uint64x1_t vget_high_u64(uint64x2_t __a) {
  return __builtin_shufflevector(__a, __a, 1); }
__ai poly8x8_t vget_high_p8(poly8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 8, 9, 10, 11, 12, 13, 14, 15); }
__ai poly16x4_t vget_high_p16(poly16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 4, 5, 6, 7); }

#define vget_lane_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  (uint8_t)__builtin_neon_vget_lane_i8((int8x8_t)__a, __b); })
#define vget_lane_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  (uint16_t)__builtin_neon_vget_lane_i16((int16x4_t)__a, __b); })
#define vget_lane_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (uint32_t)__builtin_neon_vget_lane_i32((int32x2_t)__a, __b); })
#define vget_lane_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (int8_t)__builtin_neon_vget_lane_i8(__a, __b); })
#define vget_lane_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (int16_t)__builtin_neon_vget_lane_i16(__a, __b); })
#define vget_lane_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (int32_t)__builtin_neon_vget_lane_i32(__a, __b); })
#define vget_lane_p8(a, __b) __extension__ ({ \
  poly8x8_t __a = (a); \
  (poly8_t)__builtin_neon_vget_lane_i8((int8x8_t)__a, __b); })
#define vget_lane_p16(a, __b) __extension__ ({ \
  poly16x4_t __a = (a); \
  (poly16_t)__builtin_neon_vget_lane_i16((int16x4_t)__a, __b); })
#define vget_lane_f32(a, __b) __extension__ ({ \
  float32x2_t __a = (a); \
  (float32_t)__builtin_neon_vget_lane_f32(__a, __b); })
#define vgetq_lane_u8(a, __b) __extension__ ({ \
  uint8x16_t __a = (a); \
  (uint8_t)__builtin_neon_vgetq_lane_i8((int8x16_t)__a, __b); })
#define vgetq_lane_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint16_t)__builtin_neon_vgetq_lane_i16((int16x8_t)__a, __b); })
#define vgetq_lane_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint32_t)__builtin_neon_vgetq_lane_i32((int32x4_t)__a, __b); })
#define vgetq_lane_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  (int8_t)__builtin_neon_vgetq_lane_i8(__a, __b); })
#define vgetq_lane_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int16_t)__builtin_neon_vgetq_lane_i16(__a, __b); })
#define vgetq_lane_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int32_t)__builtin_neon_vgetq_lane_i32(__a, __b); })
#define vgetq_lane_p8(a, __b) __extension__ ({ \
  poly8x16_t __a = (a); \
  (poly8_t)__builtin_neon_vgetq_lane_i8((int8x16_t)__a, __b); })
#define vgetq_lane_p16(a, __b) __extension__ ({ \
  poly16x8_t __a = (a); \
  (poly16_t)__builtin_neon_vgetq_lane_i16((int16x8_t)__a, __b); })
#define vgetq_lane_f32(a, __b) __extension__ ({ \
  float32x4_t __a = (a); \
  (float32_t)__builtin_neon_vgetq_lane_f32(__a, __b); })
#define vget_lane_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  (int64_t)__builtin_neon_vget_lane_i64(__a, __b); })
#define vget_lane_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  (uint64_t)__builtin_neon_vget_lane_i64((int64x1_t)__a, __b); })
#define vgetq_lane_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int64_t)__builtin_neon_vgetq_lane_i64(__a, __b); })
#define vgetq_lane_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint64_t)__builtin_neon_vgetq_lane_i64((int64x2_t)__a, __b); })

__ai int8x8_t vget_low_s8(int8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3, 4, 5, 6, 7); }
__ai int16x4_t vget_low_s16(int16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3); }
__ai int32x2_t vget_low_s32(int32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1); }
__ai int64x1_t vget_low_s64(int64x2_t __a) {
  return __builtin_shufflevector(__a, __a, 0); }
__ai float16x4_t vget_low_f16(float16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3); }
__ai float32x2_t vget_low_f32(float32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1); }
__ai uint8x8_t vget_low_u8(uint8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3, 4, 5, 6, 7); }
__ai uint16x4_t vget_low_u16(uint16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3); }
__ai uint32x2_t vget_low_u32(uint32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1); }
__ai uint64x1_t vget_low_u64(uint64x2_t __a) {
  return __builtin_shufflevector(__a, __a, 0); }
__ai poly8x8_t vget_low_p8(poly8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3, 4, 5, 6, 7); }
__ai poly16x4_t vget_low_p16(poly16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 0, 1, 2, 3); }

__ai int8x8_t vhadd_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vhadd_v(__a, __b, 0); }
__ai int16x4_t vhadd_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vhadd_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vhadd_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vhadd_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vhadd_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vhadd_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vhadd_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vhadd_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vhadd_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vhadd_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai int8x16_t vhaddq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vhaddq_v(__a, __b, 32); }
__ai int16x8_t vhaddq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vhaddq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vhaddq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vhaddq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vhaddq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vhaddq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vhaddq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vhaddq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vhaddq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vhaddq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

__ai int8x8_t vhsub_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vhsub_v(__a, __b, 0); }
__ai int16x4_t vhsub_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vhsub_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vhsub_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vhsub_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vhsub_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vhsub_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vhsub_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vhsub_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vhsub_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vhsub_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai int8x16_t vhsubq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vhsubq_v(__a, __b, 32); }
__ai int16x8_t vhsubq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vhsubq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vhsubq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vhsubq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vhsubq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vhsubq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vhsubq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vhsubq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vhsubq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vhsubq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

#define vld1q_u8(__a) __extension__ ({ \
  (uint8x16_t)__builtin_neon_vld1q_v(__a, 48); })
#define vld1q_u16(__a) __extension__ ({ \
  (uint16x8_t)__builtin_neon_vld1q_v(__a, 49); })
#define vld1q_u32(__a) __extension__ ({ \
  (uint32x4_t)__builtin_neon_vld1q_v(__a, 50); })
#define vld1q_u64(__a) __extension__ ({ \
  (uint64x2_t)__builtin_neon_vld1q_v(__a, 51); })
#define vld1q_s8(__a) __extension__ ({ \
  (int8x16_t)__builtin_neon_vld1q_v(__a, 32); })
#define vld1q_s16(__a) __extension__ ({ \
  (int16x8_t)__builtin_neon_vld1q_v(__a, 33); })
#define vld1q_s32(__a) __extension__ ({ \
  (int32x4_t)__builtin_neon_vld1q_v(__a, 34); })
#define vld1q_s64(__a) __extension__ ({ \
  (int64x2_t)__builtin_neon_vld1q_v(__a, 35); })
#define vld1q_f16(__a) __extension__ ({ \
  (float16x8_t)__builtin_neon_vld1q_v(__a, 38); })
#define vld1q_f32(__a) __extension__ ({ \
  (float32x4_t)__builtin_neon_vld1q_v(__a, 39); })
#define vld1q_p8(__a) __extension__ ({ \
  (poly8x16_t)__builtin_neon_vld1q_v(__a, 36); })
#define vld1q_p16(__a) __extension__ ({ \
  (poly16x8_t)__builtin_neon_vld1q_v(__a, 37); })
#define vld1_u8(__a) __extension__ ({ \
  (uint8x8_t)__builtin_neon_vld1_v(__a, 16); })
#define vld1_u16(__a) __extension__ ({ \
  (uint16x4_t)__builtin_neon_vld1_v(__a, 17); })
#define vld1_u32(__a) __extension__ ({ \
  (uint32x2_t)__builtin_neon_vld1_v(__a, 18); })
#define vld1_u64(__a) __extension__ ({ \
  (uint64x1_t)__builtin_neon_vld1_v(__a, 19); })
#define vld1_s8(__a) __extension__ ({ \
  (int8x8_t)__builtin_neon_vld1_v(__a, 0); })
#define vld1_s16(__a) __extension__ ({ \
  (int16x4_t)__builtin_neon_vld1_v(__a, 1); })
#define vld1_s32(__a) __extension__ ({ \
  (int32x2_t)__builtin_neon_vld1_v(__a, 2); })
#define vld1_s64(__a) __extension__ ({ \
  (int64x1_t)__builtin_neon_vld1_v(__a, 3); })
#define vld1_f16(__a) __extension__ ({ \
  (float16x4_t)__builtin_neon_vld1_v(__a, 6); })
#define vld1_f32(__a) __extension__ ({ \
  (float32x2_t)__builtin_neon_vld1_v(__a, 7); })
#define vld1_p8(__a) __extension__ ({ \
  (poly8x8_t)__builtin_neon_vld1_v(__a, 4); })
#define vld1_p16(__a) __extension__ ({ \
  (poly16x4_t)__builtin_neon_vld1_v(__a, 5); })

#define vld1q_dup_u8(__a) __extension__ ({ \
  (uint8x16_t)__builtin_neon_vld1q_dup_v(__a, 48); })
#define vld1q_dup_u16(__a) __extension__ ({ \
  (uint16x8_t)__builtin_neon_vld1q_dup_v(__a, 49); })
#define vld1q_dup_u32(__a) __extension__ ({ \
  (uint32x4_t)__builtin_neon_vld1q_dup_v(__a, 50); })
#define vld1q_dup_u64(__a) __extension__ ({ \
  (uint64x2_t)__builtin_neon_vld1q_dup_v(__a, 51); })
#define vld1q_dup_s8(__a) __extension__ ({ \
  (int8x16_t)__builtin_neon_vld1q_dup_v(__a, 32); })
#define vld1q_dup_s16(__a) __extension__ ({ \
  (int16x8_t)__builtin_neon_vld1q_dup_v(__a, 33); })
#define vld1q_dup_s32(__a) __extension__ ({ \
  (int32x4_t)__builtin_neon_vld1q_dup_v(__a, 34); })
#define vld1q_dup_s64(__a) __extension__ ({ \
  (int64x2_t)__builtin_neon_vld1q_dup_v(__a, 35); })
#define vld1q_dup_f16(__a) __extension__ ({ \
  (float16x8_t)__builtin_neon_vld1q_dup_v(__a, 38); })
#define vld1q_dup_f32(__a) __extension__ ({ \
  (float32x4_t)__builtin_neon_vld1q_dup_v(__a, 39); })
#define vld1q_dup_p8(__a) __extension__ ({ \
  (poly8x16_t)__builtin_neon_vld1q_dup_v(__a, 36); })
#define vld1q_dup_p16(__a) __extension__ ({ \
  (poly16x8_t)__builtin_neon_vld1q_dup_v(__a, 37); })
#define vld1_dup_u8(__a) __extension__ ({ \
  (uint8x8_t)__builtin_neon_vld1_dup_v(__a, 16); })
#define vld1_dup_u16(__a) __extension__ ({ \
  (uint16x4_t)__builtin_neon_vld1_dup_v(__a, 17); })
#define vld1_dup_u32(__a) __extension__ ({ \
  (uint32x2_t)__builtin_neon_vld1_dup_v(__a, 18); })
#define vld1_dup_u64(__a) __extension__ ({ \
  (uint64x1_t)__builtin_neon_vld1_dup_v(__a, 19); })
#define vld1_dup_s8(__a) __extension__ ({ \
  (int8x8_t)__builtin_neon_vld1_dup_v(__a, 0); })
#define vld1_dup_s16(__a) __extension__ ({ \
  (int16x4_t)__builtin_neon_vld1_dup_v(__a, 1); })
#define vld1_dup_s32(__a) __extension__ ({ \
  (int32x2_t)__builtin_neon_vld1_dup_v(__a, 2); })
#define vld1_dup_s64(__a) __extension__ ({ \
  (int64x1_t)__builtin_neon_vld1_dup_v(__a, 3); })
#define vld1_dup_f16(__a) __extension__ ({ \
  (float16x4_t)__builtin_neon_vld1_dup_v(__a, 6); })
#define vld1_dup_f32(__a) __extension__ ({ \
  (float32x2_t)__builtin_neon_vld1_dup_v(__a, 7); })
#define vld1_dup_p8(__a) __extension__ ({ \
  (poly8x8_t)__builtin_neon_vld1_dup_v(__a, 4); })
#define vld1_dup_p16(__a) __extension__ ({ \
  (poly16x4_t)__builtin_neon_vld1_dup_v(__a, 5); })

#define vld1q_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 48); })
#define vld1q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 49); })
#define vld1q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 50); })
#define vld1q_lane_u64(__a, b, __c) __extension__ ({ \
  uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 51); })
#define vld1q_lane_s8(__a, b, __c) __extension__ ({ \
  int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vld1q_lane_v(__a, __b, __c, 32); })
#define vld1q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 33); })
#define vld1q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 34); })
#define vld1q_lane_s64(__a, b, __c) __extension__ ({ \
  int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 35); })
#define vld1q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8_t __b = (b); \
  (float16x8_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 38); })
#define vld1q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4_t __b = (b); \
  (float32x4_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 39); })
#define vld1q_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x16_t __b = (b); \
  (poly8x16_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 36); })
#define vld1q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8_t __b = (b); \
  (poly16x8_t)__builtin_neon_vld1q_lane_v(__a, (int8x16_t)__b, __c, 37); })
#define vld1_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 16); })
#define vld1_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 17); })
#define vld1_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 18); })
#define vld1_lane_u64(__a, b, __c) __extension__ ({ \
  uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 19); })
#define vld1_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vld1_lane_v(__a, __b, __c, 0); })
#define vld1_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 1); })
#define vld1_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 2); })
#define vld1_lane_s64(__a, b, __c) __extension__ ({ \
  int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 3); })
#define vld1_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4_t __b = (b); \
  (float16x4_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 6); })
#define vld1_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2_t __b = (b); \
  (float32x2_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 7); })
#define vld1_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8_t __b = (b); \
  (poly8x8_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 4); })
#define vld1_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4_t __b = (b); \
  (poly16x4_t)__builtin_neon_vld1_lane_v(__a, (int8x8_t)__b, __c, 5); })

#define vld2q_u8(__a) __extension__ ({ \
  uint8x16x2_t r; __builtin_neon_vld2q_v(&r, __a, 48); r; })
#define vld2q_u16(__a) __extension__ ({ \
  uint16x8x2_t r; __builtin_neon_vld2q_v(&r, __a, 49); r; })
#define vld2q_u32(__a) __extension__ ({ \
  uint32x4x2_t r; __builtin_neon_vld2q_v(&r, __a, 50); r; })
#define vld2q_s8(__a) __extension__ ({ \
  int8x16x2_t r; __builtin_neon_vld2q_v(&r, __a, 32); r; })
#define vld2q_s16(__a) __extension__ ({ \
  int16x8x2_t r; __builtin_neon_vld2q_v(&r, __a, 33); r; })
#define vld2q_s32(__a) __extension__ ({ \
  int32x4x2_t r; __builtin_neon_vld2q_v(&r, __a, 34); r; })
#define vld2q_f16(__a) __extension__ ({ \
  float16x8x2_t r; __builtin_neon_vld2q_v(&r, __a, 38); r; })
#define vld2q_f32(__a) __extension__ ({ \
  float32x4x2_t r; __builtin_neon_vld2q_v(&r, __a, 39); r; })
#define vld2q_p8(__a) __extension__ ({ \
  poly8x16x2_t r; __builtin_neon_vld2q_v(&r, __a, 36); r; })
#define vld2q_p16(__a) __extension__ ({ \
  poly16x8x2_t r; __builtin_neon_vld2q_v(&r, __a, 37); r; })
#define vld2_u8(__a) __extension__ ({ \
  uint8x8x2_t r; __builtin_neon_vld2_v(&r, __a, 16); r; })
#define vld2_u16(__a) __extension__ ({ \
  uint16x4x2_t r; __builtin_neon_vld2_v(&r, __a, 17); r; })
#define vld2_u32(__a) __extension__ ({ \
  uint32x2x2_t r; __builtin_neon_vld2_v(&r, __a, 18); r; })
#define vld2_u64(__a) __extension__ ({ \
  uint64x1x2_t r; __builtin_neon_vld2_v(&r, __a, 19); r; })
#define vld2_s8(__a) __extension__ ({ \
  int8x8x2_t r; __builtin_neon_vld2_v(&r, __a, 0); r; })
#define vld2_s16(__a) __extension__ ({ \
  int16x4x2_t r; __builtin_neon_vld2_v(&r, __a, 1); r; })
#define vld2_s32(__a) __extension__ ({ \
  int32x2x2_t r; __builtin_neon_vld2_v(&r, __a, 2); r; })
#define vld2_s64(__a) __extension__ ({ \
  int64x1x2_t r; __builtin_neon_vld2_v(&r, __a, 3); r; })
#define vld2_f16(__a) __extension__ ({ \
  float16x4x2_t r; __builtin_neon_vld2_v(&r, __a, 6); r; })
#define vld2_f32(__a) __extension__ ({ \
  float32x2x2_t r; __builtin_neon_vld2_v(&r, __a, 7); r; })
#define vld2_p8(__a) __extension__ ({ \
  poly8x8x2_t r; __builtin_neon_vld2_v(&r, __a, 4); r; })
#define vld2_p16(__a) __extension__ ({ \
  poly16x4x2_t r; __builtin_neon_vld2_v(&r, __a, 5); r; })

#define vld2_dup_u8(__a) __extension__ ({ \
  uint8x8x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 16); r; })
#define vld2_dup_u16(__a) __extension__ ({ \
  uint16x4x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 17); r; })
#define vld2_dup_u32(__a) __extension__ ({ \
  uint32x2x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 18); r; })
#define vld2_dup_u64(__a) __extension__ ({ \
  uint64x1x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 19); r; })
#define vld2_dup_s8(__a) __extension__ ({ \
  int8x8x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 0); r; })
#define vld2_dup_s16(__a) __extension__ ({ \
  int16x4x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 1); r; })
#define vld2_dup_s32(__a) __extension__ ({ \
  int32x2x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 2); r; })
#define vld2_dup_s64(__a) __extension__ ({ \
  int64x1x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 3); r; })
#define vld2_dup_f16(__a) __extension__ ({ \
  float16x4x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 6); r; })
#define vld2_dup_f32(__a) __extension__ ({ \
  float32x2x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 7); r; })
#define vld2_dup_p8(__a) __extension__ ({ \
  poly8x8x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 4); r; })
#define vld2_dup_p16(__a) __extension__ ({ \
  poly16x4x2_t r; __builtin_neon_vld2_dup_v(&r, __a, 5); r; })

#define vld2q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8x2_t __b = (b); \
  uint16x8x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 49); r; })
#define vld2q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4x2_t __b = (b); \
  uint32x4x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 50); r; })
#define vld2q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8x2_t __b = (b); \
  int16x8x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 33); r; })
#define vld2q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4x2_t __b = (b); \
  int32x4x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 34); r; })
#define vld2q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8x2_t __b = (b); \
  float16x8x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 38); r; })
#define vld2q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4x2_t __b = (b); \
  float32x4x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 39); r; })
#define vld2q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8x2_t __b = (b); \
  poly16x8x2_t r; __builtin_neon_vld2q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 37); r; })
#define vld2_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8x2_t __b = (b); \
  uint8x8x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 16); r; })
#define vld2_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4x2_t __b = (b); \
  uint16x4x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 17); r; })
#define vld2_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2x2_t __b = (b); \
  uint32x2x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 18); r; })
#define vld2_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8x2_t __b = (b); \
  int8x8x2_t r; __builtin_neon_vld2_lane_v(&r, __a, __b.val[0], __b.val[1], __c, 0); r; })
#define vld2_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4x2_t __b = (b); \
  int16x4x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 1); r; })
#define vld2_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2x2_t __b = (b); \
  int32x2x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 2); r; })
#define vld2_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4x2_t __b = (b); \
  float16x4x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 6); r; })
#define vld2_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2x2_t __b = (b); \
  float32x2x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 7); r; })
#define vld2_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8x2_t __b = (b); \
  poly8x8x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 4); r; })
#define vld2_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4x2_t __b = (b); \
  poly16x4x2_t r; __builtin_neon_vld2_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 5); r; })

#define vld3q_u8(__a) __extension__ ({ \
  uint8x16x3_t r; __builtin_neon_vld3q_v(&r, __a, 48); r; })
#define vld3q_u16(__a) __extension__ ({ \
  uint16x8x3_t r; __builtin_neon_vld3q_v(&r, __a, 49); r; })
#define vld3q_u32(__a) __extension__ ({ \
  uint32x4x3_t r; __builtin_neon_vld3q_v(&r, __a, 50); r; })
#define vld3q_s8(__a) __extension__ ({ \
  int8x16x3_t r; __builtin_neon_vld3q_v(&r, __a, 32); r; })
#define vld3q_s16(__a) __extension__ ({ \
  int16x8x3_t r; __builtin_neon_vld3q_v(&r, __a, 33); r; })
#define vld3q_s32(__a) __extension__ ({ \
  int32x4x3_t r; __builtin_neon_vld3q_v(&r, __a, 34); r; })
#define vld3q_f16(__a) __extension__ ({ \
  float16x8x3_t r; __builtin_neon_vld3q_v(&r, __a, 38); r; })
#define vld3q_f32(__a) __extension__ ({ \
  float32x4x3_t r; __builtin_neon_vld3q_v(&r, __a, 39); r; })
#define vld3q_p8(__a) __extension__ ({ \
  poly8x16x3_t r; __builtin_neon_vld3q_v(&r, __a, 36); r; })
#define vld3q_p16(__a) __extension__ ({ \
  poly16x8x3_t r; __builtin_neon_vld3q_v(&r, __a, 37); r; })
#define vld3_u8(__a) __extension__ ({ \
  uint8x8x3_t r; __builtin_neon_vld3_v(&r, __a, 16); r; })
#define vld3_u16(__a) __extension__ ({ \
  uint16x4x3_t r; __builtin_neon_vld3_v(&r, __a, 17); r; })
#define vld3_u32(__a) __extension__ ({ \
  uint32x2x3_t r; __builtin_neon_vld3_v(&r, __a, 18); r; })
#define vld3_u64(__a) __extension__ ({ \
  uint64x1x3_t r; __builtin_neon_vld3_v(&r, __a, 19); r; })
#define vld3_s8(__a) __extension__ ({ \
  int8x8x3_t r; __builtin_neon_vld3_v(&r, __a, 0); r; })
#define vld3_s16(__a) __extension__ ({ \
  int16x4x3_t r; __builtin_neon_vld3_v(&r, __a, 1); r; })
#define vld3_s32(__a) __extension__ ({ \
  int32x2x3_t r; __builtin_neon_vld3_v(&r, __a, 2); r; })
#define vld3_s64(__a) __extension__ ({ \
  int64x1x3_t r; __builtin_neon_vld3_v(&r, __a, 3); r; })
#define vld3_f16(__a) __extension__ ({ \
  float16x4x3_t r; __builtin_neon_vld3_v(&r, __a, 6); r; })
#define vld3_f32(__a) __extension__ ({ \
  float32x2x3_t r; __builtin_neon_vld3_v(&r, __a, 7); r; })
#define vld3_p8(__a) __extension__ ({ \
  poly8x8x3_t r; __builtin_neon_vld3_v(&r, __a, 4); r; })
#define vld3_p16(__a) __extension__ ({ \
  poly16x4x3_t r; __builtin_neon_vld3_v(&r, __a, 5); r; })

#define vld3_dup_u8(__a) __extension__ ({ \
  uint8x8x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 16); r; })
#define vld3_dup_u16(__a) __extension__ ({ \
  uint16x4x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 17); r; })
#define vld3_dup_u32(__a) __extension__ ({ \
  uint32x2x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 18); r; })
#define vld3_dup_u64(__a) __extension__ ({ \
  uint64x1x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 19); r; })
#define vld3_dup_s8(__a) __extension__ ({ \
  int8x8x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 0); r; })
#define vld3_dup_s16(__a) __extension__ ({ \
  int16x4x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 1); r; })
#define vld3_dup_s32(__a) __extension__ ({ \
  int32x2x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 2); r; })
#define vld3_dup_s64(__a) __extension__ ({ \
  int64x1x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 3); r; })
#define vld3_dup_f16(__a) __extension__ ({ \
  float16x4x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 6); r; })
#define vld3_dup_f32(__a) __extension__ ({ \
  float32x2x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 7); r; })
#define vld3_dup_p8(__a) __extension__ ({ \
  poly8x8x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 4); r; })
#define vld3_dup_p16(__a) __extension__ ({ \
  poly16x4x3_t r; __builtin_neon_vld3_dup_v(&r, __a, 5); r; })

#define vld3q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8x3_t __b = (b); \
  uint16x8x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 49); r; })
#define vld3q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4x3_t __b = (b); \
  uint32x4x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 50); r; })
#define vld3q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8x3_t __b = (b); \
  int16x8x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 33); r; })
#define vld3q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4x3_t __b = (b); \
  int32x4x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 34); r; })
#define vld3q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8x3_t __b = (b); \
  float16x8x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 38); r; })
#define vld3q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4x3_t __b = (b); \
  float32x4x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 39); r; })
#define vld3q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8x3_t __b = (b); \
  poly16x8x3_t r; __builtin_neon_vld3q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 37); r; })
#define vld3_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8x3_t __b = (b); \
  uint8x8x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 16); r; })
#define vld3_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4x3_t __b = (b); \
  uint16x4x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 17); r; })
#define vld3_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2x3_t __b = (b); \
  uint32x2x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 18); r; })
#define vld3_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8x3_t __b = (b); \
  int8x8x3_t r; __builtin_neon_vld3_lane_v(&r, __a, __b.val[0], __b.val[1], __b.val[2], __c, 0); r; })
#define vld3_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4x3_t __b = (b); \
  int16x4x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 1); r; })
#define vld3_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2x3_t __b = (b); \
  int32x2x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 2); r; })
#define vld3_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4x3_t __b = (b); \
  float16x4x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 6); r; })
#define vld3_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2x3_t __b = (b); \
  float32x2x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 7); r; })
#define vld3_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8x3_t __b = (b); \
  poly8x8x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 4); r; })
#define vld3_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4x3_t __b = (b); \
  poly16x4x3_t r; __builtin_neon_vld3_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 5); r; })

#define vld4q_u8(__a) __extension__ ({ \
  uint8x16x4_t r; __builtin_neon_vld4q_v(&r, __a, 48); r; })
#define vld4q_u16(__a) __extension__ ({ \
  uint16x8x4_t r; __builtin_neon_vld4q_v(&r, __a, 49); r; })
#define vld4q_u32(__a) __extension__ ({ \
  uint32x4x4_t r; __builtin_neon_vld4q_v(&r, __a, 50); r; })
#define vld4q_s8(__a) __extension__ ({ \
  int8x16x4_t r; __builtin_neon_vld4q_v(&r, __a, 32); r; })
#define vld4q_s16(__a) __extension__ ({ \
  int16x8x4_t r; __builtin_neon_vld4q_v(&r, __a, 33); r; })
#define vld4q_s32(__a) __extension__ ({ \
  int32x4x4_t r; __builtin_neon_vld4q_v(&r, __a, 34); r; })
#define vld4q_f16(__a) __extension__ ({ \
  float16x8x4_t r; __builtin_neon_vld4q_v(&r, __a, 38); r; })
#define vld4q_f32(__a) __extension__ ({ \
  float32x4x4_t r; __builtin_neon_vld4q_v(&r, __a, 39); r; })
#define vld4q_p8(__a) __extension__ ({ \
  poly8x16x4_t r; __builtin_neon_vld4q_v(&r, __a, 36); r; })
#define vld4q_p16(__a) __extension__ ({ \
  poly16x8x4_t r; __builtin_neon_vld4q_v(&r, __a, 37); r; })
#define vld4_u8(__a) __extension__ ({ \
  uint8x8x4_t r; __builtin_neon_vld4_v(&r, __a, 16); r; })
#define vld4_u16(__a) __extension__ ({ \
  uint16x4x4_t r; __builtin_neon_vld4_v(&r, __a, 17); r; })
#define vld4_u32(__a) __extension__ ({ \
  uint32x2x4_t r; __builtin_neon_vld4_v(&r, __a, 18); r; })
#define vld4_u64(__a) __extension__ ({ \
  uint64x1x4_t r; __builtin_neon_vld4_v(&r, __a, 19); r; })
#define vld4_s8(__a) __extension__ ({ \
  int8x8x4_t r; __builtin_neon_vld4_v(&r, __a, 0); r; })
#define vld4_s16(__a) __extension__ ({ \
  int16x4x4_t r; __builtin_neon_vld4_v(&r, __a, 1); r; })
#define vld4_s32(__a) __extension__ ({ \
  int32x2x4_t r; __builtin_neon_vld4_v(&r, __a, 2); r; })
#define vld4_s64(__a) __extension__ ({ \
  int64x1x4_t r; __builtin_neon_vld4_v(&r, __a, 3); r; })
#define vld4_f16(__a) __extension__ ({ \
  float16x4x4_t r; __builtin_neon_vld4_v(&r, __a, 6); r; })
#define vld4_f32(__a) __extension__ ({ \
  float32x2x4_t r; __builtin_neon_vld4_v(&r, __a, 7); r; })
#define vld4_p8(__a) __extension__ ({ \
  poly8x8x4_t r; __builtin_neon_vld4_v(&r, __a, 4); r; })
#define vld4_p16(__a) __extension__ ({ \
  poly16x4x4_t r; __builtin_neon_vld4_v(&r, __a, 5); r; })

#define vld4_dup_u8(__a) __extension__ ({ \
  uint8x8x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 16); r; })
#define vld4_dup_u16(__a) __extension__ ({ \
  uint16x4x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 17); r; })
#define vld4_dup_u32(__a) __extension__ ({ \
  uint32x2x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 18); r; })
#define vld4_dup_u64(__a) __extension__ ({ \
  uint64x1x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 19); r; })
#define vld4_dup_s8(__a) __extension__ ({ \
  int8x8x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 0); r; })
#define vld4_dup_s16(__a) __extension__ ({ \
  int16x4x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 1); r; })
#define vld4_dup_s32(__a) __extension__ ({ \
  int32x2x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 2); r; })
#define vld4_dup_s64(__a) __extension__ ({ \
  int64x1x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 3); r; })
#define vld4_dup_f16(__a) __extension__ ({ \
  float16x4x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 6); r; })
#define vld4_dup_f32(__a) __extension__ ({ \
  float32x2x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 7); r; })
#define vld4_dup_p8(__a) __extension__ ({ \
  poly8x8x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 4); r; })
#define vld4_dup_p16(__a) __extension__ ({ \
  poly16x4x4_t r; __builtin_neon_vld4_dup_v(&r, __a, 5); r; })

#define vld4q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8x4_t __b = (b); \
  uint16x8x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 49); r; })
#define vld4q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4x4_t __b = (b); \
  uint32x4x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 50); r; })
#define vld4q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8x4_t __b = (b); \
  int16x8x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 33); r; })
#define vld4q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4x4_t __b = (b); \
  int32x4x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 34); r; })
#define vld4q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8x4_t __b = (b); \
  float16x8x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 38); r; })
#define vld4q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4x4_t __b = (b); \
  float32x4x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 39); r; })
#define vld4q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8x4_t __b = (b); \
  poly16x8x4_t r; __builtin_neon_vld4q_lane_v(&r, __a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 37); r; })
#define vld4_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8x4_t __b = (b); \
  uint8x8x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 16); r; })
#define vld4_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4x4_t __b = (b); \
  uint16x4x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 17); r; })
#define vld4_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2x4_t __b = (b); \
  uint32x2x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 18); r; })
#define vld4_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8x4_t __b = (b); \
  int8x8x4_t r; __builtin_neon_vld4_lane_v(&r, __a, __b.val[0], __b.val[1], __b.val[2], __b.val[3], __c, 0); r; })
#define vld4_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4x4_t __b = (b); \
  int16x4x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 1); r; })
#define vld4_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2x4_t __b = (b); \
  int32x2x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 2); r; })
#define vld4_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4x4_t __b = (b); \
  float16x4x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 6); r; })
#define vld4_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2x4_t __b = (b); \
  float32x2x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 7); r; })
#define vld4_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8x4_t __b = (b); \
  poly8x8x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 4); r; })
#define vld4_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4x4_t __b = (b); \
  poly16x4x4_t r; __builtin_neon_vld4_lane_v(&r, __a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 5); r; })

__ai int8x8_t vmax_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vmax_v(__a, __b, 0); }
__ai int16x4_t vmax_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vmax_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vmax_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vmax_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vmax_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vmax_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vmax_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vmax_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vmax_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vmax_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai float32x2_t vmax_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vmax_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai int8x16_t vmaxq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vmaxq_v(__a, __b, 32); }
__ai int16x8_t vmaxq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vmaxq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vmaxq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vmaxq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vmaxq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai float32x4_t vmaxq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 39); }

__ai int8x8_t vmin_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vmin_v(__a, __b, 0); }
__ai int16x4_t vmin_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vmin_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vmin_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vmin_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vmin_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vmin_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vmin_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vmin_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vmin_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vmin_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai float32x2_t vmin_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vmin_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai int8x16_t vminq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vminq_v(__a, __b, 32); }
__ai int16x8_t vminq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vminq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vminq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vminq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vminq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai float32x4_t vminq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 39); }

__ai int8x8_t vmla_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c) {
  return __a + (__b * __c); }
__ai int16x4_t vmla_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c) {
  return __a + (__b * __c); }
__ai int32x2_t vmla_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c) {
  return __a + (__b * __c); }
__ai float32x2_t vmla_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c) {
  return __a + (__b * __c); }
__ai uint8x8_t vmla_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return __a + (__b * __c); }
__ai uint16x4_t vmla_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return __a + (__b * __c); }
__ai uint32x2_t vmla_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return __a + (__b * __c); }
__ai int8x16_t vmlaq_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c) {
  return __a + (__b * __c); }
__ai int16x8_t vmlaq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c) {
  return __a + (__b * __c); }
__ai int32x4_t vmlaq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c) {
  return __a + (__b * __c); }
__ai float32x4_t vmlaq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c) {
  return __a + (__b * __c); }
__ai uint8x16_t vmlaq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c) {
  return __a + (__b * __c); }
__ai uint16x8_t vmlaq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return __a + (__b * __c); }
__ai uint32x4_t vmlaq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return __a + (__b * __c); }

__ai int16x8_t vmlal_s8(int16x8_t __a, int8x8_t __b, int8x8_t __c) {
  return __a + vmull_s8(__b, __c); }
__ai int32x4_t vmlal_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c) {
  return __a + vmull_s16(__b, __c); }
__ai int64x2_t vmlal_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c) {
  return __a + vmull_s32(__b, __c); }
__ai uint16x8_t vmlal_u8(uint16x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return __a + vmull_u8(__b, __c); }
__ai uint32x4_t vmlal_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return __a + vmull_u16(__b, __c); }
__ai uint64x2_t vmlal_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return __a + vmull_u32(__b, __c); }

#define vmlal_lane_s16(a, b, c, __d) __extension__ ({ \
  int32x4_t __a = (a); int16x4_t __b = (b); int16x4_t __c = (c); \
  __a + vmull_s16(__b, __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlal_lane_s32(a, b, c, __d) __extension__ ({ \
  int64x2_t __a = (a); int32x2_t __b = (b); int32x2_t __c = (c); \
  __a + vmull_s32(__b, __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmlal_lane_u16(a, b, c, __d) __extension__ ({ \
  uint32x4_t __a = (a); uint16x4_t __b = (b); uint16x4_t __c = (c); \
  __a + vmull_u16(__b, __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlal_lane_u32(a, b, c, __d) __extension__ ({ \
  uint64x2_t __a = (a); uint32x2_t __b = (b); uint32x2_t __c = (c); \
  __a + vmull_u32(__b, __builtin_shufflevector(__c, __c, __d, __d)); })

__ai int32x4_t vmlal_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c) {
  return __a + vmull_s16(__b, (int16x4_t){ __c, __c, __c, __c }); }
__ai int64x2_t vmlal_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c) {
  return __a + vmull_s32(__b, (int32x2_t){ __c, __c }); }
__ai uint32x4_t vmlal_n_u16(uint32x4_t __a, uint16x4_t __b, uint16_t __c) {
  return __a + vmull_u16(__b, (uint16x4_t){ __c, __c, __c, __c }); }
__ai uint64x2_t vmlal_n_u32(uint64x2_t __a, uint32x2_t __b, uint32_t __c) {
  return __a + vmull_u32(__b, (uint32x2_t){ __c, __c }); }

#define vmla_lane_s16(a, b, c, __d) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); int16x4_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmla_lane_s32(a, b, c, __d) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); int32x2_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmla_lane_u16(a, b, c, __d) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); uint16x4_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmla_lane_u32(a, b, c, __d) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); uint32x2_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmla_lane_f32(a, b, c, __d) __extension__ ({ \
  float32x2_t __a = (a); float32x2_t __b = (b); float32x2_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmlaq_lane_s16(a, b, c, __d) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); int16x4_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d, __d, __d, __d, __d)); })
#define vmlaq_lane_s32(a, b, c, __d) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); int32x2_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlaq_lane_u16(a, b, c, __d) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); uint16x4_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d, __d, __d, __d, __d)); })
#define vmlaq_lane_u32(a, b, c, __d) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); uint32x2_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlaq_lane_f32(a, b, c, __d) __extension__ ({ \
  float32x4_t __a = (a); float32x4_t __b = (b); float32x2_t __c = (c); \
  __a + (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })

__ai int16x4_t vmla_n_s16(int16x4_t __a, int16x4_t __b, int16_t __c) {
  return __a + (__b * (int16x4_t){ __c, __c, __c, __c }); }
__ai int32x2_t vmla_n_s32(int32x2_t __a, int32x2_t __b, int32_t __c) {
  return __a + (__b * (int32x2_t){ __c, __c }); }
__ai uint16x4_t vmla_n_u16(uint16x4_t __a, uint16x4_t __b, uint16_t __c) {
  return __a + (__b * (uint16x4_t){ __c, __c, __c, __c }); }
__ai uint32x2_t vmla_n_u32(uint32x2_t __a, uint32x2_t __b, uint32_t __c) {
  return __a + (__b * (uint32x2_t){ __c, __c }); }
__ai float32x2_t vmla_n_f32(float32x2_t __a, float32x2_t __b, float32_t __c) {
  return __a + (__b * (float32x2_t){ __c, __c }); }
__ai int16x8_t vmlaq_n_s16(int16x8_t __a, int16x8_t __b, int16_t __c) {
  return __a + (__b * (int16x8_t){ __c, __c, __c, __c, __c, __c, __c, __c }); }
__ai int32x4_t vmlaq_n_s32(int32x4_t __a, int32x4_t __b, int32_t __c) {
  return __a + (__b * (int32x4_t){ __c, __c, __c, __c }); }
__ai uint16x8_t vmlaq_n_u16(uint16x8_t __a, uint16x8_t __b, uint16_t __c) {
  return __a + (__b * (uint16x8_t){ __c, __c, __c, __c, __c, __c, __c, __c }); }
__ai uint32x4_t vmlaq_n_u32(uint32x4_t __a, uint32x4_t __b, uint32_t __c) {
  return __a + (__b * (uint32x4_t){ __c, __c, __c, __c }); }
__ai float32x4_t vmlaq_n_f32(float32x4_t __a, float32x4_t __b, float32_t __c) {
  return __a + (__b * (float32x4_t){ __c, __c, __c, __c }); }

__ai int8x8_t vmls_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c) {
  return __a - (__b * __c); }
__ai int16x4_t vmls_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c) {
  return __a - (__b * __c); }
__ai int32x2_t vmls_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c) {
  return __a - (__b * __c); }
__ai float32x2_t vmls_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c) {
  return __a - (__b * __c); }
__ai uint8x8_t vmls_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return __a - (__b * __c); }
__ai uint16x4_t vmls_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return __a - (__b * __c); }
__ai uint32x2_t vmls_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return __a - (__b * __c); }
__ai int8x16_t vmlsq_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c) {
  return __a - (__b * __c); }
__ai int16x8_t vmlsq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c) {
  return __a - (__b * __c); }
__ai int32x4_t vmlsq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c) {
  return __a - (__b * __c); }
__ai float32x4_t vmlsq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c) {
  return __a - (__b * __c); }
__ai uint8x16_t vmlsq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c) {
  return __a - (__b * __c); }
__ai uint16x8_t vmlsq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return __a - (__b * __c); }
__ai uint32x4_t vmlsq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return __a - (__b * __c); }

__ai int16x8_t vmlsl_s8(int16x8_t __a, int8x8_t __b, int8x8_t __c) {
  return __a - vmull_s8(__b, __c); }
__ai int32x4_t vmlsl_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c) {
  return __a - vmull_s16(__b, __c); }
__ai int64x2_t vmlsl_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c) {
  return __a - vmull_s32(__b, __c); }
__ai uint16x8_t vmlsl_u8(uint16x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return __a - vmull_u8(__b, __c); }
__ai uint32x4_t vmlsl_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c) {
  return __a - vmull_u16(__b, __c); }
__ai uint64x2_t vmlsl_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c) {
  return __a - vmull_u32(__b, __c); }

#define vmlsl_lane_s16(a, b, c, __d) __extension__ ({ \
  int32x4_t __a = (a); int16x4_t __b = (b); int16x4_t __c = (c); \
  __a - vmull_s16(__b, __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlsl_lane_s32(a, b, c, __d) __extension__ ({ \
  int64x2_t __a = (a); int32x2_t __b = (b); int32x2_t __c = (c); \
  __a - vmull_s32(__b, __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmlsl_lane_u16(a, b, c, __d) __extension__ ({ \
  uint32x4_t __a = (a); uint16x4_t __b = (b); uint16x4_t __c = (c); \
  __a - vmull_u16(__b, __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlsl_lane_u32(a, b, c, __d) __extension__ ({ \
  uint64x2_t __a = (a); uint32x2_t __b = (b); uint32x2_t __c = (c); \
  __a - vmull_u32(__b, __builtin_shufflevector(__c, __c, __d, __d)); })

__ai int32x4_t vmlsl_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c) {
  return __a - vmull_s16(__b, (int16x4_t){ __c, __c, __c, __c }); }
__ai int64x2_t vmlsl_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c) {
  return __a - vmull_s32(__b, (int32x2_t){ __c, __c }); }
__ai uint32x4_t vmlsl_n_u16(uint32x4_t __a, uint16x4_t __b, uint16_t __c) {
  return __a - vmull_u16(__b, (uint16x4_t){ __c, __c, __c, __c }); }
__ai uint64x2_t vmlsl_n_u32(uint64x2_t __a, uint32x2_t __b, uint32_t __c) {
  return __a - vmull_u32(__b, (uint32x2_t){ __c, __c }); }

#define vmls_lane_s16(a, b, c, __d) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); int16x4_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmls_lane_s32(a, b, c, __d) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); int32x2_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmls_lane_u16(a, b, c, __d) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); uint16x4_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmls_lane_u32(a, b, c, __d) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); uint32x2_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmls_lane_f32(a, b, c, __d) __extension__ ({ \
  float32x2_t __a = (a); float32x2_t __b = (b); float32x2_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d)); })
#define vmlsq_lane_s16(a, b, c, __d) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); int16x4_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d, __d, __d, __d, __d)); })
#define vmlsq_lane_s32(a, b, c, __d) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); int32x2_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlsq_lane_u16(a, b, c, __d) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); uint16x4_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d, __d, __d, __d, __d)); })
#define vmlsq_lane_u32(a, b, c, __d) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); uint32x2_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vmlsq_lane_f32(a, b, c, __d) __extension__ ({ \
  float32x4_t __a = (a); float32x4_t __b = (b); float32x2_t __c = (c); \
  __a - (__b * __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })

__ai int16x4_t vmls_n_s16(int16x4_t __a, int16x4_t __b, int16_t __c) {
  return __a - (__b * (int16x4_t){ __c, __c, __c, __c }); }
__ai int32x2_t vmls_n_s32(int32x2_t __a, int32x2_t __b, int32_t __c) {
  return __a - (__b * (int32x2_t){ __c, __c }); }
__ai uint16x4_t vmls_n_u16(uint16x4_t __a, uint16x4_t __b, uint16_t __c) {
  return __a - (__b * (uint16x4_t){ __c, __c, __c, __c }); }
__ai uint32x2_t vmls_n_u32(uint32x2_t __a, uint32x2_t __b, uint32_t __c) {
  return __a - (__b * (uint32x2_t){ __c, __c }); }
__ai float32x2_t vmls_n_f32(float32x2_t __a, float32x2_t __b, float32_t __c) {
  return __a - (__b * (float32x2_t){ __c, __c }); }
__ai int16x8_t vmlsq_n_s16(int16x8_t __a, int16x8_t __b, int16_t __c) {
  return __a - (__b * (int16x8_t){ __c, __c, __c, __c, __c, __c, __c, __c }); }
__ai int32x4_t vmlsq_n_s32(int32x4_t __a, int32x4_t __b, int32_t __c) {
  return __a - (__b * (int32x4_t){ __c, __c, __c, __c }); }
__ai uint16x8_t vmlsq_n_u16(uint16x8_t __a, uint16x8_t __b, uint16_t __c) {
  return __a - (__b * (uint16x8_t){ __c, __c, __c, __c, __c, __c, __c, __c }); }
__ai uint32x4_t vmlsq_n_u32(uint32x4_t __a, uint32x4_t __b, uint32_t __c) {
  return __a - (__b * (uint32x4_t){ __c, __c, __c, __c }); }
__ai float32x4_t vmlsq_n_f32(float32x4_t __a, float32x4_t __b, float32_t __c) {
  return __a - (__b * (float32x4_t){ __c, __c, __c, __c }); }

__ai int8x8_t vmovn_s16(int16x8_t __a) {
  return (int8x8_t)__builtin_neon_vmovn_v((int8x16_t)__a, 0); }
__ai int16x4_t vmovn_s32(int32x4_t __a) {
  return (int16x4_t)__builtin_neon_vmovn_v((int8x16_t)__a, 1); }
__ai int32x2_t vmovn_s64(int64x2_t __a) {
  return (int32x2_t)__builtin_neon_vmovn_v((int8x16_t)__a, 2); }
__ai uint8x8_t vmovn_u16(uint16x8_t __a) {
  return (uint8x8_t)__builtin_neon_vmovn_v((int8x16_t)__a, 16); }
__ai uint16x4_t vmovn_u32(uint32x4_t __a) {
  return (uint16x4_t)__builtin_neon_vmovn_v((int8x16_t)__a, 17); }
__ai uint32x2_t vmovn_u64(uint64x2_t __a) {
  return (uint32x2_t)__builtin_neon_vmovn_v((int8x16_t)__a, 18); }

__ai uint8x8_t vmov_n_u8(uint8_t __a) {
  return (uint8x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai uint16x4_t vmov_n_u16(uint16_t __a) {
  return (uint16x4_t){ __a, __a, __a, __a }; }
__ai uint32x2_t vmov_n_u32(uint32_t __a) {
  return (uint32x2_t){ __a, __a }; }
__ai int8x8_t vmov_n_s8(int8_t __a) {
  return (int8x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai int16x4_t vmov_n_s16(int16_t __a) {
  return (int16x4_t){ __a, __a, __a, __a }; }
__ai int32x2_t vmov_n_s32(int32_t __a) {
  return (int32x2_t){ __a, __a }; }
__ai poly8x8_t vmov_n_p8(poly8_t __a) {
  return (poly8x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai poly16x4_t vmov_n_p16(poly16_t __a) {
  return (poly16x4_t){ __a, __a, __a, __a }; }
__ai float32x2_t vmov_n_f32(float32_t __a) {
  return (float32x2_t){ __a, __a }; }
__ai uint8x16_t vmovq_n_u8(uint8_t __a) {
  return (uint8x16_t){ __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai uint16x8_t vmovq_n_u16(uint16_t __a) {
  return (uint16x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai uint32x4_t vmovq_n_u32(uint32_t __a) {
  return (uint32x4_t){ __a, __a, __a, __a }; }
__ai int8x16_t vmovq_n_s8(int8_t __a) {
  return (int8x16_t){ __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai int16x8_t vmovq_n_s16(int16_t __a) {
  return (int16x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai int32x4_t vmovq_n_s32(int32_t __a) {
  return (int32x4_t){ __a, __a, __a, __a }; }
__ai poly8x16_t vmovq_n_p8(poly8_t __a) {
  return (poly8x16_t){ __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai poly16x8_t vmovq_n_p16(poly16_t __a) {
  return (poly16x8_t){ __a, __a, __a, __a, __a, __a, __a, __a }; }
__ai float32x4_t vmovq_n_f32(float32_t __a) {
  return (float32x4_t){ __a, __a, __a, __a }; }
__ai int64x1_t vmov_n_s64(int64_t __a) {
  return (int64x1_t){ __a }; }
__ai uint64x1_t vmov_n_u64(uint64_t __a) {
  return (uint64x1_t){ __a }; }
__ai int64x2_t vmovq_n_s64(int64_t __a) {
  return (int64x2_t){ __a, __a }; }
__ai uint64x2_t vmovq_n_u64(uint64_t __a) {
  return (uint64x2_t){ __a, __a }; }

__ai int8x8_t vmul_s8(int8x8_t __a, int8x8_t __b) {
  return __a * __b; }
__ai int16x4_t vmul_s16(int16x4_t __a, int16x4_t __b) {
  return __a * __b; }
__ai int32x2_t vmul_s32(int32x2_t __a, int32x2_t __b) {
  return __a * __b; }
__ai float32x2_t vmul_f32(float32x2_t __a, float32x2_t __b) {
  return __a * __b; }
__ai uint8x8_t vmul_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a * __b; }
__ai uint16x4_t vmul_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a * __b; }
__ai uint32x2_t vmul_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a * __b; }
__ai int8x16_t vmulq_s8(int8x16_t __a, int8x16_t __b) {
  return __a * __b; }
__ai int16x8_t vmulq_s16(int16x8_t __a, int16x8_t __b) {
  return __a * __b; }
__ai int32x4_t vmulq_s32(int32x4_t __a, int32x4_t __b) {
  return __a * __b; }
__ai float32x4_t vmulq_f32(float32x4_t __a, float32x4_t __b) {
  return __a * __b; }
__ai uint8x16_t vmulq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a * __b; }
__ai uint16x8_t vmulq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a * __b; }
__ai uint32x4_t vmulq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a * __b; }

#define vmull_lane_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  vmull_s16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })
#define vmull_lane_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  vmull_s32(__a, __builtin_shufflevector(__b, __b, __c, __c)); })
#define vmull_lane_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  vmull_u16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })
#define vmull_lane_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  vmull_u32(__a, __builtin_shufflevector(__b, __b, __c, __c)); })

__ai int32x4_t vmull_n_s16(int16x4_t __a, int16_t __b) {
  return (int32x4_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)(int16x4_t){ __b, __b, __b, __b }, 34); }
__ai int64x2_t vmull_n_s32(int32x2_t __a, int32_t __b) {
  return (int64x2_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)(int32x2_t){ __b, __b }, 35); }
__ai uint32x4_t vmull_n_u16(uint16x4_t __a, uint16_t __b) {
  return (uint32x4_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)(uint16x4_t){ __b, __b, __b, __b }, 50); }
__ai uint64x2_t vmull_n_u32(uint32x2_t __a, uint32_t __b) {
  return (uint64x2_t)__builtin_neon_vmull_v((int8x8_t)__a, (int8x8_t)(uint32x2_t){ __b, __b }, 51); }

__ai poly8x8_t vmul_p8(poly8x8_t __a, poly8x8_t __b) {
  return (poly8x8_t)__builtin_neon_vmul_v((int8x8_t)__a, (int8x8_t)__b, 4); }
__ai poly8x16_t vmulq_p8(poly8x16_t __a, poly8x16_t __b) {
  return (poly8x16_t)__builtin_neon_vmulq_v((int8x16_t)__a, (int8x16_t)__b, 36); }

#define vmul_lane_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c); })
#define vmul_lane_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c); })
#define vmul_lane_f32(a, b, __c) __extension__ ({ \
  float32x2_t __a = (a); float32x2_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c); })
#define vmul_lane_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c); })
#define vmul_lane_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c); })
#define vmulq_lane_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x4_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c, __c, __c, __c, __c); })
#define vmulq_lane_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x2_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c); })
#define vmulq_lane_f32(a, b, __c) __extension__ ({ \
  float32x4_t __a = (a); float32x2_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c); })
#define vmulq_lane_u16(a, b, __c) __extension__ ({ \
  uint16x8_t __a = (a); uint16x4_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c, __c, __c, __c, __c); })
#define vmulq_lane_u32(a, b, __c) __extension__ ({ \
  uint32x4_t __a = (a); uint32x2_t __b = (b); \
  __a * __builtin_shufflevector(__b, __b, __c, __c, __c, __c); })

__ai int16x4_t vmul_n_s16(int16x4_t __a, int16_t __b) {
  return __a * (int16x4_t){ __b, __b, __b, __b }; }
__ai int32x2_t vmul_n_s32(int32x2_t __a, int32_t __b) {
  return __a * (int32x2_t){ __b, __b }; }
__ai float32x2_t vmul_n_f32(float32x2_t __a, float32_t __b) {
  return __a * (float32x2_t){ __b, __b }; }
__ai uint16x4_t vmul_n_u16(uint16x4_t __a, uint16_t __b) {
  return __a * (uint16x4_t){ __b, __b, __b, __b }; }
__ai uint32x2_t vmul_n_u32(uint32x2_t __a, uint32_t __b) {
  return __a * (uint32x2_t){ __b, __b }; }
__ai int16x8_t vmulq_n_s16(int16x8_t __a, int16_t __b) {
  return __a * (int16x8_t){ __b, __b, __b, __b, __b, __b, __b, __b }; }
__ai int32x4_t vmulq_n_s32(int32x4_t __a, int32_t __b) {
  return __a * (int32x4_t){ __b, __b, __b, __b }; }
__ai float32x4_t vmulq_n_f32(float32x4_t __a, float32_t __b) {
  return __a * (float32x4_t){ __b, __b, __b, __b }; }
__ai uint16x8_t vmulq_n_u16(uint16x8_t __a, uint16_t __b) {
  return __a * (uint16x8_t){ __b, __b, __b, __b, __b, __b, __b, __b }; }
__ai uint32x4_t vmulq_n_u32(uint32x4_t __a, uint32_t __b) {
  return __a * (uint32x4_t){ __b, __b, __b, __b }; }

__ai int8x8_t vmvn_s8(int8x8_t __a) {
  return  ~__a; }
__ai int16x4_t vmvn_s16(int16x4_t __a) {
  return  ~__a; }
__ai int32x2_t vmvn_s32(int32x2_t __a) {
  return  ~__a; }
__ai uint8x8_t vmvn_u8(uint8x8_t __a) {
  return  ~__a; }
__ai uint16x4_t vmvn_u16(uint16x4_t __a) {
  return  ~__a; }
__ai uint32x2_t vmvn_u32(uint32x2_t __a) {
  return  ~__a; }
__ai poly8x8_t vmvn_p8(poly8x8_t __a) {
  return  ~__a; }
__ai int8x16_t vmvnq_s8(int8x16_t __a) {
  return  ~__a; }
__ai int16x8_t vmvnq_s16(int16x8_t __a) {
  return  ~__a; }
__ai int32x4_t vmvnq_s32(int32x4_t __a) {
  return  ~__a; }
__ai uint8x16_t vmvnq_u8(uint8x16_t __a) {
  return  ~__a; }
__ai uint16x8_t vmvnq_u16(uint16x8_t __a) {
  return  ~__a; }
__ai uint32x4_t vmvnq_u32(uint32x4_t __a) {
  return  ~__a; }
__ai poly8x16_t vmvnq_p8(poly8x16_t __a) {
  return  ~__a; }

__ai int8x8_t vneg_s8(int8x8_t __a) {
  return  -__a; }
__ai int16x4_t vneg_s16(int16x4_t __a) {
  return  -__a; }
__ai int32x2_t vneg_s32(int32x2_t __a) {
  return  -__a; }
__ai float32x2_t vneg_f32(float32x2_t __a) {
  return  -__a; }
__ai int8x16_t vnegq_s8(int8x16_t __a) {
  return  -__a; }
__ai int16x8_t vnegq_s16(int16x8_t __a) {
  return  -__a; }
__ai int32x4_t vnegq_s32(int32x4_t __a) {
  return  -__a; }
__ai float32x4_t vnegq_f32(float32x4_t __a) {
  return  -__a; }

__ai int8x8_t vorn_s8(int8x8_t __a, int8x8_t __b) {
  return __a | ~__b; }
__ai int16x4_t vorn_s16(int16x4_t __a, int16x4_t __b) {
  return __a | ~__b; }
__ai int32x2_t vorn_s32(int32x2_t __a, int32x2_t __b) {
  return __a | ~__b; }
__ai int64x1_t vorn_s64(int64x1_t __a, int64x1_t __b) {
  return __a | ~__b; }
__ai uint8x8_t vorn_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a | ~__b; }
__ai uint16x4_t vorn_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a | ~__b; }
__ai uint32x2_t vorn_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a | ~__b; }
__ai uint64x1_t vorn_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a | ~__b; }
__ai int8x16_t vornq_s8(int8x16_t __a, int8x16_t __b) {
  return __a | ~__b; }
__ai int16x8_t vornq_s16(int16x8_t __a, int16x8_t __b) {
  return __a | ~__b; }
__ai int32x4_t vornq_s32(int32x4_t __a, int32x4_t __b) {
  return __a | ~__b; }
__ai int64x2_t vornq_s64(int64x2_t __a, int64x2_t __b) {
  return __a | ~__b; }
__ai uint8x16_t vornq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a | ~__b; }
__ai uint16x8_t vornq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a | ~__b; }
__ai uint32x4_t vornq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a | ~__b; }
__ai uint64x2_t vornq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a | ~__b; }

__ai int8x8_t vorr_s8(int8x8_t __a, int8x8_t __b) {
  return __a | __b; }
__ai int16x4_t vorr_s16(int16x4_t __a, int16x4_t __b) {
  return __a | __b; }
__ai int32x2_t vorr_s32(int32x2_t __a, int32x2_t __b) {
  return __a | __b; }
__ai int64x1_t vorr_s64(int64x1_t __a, int64x1_t __b) {
  return __a | __b; }
__ai uint8x8_t vorr_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a | __b; }
__ai uint16x4_t vorr_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a | __b; }
__ai uint32x2_t vorr_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a | __b; }
__ai uint64x1_t vorr_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a | __b; }
__ai int8x16_t vorrq_s8(int8x16_t __a, int8x16_t __b) {
  return __a | __b; }
__ai int16x8_t vorrq_s16(int16x8_t __a, int16x8_t __b) {
  return __a | __b; }
__ai int32x4_t vorrq_s32(int32x4_t __a, int32x4_t __b) {
  return __a | __b; }
__ai int64x2_t vorrq_s64(int64x2_t __a, int64x2_t __b) {
  return __a | __b; }
__ai uint8x16_t vorrq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a | __b; }
__ai uint16x8_t vorrq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a | __b; }
__ai uint32x4_t vorrq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a | __b; }
__ai uint64x2_t vorrq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a | __b; }

__ai int16x4_t vpadal_s8(int16x4_t __a, int8x8_t __b) {
  return (int16x4_t)__builtin_neon_vpadal_v((int8x8_t)__a, __b, 1); }
__ai int32x2_t vpadal_s16(int32x2_t __a, int16x4_t __b) {
  return (int32x2_t)__builtin_neon_vpadal_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vpadal_s32(int64x1_t __a, int32x2_t __b) {
  return (int64x1_t)__builtin_neon_vpadal_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint16x4_t vpadal_u8(uint16x4_t __a, uint8x8_t __b) {
  return (uint16x4_t)__builtin_neon_vpadal_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vpadal_u16(uint32x2_t __a, uint16x4_t __b) {
  return (uint32x2_t)__builtin_neon_vpadal_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vpadal_u32(uint64x1_t __a, uint32x2_t __b) {
  return (uint64x1_t)__builtin_neon_vpadal_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int16x8_t vpadalq_s8(int16x8_t __a, int8x16_t __b) {
  return (int16x8_t)__builtin_neon_vpadalq_v((int8x16_t)__a, __b, 33); }
__ai int32x4_t vpadalq_s16(int32x4_t __a, int16x8_t __b) {
  return (int32x4_t)__builtin_neon_vpadalq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vpadalq_s32(int64x2_t __a, int32x4_t __b) {
  return (int64x2_t)__builtin_neon_vpadalq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint16x8_t vpadalq_u8(uint16x8_t __a, uint8x16_t __b) {
  return (uint16x8_t)__builtin_neon_vpadalq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vpadalq_u16(uint32x4_t __a, uint16x8_t __b) {
  return (uint32x4_t)__builtin_neon_vpadalq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vpadalq_u32(uint64x2_t __a, uint32x4_t __b) {
  return (uint64x2_t)__builtin_neon_vpadalq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

__ai int8x8_t vpadd_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vpadd_v(__a, __b, 0); }
__ai int16x4_t vpadd_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vpadd_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vpadd_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vpadd_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vpadd_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vpadd_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vpadd_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vpadd_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vpadd_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vpadd_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai float32x2_t vpadd_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vpadd_v((int8x8_t)__a, (int8x8_t)__b, 7); }

__ai int16x4_t vpaddl_s8(int8x8_t __a) {
  return (int16x4_t)__builtin_neon_vpaddl_v(__a, 1); }
__ai int32x2_t vpaddl_s16(int16x4_t __a) {
  return (int32x2_t)__builtin_neon_vpaddl_v((int8x8_t)__a, 2); }
__ai int64x1_t vpaddl_s32(int32x2_t __a) {
  return (int64x1_t)__builtin_neon_vpaddl_v((int8x8_t)__a, 3); }
__ai uint16x4_t vpaddl_u8(uint8x8_t __a) {
  return (uint16x4_t)__builtin_neon_vpaddl_v((int8x8_t)__a, 17); }
__ai uint32x2_t vpaddl_u16(uint16x4_t __a) {
  return (uint32x2_t)__builtin_neon_vpaddl_v((int8x8_t)__a, 18); }
__ai uint64x1_t vpaddl_u32(uint32x2_t __a) {
  return (uint64x1_t)__builtin_neon_vpaddl_v((int8x8_t)__a, 19); }
__ai int16x8_t vpaddlq_s8(int8x16_t __a) {
  return (int16x8_t)__builtin_neon_vpaddlq_v(__a, 33); }
__ai int32x4_t vpaddlq_s16(int16x8_t __a) {
  return (int32x4_t)__builtin_neon_vpaddlq_v((int8x16_t)__a, 34); }
__ai int64x2_t vpaddlq_s32(int32x4_t __a) {
  return (int64x2_t)__builtin_neon_vpaddlq_v((int8x16_t)__a, 35); }
__ai uint16x8_t vpaddlq_u8(uint8x16_t __a) {
  return (uint16x8_t)__builtin_neon_vpaddlq_v((int8x16_t)__a, 49); }
__ai uint32x4_t vpaddlq_u16(uint16x8_t __a) {
  return (uint32x4_t)__builtin_neon_vpaddlq_v((int8x16_t)__a, 50); }
__ai uint64x2_t vpaddlq_u32(uint32x4_t __a) {
  return (uint64x2_t)__builtin_neon_vpaddlq_v((int8x16_t)__a, 51); }

__ai int8x8_t vpmax_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vpmax_v(__a, __b, 0); }
__ai int16x4_t vpmax_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vpmax_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vpmax_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vpmax_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vpmax_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vpmax_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vpmax_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vpmax_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vpmax_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vpmax_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai float32x2_t vpmax_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vpmax_v((int8x8_t)__a, (int8x8_t)__b, 7); }

__ai int8x8_t vpmin_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vpmin_v(__a, __b, 0); }
__ai int16x4_t vpmin_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vpmin_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vpmin_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vpmin_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vpmin_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vpmin_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vpmin_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vpmin_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vpmin_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vpmin_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai float32x2_t vpmin_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vpmin_v((int8x8_t)__a, (int8x8_t)__b, 7); }

__ai int8x8_t vqabs_s8(int8x8_t __a) {
  return (int8x8_t)__builtin_neon_vqabs_v(__a, 0); }
__ai int16x4_t vqabs_s16(int16x4_t __a) {
  return (int16x4_t)__builtin_neon_vqabs_v((int8x8_t)__a, 1); }
__ai int32x2_t vqabs_s32(int32x2_t __a) {
  return (int32x2_t)__builtin_neon_vqabs_v((int8x8_t)__a, 2); }
__ai int8x16_t vqabsq_s8(int8x16_t __a) {
  return (int8x16_t)__builtin_neon_vqabsq_v(__a, 32); }
__ai int16x8_t vqabsq_s16(int16x8_t __a) {
  return (int16x8_t)__builtin_neon_vqabsq_v((int8x16_t)__a, 33); }
__ai int32x4_t vqabsq_s32(int32x4_t __a) {
  return (int32x4_t)__builtin_neon_vqabsq_v((int8x16_t)__a, 34); }

__ai int8x8_t vqadd_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vqadd_v(__a, __b, 0); }
__ai int16x4_t vqadd_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vqadd_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vqadd_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x1_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint8x8_t vqadd_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vqadd_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vqadd_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vqadd_u64(uint64x1_t __a, uint64x1_t __b) {
  return (uint64x1_t)__builtin_neon_vqadd_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int8x16_t vqaddq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vqaddq_v(__a, __b, 32); }
__ai int16x8_t vqaddq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vqaddq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vqaddq_s64(int64x2_t __a, int64x2_t __b) {
  return (int64x2_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint8x16_t vqaddq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vqaddq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vqaddq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vqaddq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vqaddq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

__ai int32x4_t vqdmlal_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c) {
  return (int32x4_t)__builtin_neon_vqdmlal_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)__c, 34); }
__ai int64x2_t vqdmlal_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c) {
  return (int64x2_t)__builtin_neon_vqdmlal_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)__c, 35); }

#define vqdmlal_lane_s16(a, b, c, __d) __extension__ ({ \
  int32x4_t __a = (a); int16x4_t __b = (b); int16x4_t __c = (c); \
  vqdmlal_s16(__a, __b, __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vqdmlal_lane_s32(a, b, c, __d) __extension__ ({ \
  int64x2_t __a = (a); int32x2_t __b = (b); int32x2_t __c = (c); \
  vqdmlal_s32(__a, __b, __builtin_shufflevector(__c, __c, __d, __d)); })

__ai int32x4_t vqdmlal_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c) {
  return (int32x4_t)__builtin_neon_vqdmlal_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)(int16x4_t){ __c, __c, __c, __c }, 34); }
__ai int64x2_t vqdmlal_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c) {
  return (int64x2_t)__builtin_neon_vqdmlal_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)(int32x2_t){ __c, __c }, 35); }

__ai int32x4_t vqdmlsl_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c) {
  return (int32x4_t)__builtin_neon_vqdmlsl_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)__c, 34); }
__ai int64x2_t vqdmlsl_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c) {
  return (int64x2_t)__builtin_neon_vqdmlsl_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)__c, 35); }

#define vqdmlsl_lane_s16(a, b, c, __d) __extension__ ({ \
  int32x4_t __a = (a); int16x4_t __b = (b); int16x4_t __c = (c); \
  vqdmlsl_s16(__a, __b, __builtin_shufflevector(__c, __c, __d, __d, __d, __d)); })
#define vqdmlsl_lane_s32(a, b, c, __d) __extension__ ({ \
  int64x2_t __a = (a); int32x2_t __b = (b); int32x2_t __c = (c); \
  vqdmlsl_s32(__a, __b, __builtin_shufflevector(__c, __c, __d, __d)); })

__ai int32x4_t vqdmlsl_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c) {
  return (int32x4_t)__builtin_neon_vqdmlsl_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)(int16x4_t){ __c, __c, __c, __c }, 34); }
__ai int64x2_t vqdmlsl_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c) {
  return (int64x2_t)__builtin_neon_vqdmlsl_v((int8x16_t)__a, (int8x8_t)__b, (int8x8_t)(int32x2_t){ __c, __c }, 35); }

__ai int16x4_t vqdmulh_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vqdmulh_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vqdmulh_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vqdmulh_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int16x8_t vqdmulhq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vqdmulhq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vqdmulhq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vqdmulhq_v((int8x16_t)__a, (int8x16_t)__b, 34); }

#define vqdmulh_lane_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  vqdmulh_s16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })
#define vqdmulh_lane_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  vqdmulh_s32(__a, __builtin_shufflevector(__b, __b, __c, __c)); })
#define vqdmulhq_lane_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x4_t __b = (b); \
  vqdmulhq_s16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c, __c, __c, __c, __c)); })
#define vqdmulhq_lane_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x2_t __b = (b); \
  vqdmulhq_s32(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })

__ai int16x4_t vqdmulh_n_s16(int16x4_t __a, int16_t __b) {
  return (int16x4_t)__builtin_neon_vqdmulh_v((int8x8_t)__a, (int8x8_t)(int16x4_t){ __b, __b, __b, __b }, 1); }
__ai int32x2_t vqdmulh_n_s32(int32x2_t __a, int32_t __b) {
  return (int32x2_t)__builtin_neon_vqdmulh_v((int8x8_t)__a, (int8x8_t)(int32x2_t){ __b, __b }, 2); }
__ai int16x8_t vqdmulhq_n_s16(int16x8_t __a, int16_t __b) {
  return (int16x8_t)__builtin_neon_vqdmulhq_v((int8x16_t)__a, (int8x16_t)(int16x8_t){ __b, __b, __b, __b, __b, __b, __b, __b }, 33); }
__ai int32x4_t vqdmulhq_n_s32(int32x4_t __a, int32_t __b) {
  return (int32x4_t)__builtin_neon_vqdmulhq_v((int8x16_t)__a, (int8x16_t)(int32x4_t){ __b, __b, __b, __b }, 34); }

__ai int32x4_t vqdmull_s16(int16x4_t __a, int16x4_t __b) {
  return (int32x4_t)__builtin_neon_vqdmull_v((int8x8_t)__a, (int8x8_t)__b, 34); }
__ai int64x2_t vqdmull_s32(int32x2_t __a, int32x2_t __b) {
  return (int64x2_t)__builtin_neon_vqdmull_v((int8x8_t)__a, (int8x8_t)__b, 35); }

#define vqdmull_lane_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  vqdmull_s16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })
#define vqdmull_lane_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  vqdmull_s32(__a, __builtin_shufflevector(__b, __b, __c, __c)); })

__ai int32x4_t vqdmull_n_s16(int16x4_t __a, int16_t __b) {
  return (int32x4_t)__builtin_neon_vqdmull_v((int8x8_t)__a, (int8x8_t)(int16x4_t){ __b, __b, __b, __b }, 34); }
__ai int64x2_t vqdmull_n_s32(int32x2_t __a, int32_t __b) {
  return (int64x2_t)__builtin_neon_vqdmull_v((int8x8_t)__a, (int8x8_t)(int32x2_t){ __b, __b }, 35); }

__ai int8x8_t vqmovn_s16(int16x8_t __a) {
  return (int8x8_t)__builtin_neon_vqmovn_v((int8x16_t)__a, 0); }
__ai int16x4_t vqmovn_s32(int32x4_t __a) {
  return (int16x4_t)__builtin_neon_vqmovn_v((int8x16_t)__a, 1); }
__ai int32x2_t vqmovn_s64(int64x2_t __a) {
  return (int32x2_t)__builtin_neon_vqmovn_v((int8x16_t)__a, 2); }
__ai uint8x8_t vqmovn_u16(uint16x8_t __a) {
  return (uint8x8_t)__builtin_neon_vqmovn_v((int8x16_t)__a, 16); }
__ai uint16x4_t vqmovn_u32(uint32x4_t __a) {
  return (uint16x4_t)__builtin_neon_vqmovn_v((int8x16_t)__a, 17); }
__ai uint32x2_t vqmovn_u64(uint64x2_t __a) {
  return (uint32x2_t)__builtin_neon_vqmovn_v((int8x16_t)__a, 18); }

__ai uint8x8_t vqmovun_s16(int16x8_t __a) {
  return (uint8x8_t)__builtin_neon_vqmovun_v((int8x16_t)__a, 16); }
__ai uint16x4_t vqmovun_s32(int32x4_t __a) {
  return (uint16x4_t)__builtin_neon_vqmovun_v((int8x16_t)__a, 17); }
__ai uint32x2_t vqmovun_s64(int64x2_t __a) {
  return (uint32x2_t)__builtin_neon_vqmovun_v((int8x16_t)__a, 18); }

__ai int8x8_t vqneg_s8(int8x8_t __a) {
  return (int8x8_t)__builtin_neon_vqneg_v(__a, 0); }
__ai int16x4_t vqneg_s16(int16x4_t __a) {
  return (int16x4_t)__builtin_neon_vqneg_v((int8x8_t)__a, 1); }
__ai int32x2_t vqneg_s32(int32x2_t __a) {
  return (int32x2_t)__builtin_neon_vqneg_v((int8x8_t)__a, 2); }
__ai int8x16_t vqnegq_s8(int8x16_t __a) {
  return (int8x16_t)__builtin_neon_vqnegq_v(__a, 32); }
__ai int16x8_t vqnegq_s16(int16x8_t __a) {
  return (int16x8_t)__builtin_neon_vqnegq_v((int8x16_t)__a, 33); }
__ai int32x4_t vqnegq_s32(int32x4_t __a) {
  return (int32x4_t)__builtin_neon_vqnegq_v((int8x16_t)__a, 34); }

__ai int16x4_t vqrdmulh_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vqrdmulh_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vqrdmulh_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vqrdmulh_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int16x8_t vqrdmulhq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vqrdmulhq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vqrdmulhq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vqrdmulhq_v((int8x16_t)__a, (int8x16_t)__b, 34); }

#define vqrdmulh_lane_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  vqrdmulh_s16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })
#define vqrdmulh_lane_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  vqrdmulh_s32(__a, __builtin_shufflevector(__b, __b, __c, __c)); })
#define vqrdmulhq_lane_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x4_t __b = (b); \
  vqrdmulhq_s16(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c, __c, __c, __c, __c)); })
#define vqrdmulhq_lane_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x2_t __b = (b); \
  vqrdmulhq_s32(__a, __builtin_shufflevector(__b, __b, __c, __c, __c, __c)); })

__ai int16x4_t vqrdmulh_n_s16(int16x4_t __a, int16_t __b) {
  return (int16x4_t)__builtin_neon_vqrdmulh_v((int8x8_t)__a, (int8x8_t)(int16x4_t){ __b, __b, __b, __b }, 1); }
__ai int32x2_t vqrdmulh_n_s32(int32x2_t __a, int32_t __b) {
  return (int32x2_t)__builtin_neon_vqrdmulh_v((int8x8_t)__a, (int8x8_t)(int32x2_t){ __b, __b }, 2); }
__ai int16x8_t vqrdmulhq_n_s16(int16x8_t __a, int16_t __b) {
  return (int16x8_t)__builtin_neon_vqrdmulhq_v((int8x16_t)__a, (int8x16_t)(int16x8_t){ __b, __b, __b, __b, __b, __b, __b, __b }, 33); }
__ai int32x4_t vqrdmulhq_n_s32(int32x4_t __a, int32_t __b) {
  return (int32x4_t)__builtin_neon_vqrdmulhq_v((int8x16_t)__a, (int8x16_t)(int32x4_t){ __b, __b, __b, __b }, 34); }

__ai int8x8_t vqrshl_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vqrshl_v(__a, __b, 0); }
__ai int16x4_t vqrshl_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vqrshl_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vqrshl_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vqrshl_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vqrshl_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x1_t)__builtin_neon_vqrshl_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint8x8_t vqrshl_u8(uint8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vqrshl_v((int8x8_t)__a, __b, 16); }
__ai uint16x4_t vqrshl_u16(uint16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vqrshl_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vqrshl_u32(uint32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vqrshl_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vqrshl_u64(uint64x1_t __a, int64x1_t __b) {
  return (uint64x1_t)__builtin_neon_vqrshl_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int8x16_t vqrshlq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vqrshlq_v(__a, __b, 32); }
__ai int16x8_t vqrshlq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vqrshlq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vqrshlq_s64(int64x2_t __a, int64x2_t __b) {
  return (int64x2_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint8x16_t vqrshlq_u8(uint8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, __b, 48); }
__ai uint16x8_t vqrshlq_u16(uint16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vqrshlq_u32(uint32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vqrshlq_u64(uint64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vqrshlq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

#define vqrshrn_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vqrshrn_n_v((int8x16_t)__a, __b, 0); })
#define vqrshrn_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vqrshrn_n_v((int8x16_t)__a, __b, 1); })
#define vqrshrn_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vqrshrn_n_v((int8x16_t)__a, __b, 2); })
#define vqrshrn_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vqrshrn_n_v((int8x16_t)__a, __b, 16); })
#define vqrshrn_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vqrshrn_n_v((int8x16_t)__a, __b, 17); })
#define vqrshrn_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vqrshrn_n_v((int8x16_t)__a, __b, 18); })

#define vqrshrun_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vqrshrun_n_v((int8x16_t)__a, __b, 16); })
#define vqrshrun_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vqrshrun_n_v((int8x16_t)__a, __b, 17); })
#define vqrshrun_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vqrshrun_n_v((int8x16_t)__a, __b, 18); })

__ai int8x8_t vqshl_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vqshl_v(__a, __b, 0); }
__ai int16x4_t vqshl_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vqshl_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vqshl_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vqshl_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vqshl_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x1_t)__builtin_neon_vqshl_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint8x8_t vqshl_u8(uint8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vqshl_v((int8x8_t)__a, __b, 16); }
__ai uint16x4_t vqshl_u16(uint16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vqshl_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vqshl_u32(uint32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vqshl_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vqshl_u64(uint64x1_t __a, int64x1_t __b) {
  return (uint64x1_t)__builtin_neon_vqshl_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int8x16_t vqshlq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vqshlq_v(__a, __b, 32); }
__ai int16x8_t vqshlq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vqshlq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vqshlq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vqshlq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vqshlq_s64(int64x2_t __a, int64x2_t __b) {
  return (int64x2_t)__builtin_neon_vqshlq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint8x16_t vqshlq_u8(uint8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vqshlq_v((int8x16_t)__a, __b, 48); }
__ai uint16x8_t vqshlq_u16(uint16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vqshlq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vqshlq_u32(uint32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vqshlq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vqshlq_u64(uint64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vqshlq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

#define vqshlu_n_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vqshlu_n_v(__a, __b, 16); })
#define vqshlu_n_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vqshlu_n_v((int8x8_t)__a, __b, 17); })
#define vqshlu_n_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vqshlu_n_v((int8x8_t)__a, __b, 18); })
#define vqshlu_n_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  (uint64x1_t)__builtin_neon_vqshlu_n_v((int8x8_t)__a, __b, 19); })
#define vqshluq_n_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  (uint8x16_t)__builtin_neon_vqshluq_n_v(__a, __b, 48); })
#define vqshluq_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (uint16x8_t)__builtin_neon_vqshluq_n_v((int8x16_t)__a, __b, 49); })
#define vqshluq_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vqshluq_n_v((int8x16_t)__a, __b, 50); })
#define vqshluq_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vqshluq_n_v((int8x16_t)__a, __b, 51); })

#define vqshl_n_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vqshl_n_v(__a, __b, 0); })
#define vqshl_n_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 1); })
#define vqshl_n_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 2); })
#define vqshl_n_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  (int64x1_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 3); })
#define vqshl_n_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 16); })
#define vqshl_n_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 17); })
#define vqshl_n_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 18); })
#define vqshl_n_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  (uint64x1_t)__builtin_neon_vqshl_n_v((int8x8_t)__a, __b, 19); })
#define vqshlq_n_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  (int8x16_t)__builtin_neon_vqshlq_n_v(__a, __b, 32); })
#define vqshlq_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int16x8_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 33); })
#define vqshlq_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int32x4_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 34); })
#define vqshlq_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int64x2_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 35); })
#define vqshlq_n_u8(a, __b) __extension__ ({ \
  uint8x16_t __a = (a); \
  (uint8x16_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 48); })
#define vqshlq_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint16x8_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 49); })
#define vqshlq_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 50); })
#define vqshlq_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vqshlq_n_v((int8x16_t)__a, __b, 51); })

#define vqshrn_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vqshrn_n_v((int8x16_t)__a, __b, 0); })
#define vqshrn_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vqshrn_n_v((int8x16_t)__a, __b, 1); })
#define vqshrn_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vqshrn_n_v((int8x16_t)__a, __b, 2); })
#define vqshrn_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vqshrn_n_v((int8x16_t)__a, __b, 16); })
#define vqshrn_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vqshrn_n_v((int8x16_t)__a, __b, 17); })
#define vqshrn_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vqshrn_n_v((int8x16_t)__a, __b, 18); })

#define vqshrun_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vqshrun_n_v((int8x16_t)__a, __b, 16); })
#define vqshrun_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vqshrun_n_v((int8x16_t)__a, __b, 17); })
#define vqshrun_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vqshrun_n_v((int8x16_t)__a, __b, 18); })

__ai int8x8_t vqsub_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vqsub_v(__a, __b, 0); }
__ai int16x4_t vqsub_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vqsub_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vqsub_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x1_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint8x8_t vqsub_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vqsub_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vqsub_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vqsub_u64(uint64x1_t __a, uint64x1_t __b) {
  return (uint64x1_t)__builtin_neon_vqsub_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int8x16_t vqsubq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vqsubq_v(__a, __b, 32); }
__ai int16x8_t vqsubq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vqsubq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vqsubq_s64(int64x2_t __a, int64x2_t __b) {
  return (int64x2_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint8x16_t vqsubq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vqsubq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vqsubq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vqsubq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vqsubq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

__ai int8x8_t vraddhn_s16(int16x8_t __a, int16x8_t __b) {
  return (int8x8_t)__builtin_neon_vraddhn_v((int8x16_t)__a, (int8x16_t)__b, 0); }
__ai int16x4_t vraddhn_s32(int32x4_t __a, int32x4_t __b) {
  return (int16x4_t)__builtin_neon_vraddhn_v((int8x16_t)__a, (int8x16_t)__b, 1); }
__ai int32x2_t vraddhn_s64(int64x2_t __a, int64x2_t __b) {
  return (int32x2_t)__builtin_neon_vraddhn_v((int8x16_t)__a, (int8x16_t)__b, 2); }
__ai uint8x8_t vraddhn_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint8x8_t)__builtin_neon_vraddhn_v((int8x16_t)__a, (int8x16_t)__b, 16); }
__ai uint16x4_t vraddhn_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint16x4_t)__builtin_neon_vraddhn_v((int8x16_t)__a, (int8x16_t)__b, 17); }
__ai uint32x2_t vraddhn_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint32x2_t)__builtin_neon_vraddhn_v((int8x16_t)__a, (int8x16_t)__b, 18); }

__ai float32x2_t vrecpe_f32(float32x2_t __a) {
  return (float32x2_t)__builtin_neon_vrecpe_v((int8x8_t)__a, 7); }
__ai uint32x2_t vrecpe_u32(uint32x2_t __a) {
  return (uint32x2_t)__builtin_neon_vrecpe_v((int8x8_t)__a, 18); }
__ai float32x4_t vrecpeq_f32(float32x4_t __a) {
  return (float32x4_t)__builtin_neon_vrecpeq_v((int8x16_t)__a, 39); }
__ai uint32x4_t vrecpeq_u32(uint32x4_t __a) {
  return (uint32x4_t)__builtin_neon_vrecpeq_v((int8x16_t)__a, 50); }

__ai float32x2_t vrecps_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vrecps_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vrecpsq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vrecpsq_v((int8x16_t)__a, (int8x16_t)__b, 39); }

__ai int8x8_t vreinterpret_s8_s16(int16x4_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_s32(int32x2_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_s64(int64x1_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_u8(uint8x8_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_u16(uint16x4_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_u32(uint32x2_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_u64(uint64x1_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_f16(float16x4_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_f32(float32x2_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_p8(poly8x8_t __a) {
  return (int8x8_t)__a; }
__ai int8x8_t vreinterpret_s8_p16(poly16x4_t __a) {
  return (int8x8_t)__a; }
__ai int16x4_t vreinterpret_s16_s8(int8x8_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_s32(int32x2_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_s64(int64x1_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_u8(uint8x8_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_u16(uint16x4_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_u32(uint32x2_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_u64(uint64x1_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_f16(float16x4_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_f32(float32x2_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_p8(poly8x8_t __a) {
  return (int16x4_t)__a; }
__ai int16x4_t vreinterpret_s16_p16(poly16x4_t __a) {
  return (int16x4_t)__a; }
__ai int32x2_t vreinterpret_s32_s8(int8x8_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_s16(int16x4_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_s64(int64x1_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_u8(uint8x8_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_u16(uint16x4_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_u32(uint32x2_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_u64(uint64x1_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_f16(float16x4_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_f32(float32x2_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_p8(poly8x8_t __a) {
  return (int32x2_t)__a; }
__ai int32x2_t vreinterpret_s32_p16(poly16x4_t __a) {
  return (int32x2_t)__a; }
__ai int64x1_t vreinterpret_s64_s8(int8x8_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_s16(int16x4_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_s32(int32x2_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_u8(uint8x8_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_u16(uint16x4_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_u32(uint32x2_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_u64(uint64x1_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_f16(float16x4_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_f32(float32x2_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_p8(poly8x8_t __a) {
  return (int64x1_t)__a; }
__ai int64x1_t vreinterpret_s64_p16(poly16x4_t __a) {
  return (int64x1_t)__a; }
__ai uint8x8_t vreinterpret_u8_s8(int8x8_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_s16(int16x4_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_s32(int32x2_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_s64(int64x1_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_u16(uint16x4_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_u32(uint32x2_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_u64(uint64x1_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_f16(float16x4_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_f32(float32x2_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_p8(poly8x8_t __a) {
  return (uint8x8_t)__a; }
__ai uint8x8_t vreinterpret_u8_p16(poly16x4_t __a) {
  return (uint8x8_t)__a; }
__ai uint16x4_t vreinterpret_u16_s8(int8x8_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_s16(int16x4_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_s32(int32x2_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_s64(int64x1_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_u8(uint8x8_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_u32(uint32x2_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_u64(uint64x1_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_f16(float16x4_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_f32(float32x2_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_p8(poly8x8_t __a) {
  return (uint16x4_t)__a; }
__ai uint16x4_t vreinterpret_u16_p16(poly16x4_t __a) {
  return (uint16x4_t)__a; }
__ai uint32x2_t vreinterpret_u32_s8(int8x8_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_s16(int16x4_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_s32(int32x2_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_s64(int64x1_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_u8(uint8x8_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_u16(uint16x4_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_u64(uint64x1_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_f16(float16x4_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_f32(float32x2_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_p8(poly8x8_t __a) {
  return (uint32x2_t)__a; }
__ai uint32x2_t vreinterpret_u32_p16(poly16x4_t __a) {
  return (uint32x2_t)__a; }
__ai uint64x1_t vreinterpret_u64_s8(int8x8_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_s16(int16x4_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_s32(int32x2_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_s64(int64x1_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_u8(uint8x8_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_u16(uint16x4_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_u32(uint32x2_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_f16(float16x4_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_f32(float32x2_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_p8(poly8x8_t __a) {
  return (uint64x1_t)__a; }
__ai uint64x1_t vreinterpret_u64_p16(poly16x4_t __a) {
  return (uint64x1_t)__a; }
__ai float16x4_t vreinterpret_f16_s8(int8x8_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_s16(int16x4_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_s32(int32x2_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_s64(int64x1_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_u8(uint8x8_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_u16(uint16x4_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_u32(uint32x2_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_u64(uint64x1_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_f32(float32x2_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_p8(poly8x8_t __a) {
  return (float16x4_t)__a; }
__ai float16x4_t vreinterpret_f16_p16(poly16x4_t __a) {
  return (float16x4_t)__a; }
__ai float32x2_t vreinterpret_f32_s8(int8x8_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_s16(int16x4_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_s32(int32x2_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_s64(int64x1_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_u8(uint8x8_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_u16(uint16x4_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_u32(uint32x2_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_u64(uint64x1_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_f16(float16x4_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_p8(poly8x8_t __a) {
  return (float32x2_t)__a; }
__ai float32x2_t vreinterpret_f32_p16(poly16x4_t __a) {
  return (float32x2_t)__a; }
__ai poly8x8_t vreinterpret_p8_s8(int8x8_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_s16(int16x4_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_s32(int32x2_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_s64(int64x1_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_u8(uint8x8_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_u16(uint16x4_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_u32(uint32x2_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_u64(uint64x1_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_f16(float16x4_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_f32(float32x2_t __a) {
  return (poly8x8_t)__a; }
__ai poly8x8_t vreinterpret_p8_p16(poly16x4_t __a) {
  return (poly8x8_t)__a; }
__ai poly16x4_t vreinterpret_p16_s8(int8x8_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_s16(int16x4_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_s32(int32x2_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_s64(int64x1_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_u8(uint8x8_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_u16(uint16x4_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_u32(uint32x2_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_u64(uint64x1_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_f16(float16x4_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_f32(float32x2_t __a) {
  return (poly16x4_t)__a; }
__ai poly16x4_t vreinterpret_p16_p8(poly8x8_t __a) {
  return (poly16x4_t)__a; }
__ai int8x16_t vreinterpretq_s8_s16(int16x8_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_s32(int32x4_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_s64(int64x2_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_u8(uint8x16_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_u16(uint16x8_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_u32(uint32x4_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_u64(uint64x2_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_f16(float16x8_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_f32(float32x4_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_p8(poly8x16_t __a) {
  return (int8x16_t)__a; }
__ai int8x16_t vreinterpretq_s8_p16(poly16x8_t __a) {
  return (int8x16_t)__a; }
__ai int16x8_t vreinterpretq_s16_s8(int8x16_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_s32(int32x4_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_s64(int64x2_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_u8(uint8x16_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_u16(uint16x8_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_u32(uint32x4_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_u64(uint64x2_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_f16(float16x8_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_f32(float32x4_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_p8(poly8x16_t __a) {
  return (int16x8_t)__a; }
__ai int16x8_t vreinterpretq_s16_p16(poly16x8_t __a) {
  return (int16x8_t)__a; }
__ai int32x4_t vreinterpretq_s32_s8(int8x16_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_s16(int16x8_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_s64(int64x2_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_u8(uint8x16_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_u16(uint16x8_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_u32(uint32x4_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_u64(uint64x2_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_f16(float16x8_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_f32(float32x4_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_p8(poly8x16_t __a) {
  return (int32x4_t)__a; }
__ai int32x4_t vreinterpretq_s32_p16(poly16x8_t __a) {
  return (int32x4_t)__a; }
__ai int64x2_t vreinterpretq_s64_s8(int8x16_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_s16(int16x8_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_s32(int32x4_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_u8(uint8x16_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_u16(uint16x8_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_u32(uint32x4_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_u64(uint64x2_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_f16(float16x8_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_f32(float32x4_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_p8(poly8x16_t __a) {
  return (int64x2_t)__a; }
__ai int64x2_t vreinterpretq_s64_p16(poly16x8_t __a) {
  return (int64x2_t)__a; }
__ai uint8x16_t vreinterpretq_u8_s8(int8x16_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_s16(int16x8_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_s32(int32x4_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_s64(int64x2_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_u16(uint16x8_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_u32(uint32x4_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_u64(uint64x2_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_f16(float16x8_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_f32(float32x4_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_p8(poly8x16_t __a) {
  return (uint8x16_t)__a; }
__ai uint8x16_t vreinterpretq_u8_p16(poly16x8_t __a) {
  return (uint8x16_t)__a; }
__ai uint16x8_t vreinterpretq_u16_s8(int8x16_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_s16(int16x8_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_s32(int32x4_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_s64(int64x2_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_u8(uint8x16_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_u32(uint32x4_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_u64(uint64x2_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_f16(float16x8_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_f32(float32x4_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_p8(poly8x16_t __a) {
  return (uint16x8_t)__a; }
__ai uint16x8_t vreinterpretq_u16_p16(poly16x8_t __a) {
  return (uint16x8_t)__a; }
__ai uint32x4_t vreinterpretq_u32_s8(int8x16_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_s16(int16x8_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_s32(int32x4_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_s64(int64x2_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_u8(uint8x16_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_u16(uint16x8_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_u64(uint64x2_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_f16(float16x8_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_f32(float32x4_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_p8(poly8x16_t __a) {
  return (uint32x4_t)__a; }
__ai uint32x4_t vreinterpretq_u32_p16(poly16x8_t __a) {
  return (uint32x4_t)__a; }
__ai uint64x2_t vreinterpretq_u64_s8(int8x16_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_s16(int16x8_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_s32(int32x4_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_s64(int64x2_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_u8(uint8x16_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_u16(uint16x8_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_u32(uint32x4_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_f16(float16x8_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_f32(float32x4_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_p8(poly8x16_t __a) {
  return (uint64x2_t)__a; }
__ai uint64x2_t vreinterpretq_u64_p16(poly16x8_t __a) {
  return (uint64x2_t)__a; }
__ai float16x8_t vreinterpretq_f16_s8(int8x16_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_s16(int16x8_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_s32(int32x4_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_s64(int64x2_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_u8(uint8x16_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_u16(uint16x8_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_u32(uint32x4_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_u64(uint64x2_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_f32(float32x4_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_p8(poly8x16_t __a) {
  return (float16x8_t)__a; }
__ai float16x8_t vreinterpretq_f16_p16(poly16x8_t __a) {
  return (float16x8_t)__a; }
__ai float32x4_t vreinterpretq_f32_s8(int8x16_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_s16(int16x8_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_s32(int32x4_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_s64(int64x2_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_u8(uint8x16_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_u16(uint16x8_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_u32(uint32x4_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_u64(uint64x2_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_f16(float16x8_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_p8(poly8x16_t __a) {
  return (float32x4_t)__a; }
__ai float32x4_t vreinterpretq_f32_p16(poly16x8_t __a) {
  return (float32x4_t)__a; }
__ai poly8x16_t vreinterpretq_p8_s8(int8x16_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_s16(int16x8_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_s32(int32x4_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_s64(int64x2_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_u8(uint8x16_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_u16(uint16x8_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_u32(uint32x4_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_u64(uint64x2_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_f16(float16x8_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_f32(float32x4_t __a) {
  return (poly8x16_t)__a; }
__ai poly8x16_t vreinterpretq_p8_p16(poly16x8_t __a) {
  return (poly8x16_t)__a; }
__ai poly16x8_t vreinterpretq_p16_s8(int8x16_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_s16(int16x8_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_s32(int32x4_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_s64(int64x2_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_u8(uint8x16_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_u16(uint16x8_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_u32(uint32x4_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_u64(uint64x2_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_f16(float16x8_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_f32(float32x4_t __a) {
  return (poly16x8_t)__a; }
__ai poly16x8_t vreinterpretq_p16_p8(poly8x16_t __a) {
  return (poly16x8_t)__a; }

__ai int8x8_t vrev16_s8(int8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6); }
__ai uint8x8_t vrev16_u8(uint8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6); }
__ai poly8x8_t vrev16_p8(poly8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6); }
__ai int8x16_t vrev16q_s8(int8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14); }
__ai uint8x16_t vrev16q_u8(uint8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14); }
__ai poly8x16_t vrev16q_p8(poly8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14); }

__ai int8x8_t vrev32_s8(int8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4); }
__ai int16x4_t vrev32_s16(int16x4_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2); }
__ai uint8x8_t vrev32_u8(uint8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4); }
__ai uint16x4_t vrev32_u16(uint16x4_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2); }
__ai poly8x8_t vrev32_p8(poly8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4); }
__ai poly16x4_t vrev32_p16(poly16x4_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2); }
__ai int8x16_t vrev32q_s8(int8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12); }
__ai int16x8_t vrev32q_s16(int16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6); }
__ai uint8x16_t vrev32q_u8(uint8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12); }
__ai uint16x8_t vrev32q_u16(uint16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6); }
__ai poly8x16_t vrev32q_p8(poly8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12); }
__ai poly16x8_t vrev32q_p16(poly16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2, 5, 4, 7, 6); }

__ai int8x8_t vrev64_s8(int8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 7, 6, 5, 4, 3, 2, 1, 0); }
__ai int16x4_t vrev64_s16(int16x4_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0); }
__ai int32x2_t vrev64_s32(int32x2_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0); }
__ai uint8x8_t vrev64_u8(uint8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 7, 6, 5, 4, 3, 2, 1, 0); }
__ai uint16x4_t vrev64_u16(uint16x4_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0); }
__ai uint32x2_t vrev64_u32(uint32x2_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0); }
__ai poly8x8_t vrev64_p8(poly8x8_t __a) {
  return __builtin_shufflevector(__a, __a, 7, 6, 5, 4, 3, 2, 1, 0); }
__ai poly16x4_t vrev64_p16(poly16x4_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0); }
__ai float32x2_t vrev64_f32(float32x2_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0); }
__ai int8x16_t vrev64q_s8(int8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8); }
__ai int16x8_t vrev64q_s16(int16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4); }
__ai int32x4_t vrev64q_s32(int32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2); }
__ai uint8x16_t vrev64q_u8(uint8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8); }
__ai uint16x8_t vrev64q_u16(uint16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4); }
__ai uint32x4_t vrev64q_u32(uint32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2); }
__ai poly8x16_t vrev64q_p8(poly8x16_t __a) {
  return __builtin_shufflevector(__a, __a, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8); }
__ai poly16x8_t vrev64q_p16(poly16x8_t __a) {
  return __builtin_shufflevector(__a, __a, 3, 2, 1, 0, 7, 6, 5, 4); }
__ai float32x4_t vrev64q_f32(float32x4_t __a) {
  return __builtin_shufflevector(__a, __a, 1, 0, 3, 2); }

__ai int8x8_t vrhadd_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vrhadd_v(__a, __b, 0); }
__ai int16x4_t vrhadd_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vrhadd_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vrhadd_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vrhadd_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai uint8x8_t vrhadd_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vrhadd_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vrhadd_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vrhadd_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vrhadd_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vrhadd_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai int8x16_t vrhaddq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vrhaddq_v(__a, __b, 32); }
__ai int16x8_t vrhaddq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vrhaddq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vrhaddq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vrhaddq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vrhaddq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vrhaddq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vrhaddq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vrhaddq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vrhaddq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vrhaddq_v((int8x16_t)__a, (int8x16_t)__b, 50); }

__ai int8x8_t vrshl_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vrshl_v(__a, __b, 0); }
__ai int16x4_t vrshl_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vrshl_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vrshl_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vrshl_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vrshl_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x1_t)__builtin_neon_vrshl_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint8x8_t vrshl_u8(uint8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vrshl_v((int8x8_t)__a, __b, 16); }
__ai uint16x4_t vrshl_u16(uint16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vrshl_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vrshl_u32(uint32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vrshl_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vrshl_u64(uint64x1_t __a, int64x1_t __b) {
  return (uint64x1_t)__builtin_neon_vrshl_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int8x16_t vrshlq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vrshlq_v(__a, __b, 32); }
__ai int16x8_t vrshlq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vrshlq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vrshlq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vrshlq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vrshlq_s64(int64x2_t __a, int64x2_t __b) {
  return (int64x2_t)__builtin_neon_vrshlq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint8x16_t vrshlq_u8(uint8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vrshlq_v((int8x16_t)__a, __b, 48); }
__ai uint16x8_t vrshlq_u16(uint16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vrshlq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vrshlq_u32(uint32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vrshlq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vrshlq_u64(uint64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vrshlq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

#define vrshrn_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vrshrn_n_v((int8x16_t)__a, __b, 0); })
#define vrshrn_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vrshrn_n_v((int8x16_t)__a, __b, 1); })
#define vrshrn_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vrshrn_n_v((int8x16_t)__a, __b, 2); })
#define vrshrn_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vrshrn_n_v((int8x16_t)__a, __b, 16); })
#define vrshrn_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vrshrn_n_v((int8x16_t)__a, __b, 17); })
#define vrshrn_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vrshrn_n_v((int8x16_t)__a, __b, 18); })

#define vrshr_n_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vrshr_n_v(__a, __b, 0); })
#define vrshr_n_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 1); })
#define vrshr_n_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 2); })
#define vrshr_n_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  (int64x1_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 3); })
#define vrshr_n_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 16); })
#define vrshr_n_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 17); })
#define vrshr_n_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 18); })
#define vrshr_n_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  (uint64x1_t)__builtin_neon_vrshr_n_v((int8x8_t)__a, __b, 19); })
#define vrshrq_n_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  (int8x16_t)__builtin_neon_vrshrq_n_v(__a, __b, 32); })
#define vrshrq_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int16x8_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 33); })
#define vrshrq_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int32x4_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 34); })
#define vrshrq_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int64x2_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 35); })
#define vrshrq_n_u8(a, __b) __extension__ ({ \
  uint8x16_t __a = (a); \
  (uint8x16_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 48); })
#define vrshrq_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint16x8_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 49); })
#define vrshrq_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 50); })
#define vrshrq_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vrshrq_n_v((int8x16_t)__a, __b, 51); })

__ai float32x2_t vrsqrte_f32(float32x2_t __a) {
  return (float32x2_t)__builtin_neon_vrsqrte_v((int8x8_t)__a, 7); }
__ai uint32x2_t vrsqrte_u32(uint32x2_t __a) {
  return (uint32x2_t)__builtin_neon_vrsqrte_v((int8x8_t)__a, 18); }
__ai float32x4_t vrsqrteq_f32(float32x4_t __a) {
  return (float32x4_t)__builtin_neon_vrsqrteq_v((int8x16_t)__a, 39); }
__ai uint32x4_t vrsqrteq_u32(uint32x4_t __a) {
  return (uint32x4_t)__builtin_neon_vrsqrteq_v((int8x16_t)__a, 50); }

__ai float32x2_t vrsqrts_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vrsqrts_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vrsqrtsq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vrsqrtsq_v((int8x16_t)__a, (int8x16_t)__b, 39); }

#define vrsra_n_s8(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vrsra_n_v(__a, __b, __c, 0); })
#define vrsra_n_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 1); })
#define vrsra_n_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 2); })
#define vrsra_n_s64(a, b, __c) __extension__ ({ \
  int64x1_t __a = (a); int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 3); })
#define vrsra_n_u8(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 16); })
#define vrsra_n_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 17); })
#define vrsra_n_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 18); })
#define vrsra_n_u64(a, b, __c) __extension__ ({ \
  uint64x1_t __a = (a); uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vrsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 19); })
#define vrsraq_n_s8(a, b, __c) __extension__ ({ \
  int8x16_t __a = (a); int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vrsraq_n_v(__a, __b, __c, 32); })
#define vrsraq_n_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 33); })
#define vrsraq_n_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 34); })
#define vrsraq_n_s64(a, b, __c) __extension__ ({ \
  int64x2_t __a = (a); int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 35); })
#define vrsraq_n_u8(a, b, __c) __extension__ ({ \
  uint8x16_t __a = (a); uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 48); })
#define vrsraq_n_u16(a, b, __c) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 49); })
#define vrsraq_n_u32(a, b, __c) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 50); })
#define vrsraq_n_u64(a, b, __c) __extension__ ({ \
  uint64x2_t __a = (a); uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vrsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 51); })

__ai int8x8_t vrsubhn_s16(int16x8_t __a, int16x8_t __b) {
  return (int8x8_t)__builtin_neon_vrsubhn_v((int8x16_t)__a, (int8x16_t)__b, 0); }
__ai int16x4_t vrsubhn_s32(int32x4_t __a, int32x4_t __b) {
  return (int16x4_t)__builtin_neon_vrsubhn_v((int8x16_t)__a, (int8x16_t)__b, 1); }
__ai int32x2_t vrsubhn_s64(int64x2_t __a, int64x2_t __b) {
  return (int32x2_t)__builtin_neon_vrsubhn_v((int8x16_t)__a, (int8x16_t)__b, 2); }
__ai uint8x8_t vrsubhn_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint8x8_t)__builtin_neon_vrsubhn_v((int8x16_t)__a, (int8x16_t)__b, 16); }
__ai uint16x4_t vrsubhn_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint16x4_t)__builtin_neon_vrsubhn_v((int8x16_t)__a, (int8x16_t)__b, 17); }
__ai uint32x2_t vrsubhn_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint32x2_t)__builtin_neon_vrsubhn_v((int8x16_t)__a, (int8x16_t)__b, 18); }

#define vset_lane_u8(a, b, __c) __extension__ ({ \
  uint8_t __a = (a); uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vset_lane_i8(__a, (int8x8_t)__b, __c); })
#define vset_lane_u16(a, b, __c) __extension__ ({ \
  uint16_t __a = (a); uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vset_lane_i16(__a, (int16x4_t)__b, __c); })
#define vset_lane_u32(a, b, __c) __extension__ ({ \
  uint32_t __a = (a); uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vset_lane_i32(__a, (int32x2_t)__b, __c); })
#define vset_lane_s8(a, b, __c) __extension__ ({ \
  int8_t __a = (a); int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vset_lane_i8(__a, __b, __c); })
#define vset_lane_s16(a, b, __c) __extension__ ({ \
  int16_t __a = (a); int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vset_lane_i16(__a, __b, __c); })
#define vset_lane_s32(a, b, __c) __extension__ ({ \
  int32_t __a = (a); int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vset_lane_i32(__a, __b, __c); })
#define vset_lane_p8(a, b, __c) __extension__ ({ \
  poly8_t __a = (a); poly8x8_t __b = (b); \
  (poly8x8_t)__builtin_neon_vset_lane_i8(__a, (int8x8_t)__b, __c); })
#define vset_lane_p16(a, b, __c) __extension__ ({ \
  poly16_t __a = (a); poly16x4_t __b = (b); \
  (poly16x4_t)__builtin_neon_vset_lane_i16(__a, (int16x4_t)__b, __c); })
#define vset_lane_f32(a, b, __c) __extension__ ({ \
  float32_t __a = (a); float32x2_t __b = (b); \
  (float32x2_t)__builtin_neon_vset_lane_f32(__a, __b, __c); })
#define vsetq_lane_u8(a, b, __c) __extension__ ({ \
  uint8_t __a = (a); uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vsetq_lane_i8(__a, (int8x16_t)__b, __c); })
#define vsetq_lane_u16(a, b, __c) __extension__ ({ \
  uint16_t __a = (a); uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vsetq_lane_i16(__a, (int16x8_t)__b, __c); })
#define vsetq_lane_u32(a, b, __c) __extension__ ({ \
  uint32_t __a = (a); uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vsetq_lane_i32(__a, (int32x4_t)__b, __c); })
#define vsetq_lane_s8(a, b, __c) __extension__ ({ \
  int8_t __a = (a); int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vsetq_lane_i8(__a, __b, __c); })
#define vsetq_lane_s16(a, b, __c) __extension__ ({ \
  int16_t __a = (a); int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vsetq_lane_i16(__a, __b, __c); })
#define vsetq_lane_s32(a, b, __c) __extension__ ({ \
  int32_t __a = (a); int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vsetq_lane_i32(__a, __b, __c); })
#define vsetq_lane_p8(a, b, __c) __extension__ ({ \
  poly8_t __a = (a); poly8x16_t __b = (b); \
  (poly8x16_t)__builtin_neon_vsetq_lane_i8(__a, (int8x16_t)__b, __c); })
#define vsetq_lane_p16(a, b, __c) __extension__ ({ \
  poly16_t __a = (a); poly16x8_t __b = (b); \
  (poly16x8_t)__builtin_neon_vsetq_lane_i16(__a, (int16x8_t)__b, __c); })
#define vsetq_lane_f32(a, b, __c) __extension__ ({ \
  float32_t __a = (a); float32x4_t __b = (b); \
  (float32x4_t)__builtin_neon_vsetq_lane_f32(__a, __b, __c); })
#define vset_lane_s64(a, b, __c) __extension__ ({ \
  int64_t __a = (a); int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vset_lane_i64(__a, __b, __c); })
#define vset_lane_u64(a, b, __c) __extension__ ({ \
  uint64_t __a = (a); uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vset_lane_i64(__a, (int64x1_t)__b, __c); })
#define vsetq_lane_s64(a, b, __c) __extension__ ({ \
  int64_t __a = (a); int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vsetq_lane_i64(__a, __b, __c); })
#define vsetq_lane_u64(a, b, __c) __extension__ ({ \
  uint64_t __a = (a); uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vsetq_lane_i64(__a, (int64x2_t)__b, __c); })

__ai int8x8_t vshl_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vshl_v(__a, __b, 0); }
__ai int16x4_t vshl_s16(int16x4_t __a, int16x4_t __b) {
  return (int16x4_t)__builtin_neon_vshl_v((int8x8_t)__a, (int8x8_t)__b, 1); }
__ai int32x2_t vshl_s32(int32x2_t __a, int32x2_t __b) {
  return (int32x2_t)__builtin_neon_vshl_v((int8x8_t)__a, (int8x8_t)__b, 2); }
__ai int64x1_t vshl_s64(int64x1_t __a, int64x1_t __b) {
  return (int64x1_t)__builtin_neon_vshl_v((int8x8_t)__a, (int8x8_t)__b, 3); }
__ai uint8x8_t vshl_u8(uint8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vshl_v((int8x8_t)__a, __b, 16); }
__ai uint16x4_t vshl_u16(uint16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vshl_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vshl_u32(uint32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vshl_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint64x1_t vshl_u64(uint64x1_t __a, int64x1_t __b) {
  return (uint64x1_t)__builtin_neon_vshl_v((int8x8_t)__a, (int8x8_t)__b, 19); }
__ai int8x16_t vshlq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vshlq_v(__a, __b, 32); }
__ai int16x8_t vshlq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vshlq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vshlq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vshlq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai int64x2_t vshlq_s64(int64x2_t __a, int64x2_t __b) {
  return (int64x2_t)__builtin_neon_vshlq_v((int8x16_t)__a, (int8x16_t)__b, 35); }
__ai uint8x16_t vshlq_u8(uint8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vshlq_v((int8x16_t)__a, __b, 48); }
__ai uint16x8_t vshlq_u16(uint16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vshlq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vshlq_u32(uint32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vshlq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint64x2_t vshlq_u64(uint64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vshlq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

#define vshll_n_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (int16x8_t)__builtin_neon_vshll_n_v(__a, __b, 33); })
#define vshll_n_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (int32x4_t)__builtin_neon_vshll_n_v((int8x8_t)__a, __b, 34); })
#define vshll_n_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (int64x2_t)__builtin_neon_vshll_n_v((int8x8_t)__a, __b, 35); })
#define vshll_n_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  (uint16x8_t)__builtin_neon_vshll_n_v((int8x8_t)__a, __b, 49); })
#define vshll_n_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vshll_n_v((int8x8_t)__a, __b, 50); })
#define vshll_n_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vshll_n_v((int8x8_t)__a, __b, 51); })

#define vshl_n_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vshl_n_v(__a, __b, 0); })
#define vshl_n_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 1); })
#define vshl_n_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 2); })
#define vshl_n_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  (int64x1_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 3); })
#define vshl_n_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 16); })
#define vshl_n_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 17); })
#define vshl_n_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 18); })
#define vshl_n_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  (uint64x1_t)__builtin_neon_vshl_n_v((int8x8_t)__a, __b, 19); })
#define vshlq_n_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  (int8x16_t)__builtin_neon_vshlq_n_v(__a, __b, 32); })
#define vshlq_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int16x8_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 33); })
#define vshlq_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int32x4_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 34); })
#define vshlq_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int64x2_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 35); })
#define vshlq_n_u8(a, __b) __extension__ ({ \
  uint8x16_t __a = (a); \
  (uint8x16_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 48); })
#define vshlq_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint16x8_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 49); })
#define vshlq_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 50); })
#define vshlq_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vshlq_n_v((int8x16_t)__a, __b, 51); })

#define vshrn_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vshrn_n_v((int8x16_t)__a, __b, 0); })
#define vshrn_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vshrn_n_v((int8x16_t)__a, __b, 1); })
#define vshrn_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vshrn_n_v((int8x16_t)__a, __b, 2); })
#define vshrn_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vshrn_n_v((int8x16_t)__a, __b, 16); })
#define vshrn_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vshrn_n_v((int8x16_t)__a, __b, 17); })
#define vshrn_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vshrn_n_v((int8x16_t)__a, __b, 18); })

#define vshr_n_s8(a, __b) __extension__ ({ \
  int8x8_t __a = (a); \
  (int8x8_t)__builtin_neon_vshr_n_v(__a, __b, 0); })
#define vshr_n_s16(a, __b) __extension__ ({ \
  int16x4_t __a = (a); \
  (int16x4_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 1); })
#define vshr_n_s32(a, __b) __extension__ ({ \
  int32x2_t __a = (a); \
  (int32x2_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 2); })
#define vshr_n_s64(a, __b) __extension__ ({ \
  int64x1_t __a = (a); \
  (int64x1_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 3); })
#define vshr_n_u8(a, __b) __extension__ ({ \
  uint8x8_t __a = (a); \
  (uint8x8_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 16); })
#define vshr_n_u16(a, __b) __extension__ ({ \
  uint16x4_t __a = (a); \
  (uint16x4_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 17); })
#define vshr_n_u32(a, __b) __extension__ ({ \
  uint32x2_t __a = (a); \
  (uint32x2_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 18); })
#define vshr_n_u64(a, __b) __extension__ ({ \
  uint64x1_t __a = (a); \
  (uint64x1_t)__builtin_neon_vshr_n_v((int8x8_t)__a, __b, 19); })
#define vshrq_n_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  (int8x16_t)__builtin_neon_vshrq_n_v(__a, __b, 32); })
#define vshrq_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  (int16x8_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 33); })
#define vshrq_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  (int32x4_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 34); })
#define vshrq_n_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (int64x2_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 35); })
#define vshrq_n_u8(a, __b) __extension__ ({ \
  uint8x16_t __a = (a); \
  (uint8x16_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 48); })
#define vshrq_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  (uint16x8_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 49); })
#define vshrq_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  (uint32x4_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 50); })
#define vshrq_n_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vshrq_n_v((int8x16_t)__a, __b, 51); })

#define vsli_n_s8(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vsli_n_v(__a, __b, __c, 0); })
#define vsli_n_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 1); })
#define vsli_n_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 2); })
#define vsli_n_s64(a, b, __c) __extension__ ({ \
  int64x1_t __a = (a); int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 3); })
#define vsli_n_u8(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 16); })
#define vsli_n_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 17); })
#define vsli_n_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 18); })
#define vsli_n_u64(a, b, __c) __extension__ ({ \
  uint64x1_t __a = (a); uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 19); })
#define vsli_n_p8(a, b, __c) __extension__ ({ \
  poly8x8_t __a = (a); poly8x8_t __b = (b); \
  (poly8x8_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 4); })
#define vsli_n_p16(a, b, __c) __extension__ ({ \
  poly16x4_t __a = (a); poly16x4_t __b = (b); \
  (poly16x4_t)__builtin_neon_vsli_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 5); })
#define vsliq_n_s8(a, b, __c) __extension__ ({ \
  int8x16_t __a = (a); int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vsliq_n_v(__a, __b, __c, 32); })
#define vsliq_n_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 33); })
#define vsliq_n_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 34); })
#define vsliq_n_s64(a, b, __c) __extension__ ({ \
  int64x2_t __a = (a); int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 35); })
#define vsliq_n_u8(a, b, __c) __extension__ ({ \
  uint8x16_t __a = (a); uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 48); })
#define vsliq_n_u16(a, b, __c) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 49); })
#define vsliq_n_u32(a, b, __c) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 50); })
#define vsliq_n_u64(a, b, __c) __extension__ ({ \
  uint64x2_t __a = (a); uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 51); })
#define vsliq_n_p8(a, b, __c) __extension__ ({ \
  poly8x16_t __a = (a); poly8x16_t __b = (b); \
  (poly8x16_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 36); })
#define vsliq_n_p16(a, b, __c) __extension__ ({ \
  poly16x8_t __a = (a); poly16x8_t __b = (b); \
  (poly16x8_t)__builtin_neon_vsliq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 37); })

#define vsra_n_s8(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vsra_n_v(__a, __b, __c, 0); })
#define vsra_n_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 1); })
#define vsra_n_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 2); })
#define vsra_n_s64(a, b, __c) __extension__ ({ \
  int64x1_t __a = (a); int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 3); })
#define vsra_n_u8(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 16); })
#define vsra_n_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 17); })
#define vsra_n_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 18); })
#define vsra_n_u64(a, b, __c) __extension__ ({ \
  uint64x1_t __a = (a); uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vsra_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 19); })
#define vsraq_n_s8(a, b, __c) __extension__ ({ \
  int8x16_t __a = (a); int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vsraq_n_v(__a, __b, __c, 32); })
#define vsraq_n_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 33); })
#define vsraq_n_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 34); })
#define vsraq_n_s64(a, b, __c) __extension__ ({ \
  int64x2_t __a = (a); int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 35); })
#define vsraq_n_u8(a, b, __c) __extension__ ({ \
  uint8x16_t __a = (a); uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 48); })
#define vsraq_n_u16(a, b, __c) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 49); })
#define vsraq_n_u32(a, b, __c) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 50); })
#define vsraq_n_u64(a, b, __c) __extension__ ({ \
  uint64x2_t __a = (a); uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vsraq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 51); })

#define vsri_n_s8(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int8x8_t __b = (b); \
  (int8x8_t)__builtin_neon_vsri_n_v(__a, __b, __c, 0); })
#define vsri_n_s16(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int16x4_t __b = (b); \
  (int16x4_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 1); })
#define vsri_n_s32(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int32x2_t __b = (b); \
  (int32x2_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 2); })
#define vsri_n_s64(a, b, __c) __extension__ ({ \
  int64x1_t __a = (a); int64x1_t __b = (b); \
  (int64x1_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 3); })
#define vsri_n_u8(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint8x8_t __b = (b); \
  (uint8x8_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 16); })
#define vsri_n_u16(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint16x4_t __b = (b); \
  (uint16x4_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 17); })
#define vsri_n_u32(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint32x2_t __b = (b); \
  (uint32x2_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 18); })
#define vsri_n_u64(a, b, __c) __extension__ ({ \
  uint64x1_t __a = (a); uint64x1_t __b = (b); \
  (uint64x1_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 19); })
#define vsri_n_p8(a, b, __c) __extension__ ({ \
  poly8x8_t __a = (a); poly8x8_t __b = (b); \
  (poly8x8_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 4); })
#define vsri_n_p16(a, b, __c) __extension__ ({ \
  poly16x4_t __a = (a); poly16x4_t __b = (b); \
  (poly16x4_t)__builtin_neon_vsri_n_v((int8x8_t)__a, (int8x8_t)__b, __c, 5); })
#define vsriq_n_s8(a, b, __c) __extension__ ({ \
  int8x16_t __a = (a); int8x16_t __b = (b); \
  (int8x16_t)__builtin_neon_vsriq_n_v(__a, __b, __c, 32); })
#define vsriq_n_s16(a, b, __c) __extension__ ({ \
  int16x8_t __a = (a); int16x8_t __b = (b); \
  (int16x8_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 33); })
#define vsriq_n_s32(a, b, __c) __extension__ ({ \
  int32x4_t __a = (a); int32x4_t __b = (b); \
  (int32x4_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 34); })
#define vsriq_n_s64(a, b, __c) __extension__ ({ \
  int64x2_t __a = (a); int64x2_t __b = (b); \
  (int64x2_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 35); })
#define vsriq_n_u8(a, b, __c) __extension__ ({ \
  uint8x16_t __a = (a); uint8x16_t __b = (b); \
  (uint8x16_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 48); })
#define vsriq_n_u16(a, b, __c) __extension__ ({ \
  uint16x8_t __a = (a); uint16x8_t __b = (b); \
  (uint16x8_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 49); })
#define vsriq_n_u32(a, b, __c) __extension__ ({ \
  uint32x4_t __a = (a); uint32x4_t __b = (b); \
  (uint32x4_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 50); })
#define vsriq_n_u64(a, b, __c) __extension__ ({ \
  uint64x2_t __a = (a); uint64x2_t __b = (b); \
  (uint64x2_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 51); })
#define vsriq_n_p8(a, b, __c) __extension__ ({ \
  poly8x16_t __a = (a); poly8x16_t __b = (b); \
  (poly8x16_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 36); })
#define vsriq_n_p16(a, b, __c) __extension__ ({ \
  poly16x8_t __a = (a); poly16x8_t __b = (b); \
  (poly16x8_t)__builtin_neon_vsriq_n_v((int8x16_t)__a, (int8x16_t)__b, __c, 37); })

#define vst1q_u8(__a, b) __extension__ ({ \
  uint8x16_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 48); })
#define vst1q_u16(__a, b) __extension__ ({ \
  uint16x8_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 49); })
#define vst1q_u32(__a, b) __extension__ ({ \
  uint32x4_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 50); })
#define vst1q_u64(__a, b) __extension__ ({ \
  uint64x2_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 51); })
#define vst1q_s8(__a, b) __extension__ ({ \
  int8x16_t __b = (b); \
  __builtin_neon_vst1q_v(__a, __b, 32); })
#define vst1q_s16(__a, b) __extension__ ({ \
  int16x8_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 33); })
#define vst1q_s32(__a, b) __extension__ ({ \
  int32x4_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 34); })
#define vst1q_s64(__a, b) __extension__ ({ \
  int64x2_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 35); })
#define vst1q_f16(__a, b) __extension__ ({ \
  float16x8_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 38); })
#define vst1q_f32(__a, b) __extension__ ({ \
  float32x4_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 39); })
#define vst1q_p8(__a, b) __extension__ ({ \
  poly8x16_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 36); })
#define vst1q_p16(__a, b) __extension__ ({ \
  poly16x8_t __b = (b); \
  __builtin_neon_vst1q_v(__a, (int8x16_t)__b, 37); })
#define vst1_u8(__a, b) __extension__ ({ \
  uint8x8_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 16); })
#define vst1_u16(__a, b) __extension__ ({ \
  uint16x4_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 17); })
#define vst1_u32(__a, b) __extension__ ({ \
  uint32x2_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 18); })
#define vst1_u64(__a, b) __extension__ ({ \
  uint64x1_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 19); })
#define vst1_s8(__a, b) __extension__ ({ \
  int8x8_t __b = (b); \
  __builtin_neon_vst1_v(__a, __b, 0); })
#define vst1_s16(__a, b) __extension__ ({ \
  int16x4_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 1); })
#define vst1_s32(__a, b) __extension__ ({ \
  int32x2_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 2); })
#define vst1_s64(__a, b) __extension__ ({ \
  int64x1_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 3); })
#define vst1_f16(__a, b) __extension__ ({ \
  float16x4_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 6); })
#define vst1_f32(__a, b) __extension__ ({ \
  float32x2_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 7); })
#define vst1_p8(__a, b) __extension__ ({ \
  poly8x8_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 4); })
#define vst1_p16(__a, b) __extension__ ({ \
  poly16x4_t __b = (b); \
  __builtin_neon_vst1_v(__a, (int8x8_t)__b, 5); })

#define vst1q_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x16_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 48); })
#define vst1q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 49); })
#define vst1q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 50); })
#define vst1q_lane_u64(__a, b, __c) __extension__ ({ \
  uint64x2_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 51); })
#define vst1q_lane_s8(__a, b, __c) __extension__ ({ \
  int8x16_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, __b, __c, 32); })
#define vst1q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 33); })
#define vst1q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 34); })
#define vst1q_lane_s64(__a, b, __c) __extension__ ({ \
  int64x2_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 35); })
#define vst1q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 38); })
#define vst1q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 39); })
#define vst1q_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x16_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 36); })
#define vst1q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8_t __b = (b); \
  __builtin_neon_vst1q_lane_v(__a, (int8x16_t)__b, __c, 37); })
#define vst1_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 16); })
#define vst1_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 17); })
#define vst1_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 18); })
#define vst1_lane_u64(__a, b, __c) __extension__ ({ \
  uint64x1_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 19); })
#define vst1_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, __b, __c, 0); })
#define vst1_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 1); })
#define vst1_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 2); })
#define vst1_lane_s64(__a, b, __c) __extension__ ({ \
  int64x1_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 3); })
#define vst1_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 6); })
#define vst1_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 7); })
#define vst1_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 4); })
#define vst1_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4_t __b = (b); \
  __builtin_neon_vst1_lane_v(__a, (int8x8_t)__b, __c, 5); })

#define vst2q_u8(__a, b) __extension__ ({ \
  uint8x16x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 48); })
#define vst2q_u16(__a, b) __extension__ ({ \
  uint16x8x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 49); })
#define vst2q_u32(__a, b) __extension__ ({ \
  uint32x4x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 50); })
#define vst2q_s8(__a, b) __extension__ ({ \
  int8x16x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, __b.val[0], __b.val[1], 32); })
#define vst2q_s16(__a, b) __extension__ ({ \
  int16x8x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 33); })
#define vst2q_s32(__a, b) __extension__ ({ \
  int32x4x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 34); })
#define vst2q_f16(__a, b) __extension__ ({ \
  float16x8x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 38); })
#define vst2q_f32(__a, b) __extension__ ({ \
  float32x4x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 39); })
#define vst2q_p8(__a, b) __extension__ ({ \
  poly8x16x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 36); })
#define vst2q_p16(__a, b) __extension__ ({ \
  poly16x8x2_t __b = (b); \
  __builtin_neon_vst2q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], 37); })
#define vst2_u8(__a, b) __extension__ ({ \
  uint8x8x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 16); })
#define vst2_u16(__a, b) __extension__ ({ \
  uint16x4x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 17); })
#define vst2_u32(__a, b) __extension__ ({ \
  uint32x2x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 18); })
#define vst2_u64(__a, b) __extension__ ({ \
  uint64x1x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 19); })
#define vst2_s8(__a, b) __extension__ ({ \
  int8x8x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, __b.val[0], __b.val[1], 0); })
#define vst2_s16(__a, b) __extension__ ({ \
  int16x4x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 1); })
#define vst2_s32(__a, b) __extension__ ({ \
  int32x2x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 2); })
#define vst2_s64(__a, b) __extension__ ({ \
  int64x1x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 3); })
#define vst2_f16(__a, b) __extension__ ({ \
  float16x4x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 6); })
#define vst2_f32(__a, b) __extension__ ({ \
  float32x2x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 7); })
#define vst2_p8(__a, b) __extension__ ({ \
  poly8x8x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 4); })
#define vst2_p16(__a, b) __extension__ ({ \
  poly16x4x2_t __b = (b); \
  __builtin_neon_vst2_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], 5); })

#define vst2q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 49); })
#define vst2q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 50); })
#define vst2q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 33); })
#define vst2q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 34); })
#define vst2q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 38); })
#define vst2q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 39); })
#define vst2q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8x2_t __b = (b); \
  __builtin_neon_vst2q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], __c, 37); })
#define vst2_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 16); })
#define vst2_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 17); })
#define vst2_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 18); })
#define vst2_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, __b.val[0], __b.val[1], __c, 0); })
#define vst2_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 1); })
#define vst2_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 2); })
#define vst2_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 6); })
#define vst2_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 7); })
#define vst2_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 4); })
#define vst2_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4x2_t __b = (b); \
  __builtin_neon_vst2_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], __c, 5); })

#define vst3q_u8(__a, b) __extension__ ({ \
  uint8x16x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 48); })
#define vst3q_u16(__a, b) __extension__ ({ \
  uint16x8x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 49); })
#define vst3q_u32(__a, b) __extension__ ({ \
  uint32x4x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 50); })
#define vst3q_s8(__a, b) __extension__ ({ \
  int8x16x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, __b.val[0], __b.val[1], __b.val[2], 32); })
#define vst3q_s16(__a, b) __extension__ ({ \
  int16x8x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 33); })
#define vst3q_s32(__a, b) __extension__ ({ \
  int32x4x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 34); })
#define vst3q_f16(__a, b) __extension__ ({ \
  float16x8x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 38); })
#define vst3q_f32(__a, b) __extension__ ({ \
  float32x4x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 39); })
#define vst3q_p8(__a, b) __extension__ ({ \
  poly8x16x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 36); })
#define vst3q_p16(__a, b) __extension__ ({ \
  poly16x8x3_t __b = (b); \
  __builtin_neon_vst3q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], 37); })
#define vst3_u8(__a, b) __extension__ ({ \
  uint8x8x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 16); })
#define vst3_u16(__a, b) __extension__ ({ \
  uint16x4x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 17); })
#define vst3_u32(__a, b) __extension__ ({ \
  uint32x2x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 18); })
#define vst3_u64(__a, b) __extension__ ({ \
  uint64x1x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 19); })
#define vst3_s8(__a, b) __extension__ ({ \
  int8x8x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, __b.val[0], __b.val[1], __b.val[2], 0); })
#define vst3_s16(__a, b) __extension__ ({ \
  int16x4x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 1); })
#define vst3_s32(__a, b) __extension__ ({ \
  int32x2x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 2); })
#define vst3_s64(__a, b) __extension__ ({ \
  int64x1x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 3); })
#define vst3_f16(__a, b) __extension__ ({ \
  float16x4x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 6); })
#define vst3_f32(__a, b) __extension__ ({ \
  float32x2x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 7); })
#define vst3_p8(__a, b) __extension__ ({ \
  poly8x8x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 4); })
#define vst3_p16(__a, b) __extension__ ({ \
  poly16x4x3_t __b = (b); \
  __builtin_neon_vst3_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], 5); })

#define vst3q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 49); })
#define vst3q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 50); })
#define vst3q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 33); })
#define vst3q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 34); })
#define vst3q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 38); })
#define vst3q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 39); })
#define vst3q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8x3_t __b = (b); \
  __builtin_neon_vst3q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], __c, 37); })
#define vst3_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 16); })
#define vst3_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 17); })
#define vst3_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 18); })
#define vst3_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, __b.val[0], __b.val[1], __b.val[2], __c, 0); })
#define vst3_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 1); })
#define vst3_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 2); })
#define vst3_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 6); })
#define vst3_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 7); })
#define vst3_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 4); })
#define vst3_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4x3_t __b = (b); \
  __builtin_neon_vst3_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], __c, 5); })

#define vst4q_u8(__a, b) __extension__ ({ \
  uint8x16x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 48); })
#define vst4q_u16(__a, b) __extension__ ({ \
  uint16x8x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 49); })
#define vst4q_u32(__a, b) __extension__ ({ \
  uint32x4x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 50); })
#define vst4q_s8(__a, b) __extension__ ({ \
  int8x16x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, __b.val[0], __b.val[1], __b.val[2], __b.val[3], 32); })
#define vst4q_s16(__a, b) __extension__ ({ \
  int16x8x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 33); })
#define vst4q_s32(__a, b) __extension__ ({ \
  int32x4x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 34); })
#define vst4q_f16(__a, b) __extension__ ({ \
  float16x8x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 38); })
#define vst4q_f32(__a, b) __extension__ ({ \
  float32x4x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 39); })
#define vst4q_p8(__a, b) __extension__ ({ \
  poly8x16x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 36); })
#define vst4q_p16(__a, b) __extension__ ({ \
  poly16x8x4_t __b = (b); \
  __builtin_neon_vst4q_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], 37); })
#define vst4_u8(__a, b) __extension__ ({ \
  uint8x8x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 16); })
#define vst4_u16(__a, b) __extension__ ({ \
  uint16x4x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 17); })
#define vst4_u32(__a, b) __extension__ ({ \
  uint32x2x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 18); })
#define vst4_u64(__a, b) __extension__ ({ \
  uint64x1x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 19); })
#define vst4_s8(__a, b) __extension__ ({ \
  int8x8x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, __b.val[0], __b.val[1], __b.val[2], __b.val[3], 0); })
#define vst4_s16(__a, b) __extension__ ({ \
  int16x4x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 1); })
#define vst4_s32(__a, b) __extension__ ({ \
  int32x2x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 2); })
#define vst4_s64(__a, b) __extension__ ({ \
  int64x1x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 3); })
#define vst4_f16(__a, b) __extension__ ({ \
  float16x4x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 6); })
#define vst4_f32(__a, b) __extension__ ({ \
  float32x2x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 7); })
#define vst4_p8(__a, b) __extension__ ({ \
  poly8x8x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 4); })
#define vst4_p16(__a, b) __extension__ ({ \
  poly16x4x4_t __b = (b); \
  __builtin_neon_vst4_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], 5); })

#define vst4q_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x8x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 49); })
#define vst4q_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x4x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 50); })
#define vst4q_lane_s16(__a, b, __c) __extension__ ({ \
  int16x8x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 33); })
#define vst4q_lane_s32(__a, b, __c) __extension__ ({ \
  int32x4x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 34); })
#define vst4q_lane_f16(__a, b, __c) __extension__ ({ \
  float16x8x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 38); })
#define vst4q_lane_f32(__a, b, __c) __extension__ ({ \
  float32x4x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 39); })
#define vst4q_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x8x4_t __b = (b); \
  __builtin_neon_vst4q_lane_v(__a, (int8x16_t)__b.val[0], (int8x16_t)__b.val[1], (int8x16_t)__b.val[2], (int8x16_t)__b.val[3], __c, 37); })
#define vst4_lane_u8(__a, b, __c) __extension__ ({ \
  uint8x8x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 16); })
#define vst4_lane_u16(__a, b, __c) __extension__ ({ \
  uint16x4x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 17); })
#define vst4_lane_u32(__a, b, __c) __extension__ ({ \
  uint32x2x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 18); })
#define vst4_lane_s8(__a, b, __c) __extension__ ({ \
  int8x8x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, __b.val[0], __b.val[1], __b.val[2], __b.val[3], __c, 0); })
#define vst4_lane_s16(__a, b, __c) __extension__ ({ \
  int16x4x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 1); })
#define vst4_lane_s32(__a, b, __c) __extension__ ({ \
  int32x2x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 2); })
#define vst4_lane_f16(__a, b, __c) __extension__ ({ \
  float16x4x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 6); })
#define vst4_lane_f32(__a, b, __c) __extension__ ({ \
  float32x2x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 7); })
#define vst4_lane_p8(__a, b, __c) __extension__ ({ \
  poly8x8x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 4); })
#define vst4_lane_p16(__a, b, __c) __extension__ ({ \
  poly16x4x4_t __b = (b); \
  __builtin_neon_vst4_lane_v(__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], __c, 5); })

__ai int8x8_t vsub_s8(int8x8_t __a, int8x8_t __b) {
  return __a - __b; }
__ai int16x4_t vsub_s16(int16x4_t __a, int16x4_t __b) {
  return __a - __b; }
__ai int32x2_t vsub_s32(int32x2_t __a, int32x2_t __b) {
  return __a - __b; }
__ai int64x1_t vsub_s64(int64x1_t __a, int64x1_t __b) {
  return __a - __b; }
__ai float32x2_t vsub_f32(float32x2_t __a, float32x2_t __b) {
  return __a - __b; }
__ai uint8x8_t vsub_u8(uint8x8_t __a, uint8x8_t __b) {
  return __a - __b; }
__ai uint16x4_t vsub_u16(uint16x4_t __a, uint16x4_t __b) {
  return __a - __b; }
__ai uint32x2_t vsub_u32(uint32x2_t __a, uint32x2_t __b) {
  return __a - __b; }
__ai uint64x1_t vsub_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a - __b; }
__ai int8x16_t vsubq_s8(int8x16_t __a, int8x16_t __b) {
  return __a - __b; }
__ai int16x8_t vsubq_s16(int16x8_t __a, int16x8_t __b) {
  return __a - __b; }
__ai int32x4_t vsubq_s32(int32x4_t __a, int32x4_t __b) {
  return __a - __b; }
__ai int64x2_t vsubq_s64(int64x2_t __a, int64x2_t __b) {
  return __a - __b; }
__ai float32x4_t vsubq_f32(float32x4_t __a, float32x4_t __b) {
  return __a - __b; }
__ai uint8x16_t vsubq_u8(uint8x16_t __a, uint8x16_t __b) {
  return __a - __b; }
__ai uint16x8_t vsubq_u16(uint16x8_t __a, uint16x8_t __b) {
  return __a - __b; }
__ai uint32x4_t vsubq_u32(uint32x4_t __a, uint32x4_t __b) {
  return __a - __b; }
__ai uint64x2_t vsubq_u64(uint64x2_t __a, uint64x2_t __b) {
  return __a - __b; }

__ai int8x8_t vsubhn_s16(int16x8_t __a, int16x8_t __b) {
  return (int8x8_t)__builtin_neon_vsubhn_v((int8x16_t)__a, (int8x16_t)__b, 0); }
__ai int16x4_t vsubhn_s32(int32x4_t __a, int32x4_t __b) {
  return (int16x4_t)__builtin_neon_vsubhn_v((int8x16_t)__a, (int8x16_t)__b, 1); }
__ai int32x2_t vsubhn_s64(int64x2_t __a, int64x2_t __b) {
  return (int32x2_t)__builtin_neon_vsubhn_v((int8x16_t)__a, (int8x16_t)__b, 2); }
__ai uint8x8_t vsubhn_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint8x8_t)__builtin_neon_vsubhn_v((int8x16_t)__a, (int8x16_t)__b, 16); }
__ai uint16x4_t vsubhn_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint16x4_t)__builtin_neon_vsubhn_v((int8x16_t)__a, (int8x16_t)__b, 17); }
__ai uint32x2_t vsubhn_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint32x2_t)__builtin_neon_vsubhn_v((int8x16_t)__a, (int8x16_t)__b, 18); }

__ai int16x8_t vsubl_s8(int8x8_t __a, int8x8_t __b) {
  return vmovl_s8(__a) - vmovl_s8(__b); }
__ai int32x4_t vsubl_s16(int16x4_t __a, int16x4_t __b) {
  return vmovl_s16(__a) - vmovl_s16(__b); }
__ai int64x2_t vsubl_s32(int32x2_t __a, int32x2_t __b) {
  return vmovl_s32(__a) - vmovl_s32(__b); }
__ai uint16x8_t vsubl_u8(uint8x8_t __a, uint8x8_t __b) {
  return vmovl_u8(__a) - vmovl_u8(__b); }
__ai uint32x4_t vsubl_u16(uint16x4_t __a, uint16x4_t __b) {
  return vmovl_u16(__a) - vmovl_u16(__b); }
__ai uint64x2_t vsubl_u32(uint32x2_t __a, uint32x2_t __b) {
  return vmovl_u32(__a) - vmovl_u32(__b); }

__ai int16x8_t vsubw_s8(int16x8_t __a, int8x8_t __b) {
  return __a - vmovl_s8(__b); }
__ai int32x4_t vsubw_s16(int32x4_t __a, int16x4_t __b) {
  return __a - vmovl_s16(__b); }
__ai int64x2_t vsubw_s32(int64x2_t __a, int32x2_t __b) {
  return __a - vmovl_s32(__b); }
__ai uint16x8_t vsubw_u8(uint16x8_t __a, uint8x8_t __b) {
  return __a - vmovl_u8(__b); }
__ai uint32x4_t vsubw_u16(uint32x4_t __a, uint16x4_t __b) {
  return __a - vmovl_u16(__b); }
__ai uint64x2_t vsubw_u32(uint64x2_t __a, uint32x2_t __b) {
  return __a - vmovl_u32(__b); }

__ai uint8x8_t vtbl1_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtbl1_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai int8x8_t vtbl1_s8(int8x8_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vtbl1_v(__a, __b, 0); }
__ai poly8x8_t vtbl1_p8(poly8x8_t __a, uint8x8_t __b) {
  return (poly8x8_t)__builtin_neon_vtbl1_v((int8x8_t)__a, (int8x8_t)__b, 4); }

__ai uint8x8_t vtbl2_u8(uint8x8x2_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtbl2_v((int8x8_t)__a.val[0], (int8x8_t)__a.val[1], (int8x8_t)__b, 16); }
__ai int8x8_t vtbl2_s8(int8x8x2_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vtbl2_v(__a.val[0], __a.val[1], __b, 0); }
__ai poly8x8_t vtbl2_p8(poly8x8x2_t __a, uint8x8_t __b) {
  return (poly8x8_t)__builtin_neon_vtbl2_v((int8x8_t)__a.val[0], (int8x8_t)__a.val[1], (int8x8_t)__b, 4); }

__ai uint8x8_t vtbl3_u8(uint8x8x3_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtbl3_v((int8x8_t)__a.val[0], (int8x8_t)__a.val[1], (int8x8_t)__a.val[2], (int8x8_t)__b, 16); }
__ai int8x8_t vtbl3_s8(int8x8x3_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vtbl3_v(__a.val[0], __a.val[1], __a.val[2], __b, 0); }
__ai poly8x8_t vtbl3_p8(poly8x8x3_t __a, uint8x8_t __b) {
  return (poly8x8_t)__builtin_neon_vtbl3_v((int8x8_t)__a.val[0], (int8x8_t)__a.val[1], (int8x8_t)__a.val[2], (int8x8_t)__b, 4); }

__ai uint8x8_t vtbl4_u8(uint8x8x4_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtbl4_v((int8x8_t)__a.val[0], (int8x8_t)__a.val[1], (int8x8_t)__a.val[2], (int8x8_t)__a.val[3], (int8x8_t)__b, 16); }
__ai int8x8_t vtbl4_s8(int8x8x4_t __a, int8x8_t __b) {
  return (int8x8_t)__builtin_neon_vtbl4_v(__a.val[0], __a.val[1], __a.val[2], __a.val[3], __b, 0); }
__ai poly8x8_t vtbl4_p8(poly8x8x4_t __a, uint8x8_t __b) {
  return (poly8x8_t)__builtin_neon_vtbl4_v((int8x8_t)__a.val[0], (int8x8_t)__a.val[1], (int8x8_t)__a.val[2], (int8x8_t)__a.val[3], (int8x8_t)__b, 4); }

__ai uint8x8_t vtbx1_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c) {
  return (uint8x8_t)__builtin_neon_vtbx1_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 16); }
__ai int8x8_t vtbx1_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c) {
  return (int8x8_t)__builtin_neon_vtbx1_v(__a, __b, __c, 0); }
__ai poly8x8_t vtbx1_p8(poly8x8_t __a, poly8x8_t __b, uint8x8_t __c) {
  return (poly8x8_t)__builtin_neon_vtbx1_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 4); }

__ai uint8x8_t vtbx2_u8(uint8x8_t __a, uint8x8x2_t __b, uint8x8_t __c) {
  return (uint8x8_t)__builtin_neon_vtbx2_v((int8x8_t)__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__c, 16); }
__ai int8x8_t vtbx2_s8(int8x8_t __a, int8x8x2_t __b, int8x8_t __c) {
  return (int8x8_t)__builtin_neon_vtbx2_v(__a, __b.val[0], __b.val[1], __c, 0); }
__ai poly8x8_t vtbx2_p8(poly8x8_t __a, poly8x8x2_t __b, uint8x8_t __c) {
  return (poly8x8_t)__builtin_neon_vtbx2_v((int8x8_t)__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__c, 4); }

__ai uint8x8_t vtbx3_u8(uint8x8_t __a, uint8x8x3_t __b, uint8x8_t __c) {
  return (uint8x8_t)__builtin_neon_vtbx3_v((int8x8_t)__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__c, 16); }
__ai int8x8_t vtbx3_s8(int8x8_t __a, int8x8x3_t __b, int8x8_t __c) {
  return (int8x8_t)__builtin_neon_vtbx3_v(__a, __b.val[0], __b.val[1], __b.val[2], __c, 0); }
__ai poly8x8_t vtbx3_p8(poly8x8_t __a, poly8x8x3_t __b, uint8x8_t __c) {
  return (poly8x8_t)__builtin_neon_vtbx3_v((int8x8_t)__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__c, 4); }

__ai uint8x8_t vtbx4_u8(uint8x8_t __a, uint8x8x4_t __b, uint8x8_t __c) {
  return (uint8x8_t)__builtin_neon_vtbx4_v((int8x8_t)__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], (int8x8_t)__c, 16); }
__ai int8x8_t vtbx4_s8(int8x8_t __a, int8x8x4_t __b, int8x8_t __c) {
  return (int8x8_t)__builtin_neon_vtbx4_v(__a, __b.val[0], __b.val[1], __b.val[2], __b.val[3], __c, 0); }
__ai poly8x8_t vtbx4_p8(poly8x8_t __a, poly8x8x4_t __b, uint8x8_t __c) {
  return (poly8x8_t)__builtin_neon_vtbx4_v((int8x8_t)__a, (int8x8_t)__b.val[0], (int8x8_t)__b.val[1], (int8x8_t)__b.val[2], (int8x8_t)__b.val[3], (int8x8_t)__c, 4); }

__ai int8x8x2_t vtrn_s8(int8x8_t __a, int8x8_t __b) {
  int8x8x2_t r; __builtin_neon_vtrn_v(&r, __a, __b, 0); return r; }
__ai int16x4x2_t vtrn_s16(int16x4_t __a, int16x4_t __b) {
  int16x4x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 1); return r; }
__ai int32x2x2_t vtrn_s32(int32x2_t __a, int32x2_t __b) {
  int32x2x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 2); return r; }
__ai uint8x8x2_t vtrn_u8(uint8x8_t __a, uint8x8_t __b) {
  uint8x8x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 16); return r; }
__ai uint16x4x2_t vtrn_u16(uint16x4_t __a, uint16x4_t __b) {
  uint16x4x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 17); return r; }
__ai uint32x2x2_t vtrn_u32(uint32x2_t __a, uint32x2_t __b) {
  uint32x2x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 18); return r; }
__ai float32x2x2_t vtrn_f32(float32x2_t __a, float32x2_t __b) {
  float32x2x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 7); return r; }
__ai poly8x8x2_t vtrn_p8(poly8x8_t __a, poly8x8_t __b) {
  poly8x8x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 4); return r; }
__ai poly16x4x2_t vtrn_p16(poly16x4_t __a, poly16x4_t __b) {
  poly16x4x2_t r; __builtin_neon_vtrn_v(&r, (int8x8_t)__a, (int8x8_t)__b, 5); return r; }
__ai int8x16x2_t vtrnq_s8(int8x16_t __a, int8x16_t __b) {
  int8x16x2_t r; __builtin_neon_vtrnq_v(&r, __a, __b, 32); return r; }
__ai int16x8x2_t vtrnq_s16(int16x8_t __a, int16x8_t __b) {
  int16x8x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 33); return r; }
__ai int32x4x2_t vtrnq_s32(int32x4_t __a, int32x4_t __b) {
  int32x4x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 34); return r; }
__ai uint8x16x2_t vtrnq_u8(uint8x16_t __a, uint8x16_t __b) {
  uint8x16x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 48); return r; }
__ai uint16x8x2_t vtrnq_u16(uint16x8_t __a, uint16x8_t __b) {
  uint16x8x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 49); return r; }
__ai uint32x4x2_t vtrnq_u32(uint32x4_t __a, uint32x4_t __b) {
  uint32x4x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 50); return r; }
__ai float32x4x2_t vtrnq_f32(float32x4_t __a, float32x4_t __b) {
  float32x4x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 39); return r; }
__ai poly8x16x2_t vtrnq_p8(poly8x16_t __a, poly8x16_t __b) {
  poly8x16x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 36); return r; }
__ai poly16x8x2_t vtrnq_p16(poly16x8_t __a, poly16x8_t __b) {
  poly16x8x2_t r; __builtin_neon_vtrnq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 37); return r; }

__ai uint8x8_t vtst_s8(int8x8_t __a, int8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtst_v(__a, __b, 16); }
__ai uint16x4_t vtst_s16(int16x4_t __a, int16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vtst_s32(int32x2_t __a, int32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint8x8_t vtst_u8(uint8x8_t __a, uint8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vtst_u16(uint16x4_t __a, uint16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint32x2_t vtst_u32(uint32x2_t __a, uint32x2_t __b) {
  return (uint32x2_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 18); }
__ai uint8x8_t vtst_p8(poly8x8_t __a, poly8x8_t __b) {
  return (uint8x8_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 16); }
__ai uint16x4_t vtst_p16(poly16x4_t __a, poly16x4_t __b) {
  return (uint16x4_t)__builtin_neon_vtst_v((int8x8_t)__a, (int8x8_t)__b, 17); }
__ai uint8x16_t vtstq_s8(int8x16_t __a, int8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vtstq_v(__a, __b, 48); }
__ai uint16x8_t vtstq_s16(int16x8_t __a, int16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vtstq_s32(int32x4_t __a, int32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint8x16_t vtstq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vtstq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vtstq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai uint8x16_t vtstq_p8(poly8x16_t __a, poly8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vtstq_p16(poly16x8_t __a, poly16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 49); }

__ai int8x8x2_t vuzp_s8(int8x8_t __a, int8x8_t __b) {
  int8x8x2_t r; __builtin_neon_vuzp_v(&r, __a, __b, 0); return r; }
__ai int16x4x2_t vuzp_s16(int16x4_t __a, int16x4_t __b) {
  int16x4x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 1); return r; }
__ai int32x2x2_t vuzp_s32(int32x2_t __a, int32x2_t __b) {
  int32x2x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 2); return r; }
__ai uint8x8x2_t vuzp_u8(uint8x8_t __a, uint8x8_t __b) {
  uint8x8x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 16); return r; }
__ai uint16x4x2_t vuzp_u16(uint16x4_t __a, uint16x4_t __b) {
  uint16x4x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 17); return r; }
__ai uint32x2x2_t vuzp_u32(uint32x2_t __a, uint32x2_t __b) {
  uint32x2x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 18); return r; }
__ai float32x2x2_t vuzp_f32(float32x2_t __a, float32x2_t __b) {
  float32x2x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 7); return r; }
__ai poly8x8x2_t vuzp_p8(poly8x8_t __a, poly8x8_t __b) {
  poly8x8x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 4); return r; }
__ai poly16x4x2_t vuzp_p16(poly16x4_t __a, poly16x4_t __b) {
  poly16x4x2_t r; __builtin_neon_vuzp_v(&r, (int8x8_t)__a, (int8x8_t)__b, 5); return r; }
__ai int8x16x2_t vuzpq_s8(int8x16_t __a, int8x16_t __b) {
  int8x16x2_t r; __builtin_neon_vuzpq_v(&r, __a, __b, 32); return r; }
__ai int16x8x2_t vuzpq_s16(int16x8_t __a, int16x8_t __b) {
  int16x8x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 33); return r; }
__ai int32x4x2_t vuzpq_s32(int32x4_t __a, int32x4_t __b) {
  int32x4x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 34); return r; }
__ai uint8x16x2_t vuzpq_u8(uint8x16_t __a, uint8x16_t __b) {
  uint8x16x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 48); return r; }
__ai uint16x8x2_t vuzpq_u16(uint16x8_t __a, uint16x8_t __b) {
  uint16x8x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 49); return r; }
__ai uint32x4x2_t vuzpq_u32(uint32x4_t __a, uint32x4_t __b) {
  uint32x4x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 50); return r; }
__ai float32x4x2_t vuzpq_f32(float32x4_t __a, float32x4_t __b) {
  float32x4x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 39); return r; }
__ai poly8x16x2_t vuzpq_p8(poly8x16_t __a, poly8x16_t __b) {
  poly8x16x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 36); return r; }
__ai poly16x8x2_t vuzpq_p16(poly16x8_t __a, poly16x8_t __b) {
  poly16x8x2_t r; __builtin_neon_vuzpq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 37); return r; }

__ai int8x8x2_t vzip_s8(int8x8_t __a, int8x8_t __b) {
  int8x8x2_t r; __builtin_neon_vzip_v(&r, __a, __b, 0); return r; }
__ai int16x4x2_t vzip_s16(int16x4_t __a, int16x4_t __b) {
  int16x4x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 1); return r; }
__ai int32x2x2_t vzip_s32(int32x2_t __a, int32x2_t __b) {
  int32x2x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 2); return r; }
__ai uint8x8x2_t vzip_u8(uint8x8_t __a, uint8x8_t __b) {
  uint8x8x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 16); return r; }
__ai uint16x4x2_t vzip_u16(uint16x4_t __a, uint16x4_t __b) {
  uint16x4x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 17); return r; }
__ai uint32x2x2_t vzip_u32(uint32x2_t __a, uint32x2_t __b) {
  uint32x2x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 18); return r; }
__ai float32x2x2_t vzip_f32(float32x2_t __a, float32x2_t __b) {
  float32x2x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 7); return r; }
__ai poly8x8x2_t vzip_p8(poly8x8_t __a, poly8x8_t __b) {
  poly8x8x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 4); return r; }
__ai poly16x4x2_t vzip_p16(poly16x4_t __a, poly16x4_t __b) {
  poly16x4x2_t r; __builtin_neon_vzip_v(&r, (int8x8_t)__a, (int8x8_t)__b, 5); return r; }
__ai int8x16x2_t vzipq_s8(int8x16_t __a, int8x16_t __b) {
  int8x16x2_t r; __builtin_neon_vzipq_v(&r, __a, __b, 32); return r; }
__ai int16x8x2_t vzipq_s16(int16x8_t __a, int16x8_t __b) {
  int16x8x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 33); return r; }
__ai int32x4x2_t vzipq_s32(int32x4_t __a, int32x4_t __b) {
  int32x4x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 34); return r; }
__ai uint8x16x2_t vzipq_u8(uint8x16_t __a, uint8x16_t __b) {
  uint8x16x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 48); return r; }
__ai uint16x8x2_t vzipq_u16(uint16x8_t __a, uint16x8_t __b) {
  uint16x8x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 49); return r; }
__ai uint32x4x2_t vzipq_u32(uint32x4_t __a, uint32x4_t __b) {
  uint32x4x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 50); return r; }
__ai float32x4x2_t vzipq_f32(float32x4_t __a, float32x4_t __b) {
  float32x4x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 39); return r; }
__ai poly8x16x2_t vzipq_p8(poly8x16_t __a, poly8x16_t __b) {
  poly8x16x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 36); return r; }
__ai poly16x8x2_t vzipq_p16(poly16x8_t __a, poly16x8_t __b) {
  poly16x8x2_t r; __builtin_neon_vzipq_v(&r, (int8x16_t)__a, (int8x16_t)__b, 37); return r; }

#ifdef __aarch64__
__ai int16x8_t vmovl_high_s8(int8x16_t __a) {
  int8x8_t __a1 = vget_high_s8(__a);
  return (int16x8_t)vshll_n_s8(__a1, 0); }
__ai int32x4_t vmovl_high_s16(int16x8_t __a) {
  int16x4_t __a1 = vget_high_s16(__a);
  return (int32x4_t)vshll_n_s16(__a1, 0); }
__ai int64x2_t vmovl_high_s32(int32x4_t __a) {
  int32x2_t __a1 = vget_high_s32(__a);
  return (int64x2_t)vshll_n_s32(__a1, 0); }
__ai uint16x8_t vmovl_high_u8(uint8x16_t __a) {
  uint8x8_t __a1 = vget_high_u8(__a);
  return (uint16x8_t)vshll_n_u8(__a1, 0); }
__ai uint32x4_t vmovl_high_u16(uint16x8_t __a) {
  uint16x4_t __a1 = vget_high_u16(__a);
  return (uint32x4_t)vshll_n_u16(__a1, 0); }
__ai uint64x2_t vmovl_high_u32(uint32x4_t __a) {
  uint32x2_t __a1 = vget_high_u32(__a);
  return (uint64x2_t)vshll_n_u32(__a1, 0); }

__ai int16x8_t vmull_high_s8(int8x16_t __a, int8x16_t __b) {
  return vmull_s8(vget_high_s8(__a), vget_high_s8(__b)); }
__ai int32x4_t vmull_high_s16(int16x8_t __a, int16x8_t __b) {
  return vmull_s16(vget_high_s16(__a), vget_high_s16(__b)); }
__ai int64x2_t vmull_high_s32(int32x4_t __a, int32x4_t __b) {
  return vmull_s32(vget_high_s32(__a), vget_high_s32(__b)); }
__ai uint16x8_t vmull_high_u8(uint8x16_t __a, uint8x16_t __b) {
  return vmull_u8(vget_high_u8(__a), vget_high_u8(__b)); }
__ai uint32x4_t vmull_high_u16(uint16x8_t __a, uint16x8_t __b) {
  return vmull_u16(vget_high_u16(__a), vget_high_u16(__b)); }
__ai uint64x2_t vmull_high_u32(uint32x4_t __a, uint32x4_t __b) {
  return vmull_u32(vget_high_u32(__a), vget_high_u32(__b)); }
__ai poly16x8_t vmull_high_p8(poly8x16_t __a, poly8x16_t __b) {
  return vmull_p8(vget_high_p8(__a), vget_high_p8(__b)); }

__ai int16x8_t vabdl_high_s8(int8x16_t __a, int8x16_t __b) {
  return vabdl_s8(vget_high_s8(__a), vget_high_s8(__b)); }
__ai int32x4_t vabdl_high_s16(int16x8_t __a, int16x8_t __b) {
  return vabdl_s16(vget_high_s16(__a), vget_high_s16(__b)); }
__ai int64x2_t vabdl_high_s32(int32x4_t __a, int32x4_t __b) {
  return vabdl_s32(vget_high_s32(__a), vget_high_s32(__b)); }
__ai uint16x8_t vabdl_high_u8(uint8x16_t __a, uint8x16_t __b) {
  return vabdl_u8(vget_high_u8(__a), vget_high_u8(__b)); }
__ai uint32x4_t vabdl_high_u16(uint16x8_t __a, uint16x8_t __b) {
  return vabdl_u16(vget_high_u16(__a), vget_high_u16(__b)); }
__ai uint64x2_t vabdl_high_u32(uint32x4_t __a, uint32x4_t __b) {
  return vabdl_u32(vget_high_u32(__a), vget_high_u32(__b)); }

__ai float64x2_t vabdq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vabdq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vaddq_f64(float64x2_t __a, float64x2_t __b) {
  return __a + __b; }

__ai int8x16_t vpaddq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vpaddq_v(__a, __b, 32); }
__ai int16x8_t vpaddq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vpaddq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vpaddq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vpaddq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vpaddq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai float32x4_t vpaddq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vpaddq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vpaddq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vbslq_f64(uint64x2_t __a, float64x2_t __b, float64x2_t __c) {
  return (float64x2_t)__builtin_neon_vbslq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 40); }

__ai uint64x2_t vceqq_s64(int64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)(__a == __b); }
__ai uint64x2_t vceqq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)(__a == __b); }
__ai uint64x2_t vceqq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)(__a == __b); }

__ai uint64x2_t vcgeq_s64(int64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)(__a >= __b); }
__ai uint64x2_t vcgeq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)(__a >= __b); }
__ai uint64x2_t vcgeq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)(__a >= __b); }

__ai uint64x2_t vcgtq_s64(int64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)(__a > __b); }
__ai uint64x2_t vcgtq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)(__a > __b); }
__ai uint64x2_t vcgtq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)(__a > __b); }

__ai uint64x2_t vcleq_s64(int64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)(__a <= __b); }
__ai uint64x2_t vcleq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)(__a <= __b); }
__ai uint64x2_t vcleq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)(__a <= __b); }

__ai uint64x2_t vcltq_s64(int64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)(__a < __b); }
__ai uint64x2_t vcltq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)(__a < __b); }
__ai uint64x2_t vcltq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)(__a < __b); }

__ai uint64x2_t vtstq_s64(int64x2_t __a, int64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 51); }
__ai uint64x2_t vtstq_u64(uint64x2_t __a, uint64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vtstq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

#define vcvtq_n_f64_s64(a, __b) __extension__ ({ \
  int64x2_t __a = (a); \
  (float32x4_t)__builtin_neon_vcvtq_n_f64_v((int8x16_t)__a, __b, 35); })
#define vcvtq_n_f64_u64(a, __b) __extension__ ({ \
  uint64x2_t __a = (a); \
  (float32x4_t)__builtin_neon_vcvtq_n_f64_v((int8x16_t)__a, __b, 51); })

__ai uint64x2_t vcageq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vcageq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

__ai uint64x2_t vcagtq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vcagtq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

__ai uint64x2_t vcaleq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vcaleq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

__ai uint64x2_t vcaltq_f64(float64x2_t __a, float64x2_t __b) {
  return (uint64x2_t)__builtin_neon_vcaltq_v((int8x16_t)__a, (int8x16_t)__b, 51); }

#define vcvtq_n_s64_f64(a, __b) __extension__ ({ \
  float64x2_t __a = (a); \
  (int64x2_t)__builtin_neon_vcvtq_n_s64_v((int8x16_t)__a, __b, 35); })

#define vcvtq_n_u64_f64(a, __b) __extension__ ({ \
  float64x2_t __a = (a); \
  (uint64x2_t)__builtin_neon_vcvtq_n_u64_v((int8x16_t)__a, __b, 51); })

__ai float32x2_t vdiv_f32(float32x2_t __a, float32x2_t __b) {
  return __a / __b; }
__ai float32x4_t vdivq_f32(float32x4_t __a, float32x4_t __b) {
  return __a / __b; }
__ai float64x2_t vdivq_f64(float64x2_t __a, float64x2_t __b) {
  return __a / __b; }

__ai float32x2_t vmaxnm_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vmaxnm_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vmaxnmq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vmaxnmq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vmaxnmq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vmaxnmq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float32x2_t vpmaxnm_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vpmaxnm_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vpmaxnmq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vpmaxnmq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vpmaxnmq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vpmaxnmq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float32x2_t vminnm_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vminnm_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vminnmq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vminnmq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vminnmq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vminnmq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float32x2_t vpminnm_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vpminnm_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vpminnmq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vpminnmq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vpminnmq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vpminnmq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vfmaq_f64(float64x2_t __a, float64x2_t __b, float64x2_t __c) {
  return (float64x2_t)__builtin_neon_vfmaq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 40); }

__ai float32x2_t vfms_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c) {
  return (float32x2_t)__builtin_neon_vfms_v((int8x8_t)__a, (int8x8_t)__b, (int8x8_t)__c, 7); }
__ai float32x4_t vfmsq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c) {
  return (float32x4_t)__builtin_neon_vfmsq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 39); }
__ai float64x2_t vfmsq_f64(float64x2_t __a, float64x2_t __b, float64x2_t __c) {
  return (float64x2_t)__builtin_neon_vfmsq_v((int8x16_t)__a, (int8x16_t)__b, (int8x16_t)__c, 40); }

__ai float64x2_t vrecpsq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vrecpsq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vrsqrtsq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vrsqrtsq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vmaxq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vmaxq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai int8x16_t vpmaxq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vpmaxq_v(__a, __b, 32); }
__ai int16x8_t vpmaxq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vpmaxq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vpmaxq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vpmaxq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vpmaxq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai float32x4_t vpmaxq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vpmaxq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vpmaxq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vminq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vminq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai int8x16_t vpminq_s8(int8x16_t __a, int8x16_t __b) {
  return (int8x16_t)__builtin_neon_vpminq_v(__a, __b, 32); }
__ai int16x8_t vpminq_s16(int16x8_t __a, int16x8_t __b) {
  return (int16x8_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 33); }
__ai int32x4_t vpminq_s32(int32x4_t __a, int32x4_t __b) {
  return (int32x4_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 34); }
__ai uint8x16_t vpminq_u8(uint8x16_t __a, uint8x16_t __b) {
  return (uint8x16_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 48); }
__ai uint16x8_t vpminq_u16(uint16x8_t __a, uint16x8_t __b) {
  return (uint16x8_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 49); }
__ai uint32x4_t vpminq_u32(uint32x4_t __a, uint32x4_t __b) {
  return (uint32x4_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 50); }
__ai float32x4_t vpminq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vpminq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vpminq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

__ai float64x2_t vmlaq_f64(float64x2_t __a, float64x2_t __b, float64x2_t __c) {
  return __a + (__b * __c); }

__ai float64x2_t vmlsq_f64(float64x2_t __a, float64x2_t __b, float64x2_t __c) {
  return __a - (__b * __c); }

__ai float64x2_t vmulq_f64(float64x2_t __a, float64x2_t __b) {
  return __a * __b; }

__ai float32x2_t vmulx_f32(float32x2_t __a, float32x2_t __b) {
  return (float32x2_t)__builtin_neon_vmulx_v((int8x8_t)__a, (int8x8_t)__b, 7); }
__ai float32x4_t vmulxq_f32(float32x4_t __a, float32x4_t __b) {
  return (float32x4_t)__builtin_neon_vmulxq_v((int8x16_t)__a, (int8x16_t)__b, 39); }
__ai float64x2_t vmulxq_f64(float64x2_t __a, float64x2_t __b) {
  return (float64x2_t)__builtin_neon_vmulxq_v((int8x16_t)__a, (int8x16_t)__b, 40); }

#define vqrshrn_high_n_s16(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int16x8_t __b = (b); \
  (int8x16_t)vcombine_s16(__a, vqrshrn_n_s16(__b, __c)); })
#define vqrshrn_high_n_s32(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int32x4_t __b = (b); \
  (int16x8_t)vcombine_s32(__a, vqrshrn_n_s32(__b, __c)); })
#define vqrshrn_high_n_s64(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int64x2_t __b = (b); \
  (int32x4_t)vcombine_s64(__a, vqrshrn_n_s64(__b, __c)); })
#define vqrshrn_high_n_u16(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint16x8_t __b = (b); \
  (uint8x16_t)vcombine_u16(__a, vqrshrn_n_u16(__b, __c)); })
#define vqrshrn_high_n_u32(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint32x4_t __b = (b); \
  (uint16x8_t)vcombine_u32(__a, vqrshrn_n_u32(__b, __c)); })
#define vqrshrn_high_n_u64(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint64x2_t __b = (b); \
  (uint32x4_t)vcombine_u64(__a, vqrshrn_n_u64(__b, __c)); })

#define vqrshrun_high_n_s16(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int16x8_t __b = (b); \
  (int8x16_t)vcombine_s16(__a, vqrshrun_n_s16(__b, __c)); })
#define vqrshrun_high_n_s32(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int32x4_t __b = (b); \
  (int16x8_t)vcombine_s32(__a, vqrshrun_n_s32(__b, __c)); })
#define vqrshrun_high_n_s64(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int64x2_t __b = (b); \
  (int32x4_t)vcombine_s64(__a, vqrshrun_n_s64(__b, __c)); })

#define vqshrn_high_n_s16(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int16x8_t __b = (b); \
  (int8x16_t)vcombine_s16(__a, vqshrn_n_s16(__b, __c)); })
#define vqshrn_high_n_s32(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int32x4_t __b = (b); \
  (int16x8_t)vcombine_s32(__a, vqshrn_n_s32(__b, __c)); })
#define vqshrn_high_n_s64(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int64x2_t __b = (b); \
  (int32x4_t)vcombine_s64(__a, vqshrn_n_s64(__b, __c)); })
#define vqshrn_high_n_u16(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint16x8_t __b = (b); \
  (uint8x16_t)vcombine_u16(__a, vqshrn_n_u16(__b, __c)); })
#define vqshrn_high_n_u32(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint32x4_t __b = (b); \
  (uint16x8_t)vcombine_u32(__a, vqshrn_n_u32(__b, __c)); })
#define vqshrn_high_n_u64(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint64x2_t __b = (b); \
  (uint32x4_t)vcombine_u64(__a, vqshrn_n_u64(__b, __c)); })

#define vqshrun_high_n_s16(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int16x8_t __b = (b); \
  (int8x16_t)vcombine_s16(__a, vqshrun_n_s16(__b, __c)); })
#define vqshrun_high_n_s32(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int32x4_t __b = (b); \
  (int16x8_t)vcombine_s32(__a, vqshrun_n_s32(__b, __c)); })
#define vqshrun_high_n_s64(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int64x2_t __b = (b); \
  (int32x4_t)vcombine_s64(__a, vqshrun_n_s64(__b, __c)); })

#define vrshrn_high_n_s16(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int16x8_t __b = (b); \
  (int8x16_t)vcombine_s16(__a, vrshrn_n_s16(__b, __c)); })
#define vrshrn_high_n_s32(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int32x4_t __b = (b); \
  (int16x8_t)vcombine_s32(__a, vrshrn_n_s32(__b, __c)); })
#define vrshrn_high_n_s64(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int64x2_t __b = (b); \
  (int32x4_t)vcombine_s64(__a, vrshrn_n_s64(__b, __c)); })
#define vrshrn_high_n_u16(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint16x8_t __b = (b); \
  (uint8x16_t)vcombine_u16(__a, vrshrn_n_u16(__b, __c)); })
#define vrshrn_high_n_u32(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint32x4_t __b = (b); \
  (uint16x8_t)vcombine_u32(__a, vrshrn_n_u32(__b, __c)); })
#define vrshrn_high_n_u64(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint64x2_t __b = (b); \
  (uint32x4_t)vcombine_u64(__a, vrshrn_n_u64(__b, __c)); })

__ai int64x1_t vaddd_s64(int64x1_t __a, int64x1_t __b) {
  return __a + __b; }
__ai uint64x1_t vaddd_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a + __b; }

__ai int64x1_t vsubd_s64(int64x1_t __a, int64x1_t __b) {
  return __a - __b; }
__ai uint64x1_t vsubd_u64(uint64x1_t __a, uint64x1_t __b) {
  return __a - __b; }

#define vshll_high_n_s8(a, __b) __extension__ ({ \
  int8x16_t __a = (a); \
  int8x8_t __a1 = vget_high_s8(__a); \
  (int16x8_t)vshll_n_s8(__a1, __b); })
#define vshll_high_n_s16(a, __b) __extension__ ({ \
  int16x8_t __a = (a); \
  int16x4_t __a1 = vget_high_s16(__a); \
  (int32x4_t)vshll_n_s16(__a1, __b); })
#define vshll_high_n_s32(a, __b) __extension__ ({ \
  int32x4_t __a = (a); \
  int32x2_t __a1 = vget_high_s32(__a); \
  (int64x2_t)vshll_n_s32(__a1, __b); })
#define vshll_high_n_u8(a, __b) __extension__ ({ \
  uint8x16_t __a = (a); \
  uint8x8_t __a1 = vget_high_u8(__a); \
  (uint16x8_t)vshll_n_u8(__a1, __b); })
#define vshll_high_n_u16(a, __b) __extension__ ({ \
  uint16x8_t __a = (a); \
  uint16x4_t __a1 = vget_high_u16(__a); \
  (uint32x4_t)vshll_n_u16(__a1, __b); })
#define vshll_high_n_u32(a, __b) __extension__ ({ \
  uint32x4_t __a = (a); \
  uint32x2_t __a1 = vget_high_u32(__a); \
  (uint64x2_t)vshll_n_u32(__a1, __b); })

#define vshrn_high_n_s16(a, b, __c) __extension__ ({ \
  int8x8_t __a = (a); int16x8_t __b = (b); \
  (int8x16_t)vcombine_s16(__a, vshrn_n_s16(__b, __c)); })
#define vshrn_high_n_s32(a, b, __c) __extension__ ({ \
  int16x4_t __a = (a); int32x4_t __b = (b); \
  (int16x8_t)vcombine_s32(__a, vshrn_n_s32(__b, __c)); })
#define vshrn_high_n_s64(a, b, __c) __extension__ ({ \
  int32x2_t __a = (a); int64x2_t __b = (b); \
  (int32x4_t)vcombine_s64(__a, vshrn_n_s64(__b, __c)); })
#define vshrn_high_n_u16(a, b, __c) __extension__ ({ \
  uint8x8_t __a = (a); uint16x8_t __b = (b); \
  (uint8x16_t)vcombine_u16(__a, vshrn_n_u16(__b, __c)); })
#define vshrn_high_n_u32(a, b, __c) __extension__ ({ \
  uint16x4_t __a = (a); uint32x4_t __b = (b); \
  (uint16x8_t)vcombine_u32(__a, vshrn_n_u32(__b, __c)); })
#define vshrn_high_n_u64(a, b, __c) __extension__ ({ \
  uint32x2_t __a = (a); uint64x2_t __b = (b); \
  (uint32x4_t)vcombine_u64(__a, vshrn_n_u64(__b, __c)); })

__ai float64x2_t vsubq_f64(float64x2_t __a, float64x2_t __b) {
  return __a - __b; }

__ai int16x8_t vabal_high_s8(int16x8_t __a, int8x16_t __b, int8x16_t __c) {
  return vabal_s8(__a, vget_high_s8(__b), vget_high_s8(__c)); }
__ai int32x4_t vabal_high_s16(int32x4_t __a, int16x8_t __b, int16x8_t __c) {
  return vabal_s16(__a, vget_high_s16(__b), vget_high_s16(__c)); }
__ai int64x2_t vabal_high_s32(int64x2_t __a, int32x4_t __b, int32x4_t __c) {
  return vabal_s32(__a, vget_high_s32(__b), vget_high_s32(__c)); }
__ai uint16x8_t vabal_high_u8(uint16x8_t __a, uint8x16_t __b, uint8x16_t __c) {
  return vabal_u8(__a, vget_high_u8(__b), vget_high_u8(__c)); }
__ai uint32x4_t vabal_high_u16(uint32x4_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vabal_u16(__a, vget_high_u16(__b), vget_high_u16(__c)); }
__ai uint64x2_t vabal_high_u32(uint64x2_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vabal_u32(__a, vget_high_u32(__b), vget_high_u32(__c)); }


__ai int8x16_t vaddhn_high_s16(int8x8_t __a, int16x8_t __b, int16x8_t __c) {
  return vcombine_s8(__a, vaddhn_s16(__b, __c)); }
__ai int16x8_t vaddhn_high_s32(int16x4_t __a, int32x4_t __b, int32x4_t __c) {
  return vcombine_s16(__a, vaddhn_s32(__b, __c)); }
__ai int32x4_t vaddhn_high_s64(int32x2_t __a, int64x2_t __b, int64x2_t __c) {
  return vcombine_s32(__a, vaddhn_s64(__b, __c)); }
__ai uint8x16_t vaddhn_high_u16(uint8x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vcombine_u8(__a, vaddhn_u16(__b, __c)); }
__ai uint16x8_t vaddhn_high_u32(uint16x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vcombine_u16(__a, vaddhn_u32(__b, __c)); }
__ai uint32x4_t vaddhn_high_u64(uint32x2_t __a, uint64x2_t __b, uint64x2_t __c) {
  return vcombine_u32(__a, vaddhn_u64(__b, __c)); }

__ai int16x8_t vaddl_high_s8(int8x16_t __a, int8x16_t __b) {
  return vmovl_high_s8(__a) + vmovl_high_s8(__b); }
__ai int32x4_t vaddl_high_s16(int16x8_t __a, int16x8_t __b) {
  return vmovl_high_s16(__a) + vmovl_high_s16(__b); }
__ai int64x2_t vaddl_high_s32(int32x4_t __a, int32x4_t __b) {
  return vmovl_high_s32(__a) + vmovl_high_s32(__b); }
__ai uint16x8_t vaddl_high_u8(uint8x16_t __a, uint8x16_t __b) {
  return vmovl_high_u8(__a) + vmovl_high_u8(__b); }
__ai uint32x4_t vaddl_high_u16(uint16x8_t __a, uint16x8_t __b) {
  return vmovl_high_u16(__a) + vmovl_high_u16(__b); }
__ai uint64x2_t vaddl_high_u32(uint32x4_t __a, uint32x4_t __b) {
  return vmovl_high_u32(__a) + vmovl_high_u32(__b); }

__ai int16x8_t vaddw_high_s8(int16x8_t __a, int8x16_t __b) {
  return __a + vmovl_high_s8(__b); }
__ai int32x4_t vaddw_high_s16(int32x4_t __a, int16x8_t __b) {
  return __a + vmovl_high_s16(__b); }
__ai int64x2_t vaddw_high_s32(int64x2_t __a, int32x4_t __b) {
  return __a + vmovl_high_s32(__b); }
__ai uint16x8_t vaddw_high_u8(uint16x8_t __a, uint8x16_t __b) {
  return __a + vmovl_high_u8(__b); }
__ai uint32x4_t vaddw_high_u16(uint32x4_t __a, uint16x8_t __b) {
  return __a + vmovl_high_u16(__b); }
__ai uint64x2_t vaddw_high_u32(uint64x2_t __a, uint32x4_t __b) {
  return __a + vmovl_high_u32(__b); }

__ai int16x8_t vmlal_high_s8(int16x8_t __a, int8x16_t __b, int8x16_t __c) {
  return vmlal_s8(__a, vget_high_s8(__b), vget_high_s8(__c)); }
__ai int32x4_t vmlal_high_s16(int32x4_t __a, int16x8_t __b, int16x8_t __c) {
  return vmlal_s16(__a, vget_high_s16(__b), vget_high_s16(__c)); }
__ai int64x2_t vmlal_high_s32(int64x2_t __a, int32x4_t __b, int32x4_t __c) {
  return vmlal_s32(__a, vget_high_s32(__b), vget_high_s32(__c)); }
__ai uint16x8_t vmlal_high_u8(uint16x8_t __a, uint8x16_t __b, uint8x16_t __c) {
  return vmlal_u8(__a, vget_high_u8(__b), vget_high_u8(__c)); }
__ai uint32x4_t vmlal_high_u16(uint32x4_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vmlal_u16(__a, vget_high_u16(__b), vget_high_u16(__c)); }
__ai uint64x2_t vmlal_high_u32(uint64x2_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vmlal_u32(__a, vget_high_u32(__b), vget_high_u32(__c)); }

__ai int16x8_t vmlsl_high_s8(int16x8_t __a, int8x16_t __b, int8x16_t __c) {
  return vmlsl_s8(__a, vget_high_s8(__b), vget_high_s8(__c)); }
__ai int32x4_t vmlsl_high_s16(int32x4_t __a, int16x8_t __b, int16x8_t __c) {
  return vmlsl_s16(__a, vget_high_s16(__b), vget_high_s16(__c)); }
__ai int64x2_t vmlsl_high_s32(int64x2_t __a, int32x4_t __b, int32x4_t __c) {
  return vmlsl_s32(__a, vget_high_s32(__b), vget_high_s32(__c)); }
__ai uint16x8_t vmlsl_high_u8(uint16x8_t __a, uint8x16_t __b, uint8x16_t __c) {
  return vmlsl_u8(__a, vget_high_u8(__b), vget_high_u8(__c)); }
__ai uint32x4_t vmlsl_high_u16(uint32x4_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vmlsl_u16(__a, vget_high_u16(__b), vget_high_u16(__c)); }
__ai uint64x2_t vmlsl_high_u32(uint64x2_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vmlsl_u32(__a, vget_high_u32(__b), vget_high_u32(__c)); }



__ai int32x4_t vqdmlal_high_s16(int32x4_t __a, int16x8_t __b, int16x8_t __c) {
  return vqdmlal_s16(__a, vget_high_s16(__b), vget_high_s16(__c)); }
__ai int64x2_t vqdmlal_high_s32(int64x2_t __a, int32x4_t __b, int32x4_t __c) {
  return vqdmlal_s32(__a, vget_high_s32(__b), vget_high_s32(__c)); }

__ai int32x4_t vqdmlsl_high_s16(int32x4_t __a, int16x8_t __b, int16x8_t __c) {
  return vqdmlsl_s16(__a, vget_high_s16(__b), vget_high_s16(__c)); }
__ai int64x2_t vqdmlsl_high_s32(int64x2_t __a, int32x4_t __b, int32x4_t __c) {
  return vqdmlsl_s32(__a, vget_high_s32(__b), vget_high_s32(__c)); }

__ai int32x4_t vqdmull_high_s16(int16x8_t __a, int16x8_t __b) {
  return vqdmull_s16(vget_high_s16(__a), vget_high_s16(__b)); }
__ai int64x2_t vqdmull_high_s32(int32x4_t __a, int32x4_t __b) {
  return vqdmull_s32(vget_high_s32(__a), vget_high_s32(__b)); }

__ai int8x16_t vraddhn_high_s16(int8x8_t __a, int16x8_t __b, int16x8_t __c) {
  return vcombine_s8(__a, vraddhn_s16(__b, __c)); }
__ai int16x8_t vraddhn_high_s32(int16x4_t __a, int32x4_t __b, int32x4_t __c) {
  return vcombine_s16(__a, vraddhn_s32(__b, __c)); }
__ai int32x4_t vraddhn_high_s64(int32x2_t __a, int64x2_t __b, int64x2_t __c) {
  return vcombine_s32(__a, vraddhn_s64(__b, __c)); }
__ai uint8x16_t vraddhn_high_u16(uint8x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vcombine_u8(__a, vraddhn_u16(__b, __c)); }
__ai uint16x8_t vraddhn_high_u32(uint16x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vcombine_u16(__a, vraddhn_u32(__b, __c)); }
__ai uint32x4_t vraddhn_high_u64(uint32x2_t __a, uint64x2_t __b, uint64x2_t __c) {
  return vcombine_u32(__a, vraddhn_u64(__b, __c)); }

__ai int8x16_t vrsubhn_high_s16(int8x8_t __a, int16x8_t __b, int16x8_t __c) {
  return vcombine_s8(__a, vrsubhn_s16(__b, __c)); }
__ai int16x8_t vrsubhn_high_s32(int16x4_t __a, int32x4_t __b, int32x4_t __c) {
  return vcombine_s16(__a, vrsubhn_s32(__b, __c)); }
__ai int32x4_t vrsubhn_high_s64(int32x2_t __a, int64x2_t __b, int64x2_t __c) {
  return vcombine_s32(__a, vrsubhn_s64(__b, __c)); }
__ai uint8x16_t vrsubhn_high_u16(uint8x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vcombine_u8(__a, vrsubhn_u16(__b, __c)); }
__ai uint16x8_t vrsubhn_high_u32(uint16x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vcombine_u16(__a, vrsubhn_u32(__b, __c)); }
__ai uint32x4_t vrsubhn_high_u64(uint32x2_t __a, uint64x2_t __b, uint64x2_t __c) {
  return vcombine_u32(__a, vrsubhn_u64(__b, __c)); }

__ai int8x16_t vsubhn_high_s16(int8x8_t __a, int16x8_t __b, int16x8_t __c) {
  return vcombine_s8(__a, vsubhn_s16(__b, __c)); }
__ai int16x8_t vsubhn_high_s32(int16x4_t __a, int32x4_t __b, int32x4_t __c) {
  return vcombine_s16(__a, vsubhn_s32(__b, __c)); }
__ai int32x4_t vsubhn_high_s64(int32x2_t __a, int64x2_t __b, int64x2_t __c) {
  return vcombine_s32(__a, vsubhn_s64(__b, __c)); }
__ai uint8x16_t vsubhn_high_u16(uint8x8_t __a, uint16x8_t __b, uint16x8_t __c) {
  return vcombine_u8(__a, vsubhn_u16(__b, __c)); }
__ai uint16x8_t vsubhn_high_u32(uint16x4_t __a, uint32x4_t __b, uint32x4_t __c) {
  return vcombine_u16(__a, vsubhn_u32(__b, __c)); }
__ai uint32x4_t vsubhn_high_u64(uint32x2_t __a, uint64x2_t __b, uint64x2_t __c) {
  return vcombine_u32(__a, vsubhn_u64(__b, __c)); }

__ai int16x8_t vsubl_high_s8(int8x16_t __a, int8x16_t __b) {
  return vmovl_high_s8(__a) - vmovl_high_s8(__b); }
__ai int32x4_t vsubl_high_s16(int16x8_t __a, int16x8_t __b) {
  return vmovl_high_s16(__a) - vmovl_high_s16(__b); }
__ai int64x2_t vsubl_high_s32(int32x4_t __a, int32x4_t __b) {
  return vmovl_high_s32(__a) - vmovl_high_s32(__b); }
__ai uint16x8_t vsubl_high_u8(uint8x16_t __a, uint8x16_t __b) {
  return vmovl_high_u8(__a) - vmovl_high_u8(__b); }
__ai uint32x4_t vsubl_high_u16(uint16x8_t __a, uint16x8_t __b) {
  return vmovl_high_u16(__a) - vmovl_high_u16(__b); }
__ai uint64x2_t vsubl_high_u32(uint32x4_t __a, uint32x4_t __b) {
  return vmovl_high_u32(__a) - vmovl_high_u32(__b); }

__ai int16x8_t vsubw_high_s8(int16x8_t __a, int8x16_t __b) {
  return __a - vmovl_high_s8(__b); }
__ai int32x4_t vsubw_high_s16(int32x4_t __a, int16x8_t __b) {
  return __a - vmovl_high_s16(__b); }
__ai int64x2_t vsubw_high_s32(int64x2_t __a, int32x4_t __b) {
  return __a - vmovl_high_s32(__b); }
__ai uint16x8_t vsubw_high_u8(uint16x8_t __a, uint8x16_t __b) {
  return __a - vmovl_high_u8(__b); }
__ai uint32x4_t vsubw_high_u16(uint32x4_t __a, uint16x8_t __b) {
  return __a - vmovl_high_u16(__b); }
__ai uint64x2_t vsubw_high_u32(uint64x2_t __a, uint32x4_t __b) {
  return __a - vmovl_high_u32(__b); }

#endif

#undef __ai

#endif /* __ARM_NEON_H */
