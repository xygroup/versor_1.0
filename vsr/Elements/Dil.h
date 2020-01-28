#ifndef DIL_H_INCLUDED
#define DIL_H_INCLUDED

#include "vsr_casts.h"

namespace vsr {

inline Dil gp(const Dil& a, const Sca& b) {
  return Dil(a[0] * b[0], a[1] * b[0]);
}

inline Ori gp(const Dil& a, const Ori& b) {
  return Ori(a[0] * b[0] - a[1] * b[0]);
}

inline Inf gp(const Dil& a, const Inf& b) {
  return Inf(a[0] * b[0] + a[1] * b[0]);
}

inline Dil gp(const Dil& a, const Mnk& b) {
  return Dil(a[1] * b[0], a[0] * b[0]);
}

inline Hyp gp(const Dil& a, const Hyp& b) {
  return Hyp(a[0] * b[0] - a[1] * b[0], a[0] * b[1] + a[1] * b[1]);
}

inline Ori_Drt gp(const Dil& a, const Pss& b) {
  return Ori_Drt(a[1] * b[0], a[0] * b[0]);
}

inline Hyp_Flp gp(const Dil& a, const Pnt& b) {
  return Hyp_Flp(a[0] * b[0], a[0] * b[1], a[0] * b[2],
                 a[0] * b[3] - a[1] * b[3], a[0] * b[4] + a[1] * b[4],
                 a[1] * b[0], a[1] * b[1], a[1] * b[2]);
}

inline Trt gp(const Dil& a, const Par& b) {
  return Trt(a[1] * b[9], a[0] * b[0], a[0] * b[1], a[0] * b[2],
             a[0] * b[3] - a[1] * b[3], a[0] * b[4] - a[1] * b[4],
             a[0] * b[5] - a[1] * b[5], a[0] * b[6] + a[1] * b[6],
             a[0] * b[7] + a[1] * b[7], a[0] * b[8] + a[1] * b[8], a[0] * b[9],
             a[1] * b[0], a[1] * b[1], a[1] * b[2]);
}

inline Flp_Afp gp(const Dil& a, const Cir& b) {
  return Flp_Afp(a[1] * b[6], a[1] * b[7], a[1] * b[8],
                 a[0] * b[0] - a[1] * b[0], a[0] * b[1] - a[1] * b[1],
                 a[0] * b[2] - a[1] * b[2], a[0] * b[3] + a[1] * b[3],
                 a[0] * b[4] + a[1] * b[4], a[0] * b[5] + a[1] * b[5],
                 a[0] * b[6], a[0] * b[7], a[0] * b[8], a[0] * b[9],
                 a[1] * b[9]);
}

inline Hyp_Dfp gp(const Dil& a, const Sph& b) {
  return Hyp_Dfp(a[1] * b[0], a[1] * b[1], a[1] * b[2], a[0] * b[0],
                 a[0] * b[1], a[0] * b[2], a[0] * b[3] - a[1] * b[3],
                 a[0] * b[4] + a[1] * b[4]);
}

inline Hyp_Lin gp(const Dil& a, const Sta& b) {
  return Hyp_Lin(a[0] * b[0], a[0] * b[1], a[0] * b[2],
                 a[0] * b[3] - a[1] * b[3], a[0] * b[4] - a[1] * b[4],
                 a[0] * b[5] - a[1] * b[5], a[0] * b[6] + a[1] * b[6],
                 a[0] * b[7] + a[1] * b[7], a[0] * b[8] + a[1] * b[8],
                 a[1] * b[0], a[1] * b[1], a[1] * b[2]);
}

inline Drv gp(const Dil& a, const Drv& b) {
  return Drv(a[0] * b[0] + a[1] * b[0], a[0] * b[1] + a[1] * b[1],
             a[0] * b[2] + a[1] * b[2]);
}

inline Drb gp(const Dil& a, const Drb& b) {
  return Drb(a[0] * b[0] + a[1] * b[0], a[0] * b[1] + a[1] * b[1],
             a[0] * b[2] + a[1] * b[2]);
}

inline Drt gp(const Dil& a, const Drt& b) {
  return Drt(a[0] * b[0] + a[1] * b[0]);
}

inline Tnv gp(const Dil& a, const Tnv& b) {
  return Tnv(a[0] * b[0] - a[1] * b[0], a[0] * b[1] - a[1] * b[1],
             a[0] * b[2] - a[1] * b[2]);
}

inline Tnb gp(const Dil& a, const Tnb& b) {
  return Tnb(a[0] * b[0] - a[1] * b[0], a[0] * b[1] - a[1] * b[1],
             a[0] * b[2] - a[1] * b[2]);
}

inline Tnt gp(const Dil& a, const Tnt& b) {
  return Tnt(a[0] * b[0] - a[1] * b[0]);
}

inline Inf_Sta gp(const Dil& a, const Lin& b) {
  return Inf_Sta(a[1] * b[3], a[1] * b[4], a[1] * b[5],
                 a[0] * b[0] + a[1] * b[0], a[0] * b[1] + a[1] * b[1],
                 a[0] * b[2] + a[1] * b[2], a[0] * b[3], a[0] * b[4],
                 a[0] * b[5]);
}

inline Inf_Afp gp(const Dil& a, const Pln& b) {
  return Inf_Afp(a[1] * b[0], a[1] * b[1], a[1] * b[2], a[0] * b[0],
                 a[0] * b[1], a[0] * b[2], a[0] * b[3] + a[1] * b[3]);
}

inline Tsd gp(const Dil& a, const Flp& b) {
  return Tsd(a[1] * b[3], a[0] * b[0] + a[1] * b[0], a[0] * b[1] + a[1] * b[1],
             a[0] * b[2] + a[1] * b[2], a[0] * b[3]);
}

inline Inf_Sph gp(const Dil& a, const Dfp& b) {
  return Inf_Sph(a[0] * b[0] + a[1] * b[0], a[0] * b[1] + a[1] * b[1],
                 a[0] * b[2] + a[1] * b[2], a[0] * b[3], a[1] * b[3]);
}

inline Inf_Dal gp(const Dil& a, const Dll& b) {
  return Inf_Dal(a[0] * b[0], a[0] * b[1], a[0] * b[2],
                 a[0] * b[3] + a[1] * b[3], a[0] * b[4] + a[1] * b[4],
                 a[0] * b[5] + a[1] * b[5], a[1] * b[0], a[1] * b[1],
                 a[1] * b[2]);
}

inline Inf_Dap gp(const Dil& a, const Dlp& b) {
  return Inf_Dap(a[0] * b[0], a[0] * b[1], a[0] * b[2],
                 a[0] * b[3] + a[1] * b[3], a[1] * b[0], a[1] * b[1],
                 a[1] * b[2]);
}

inline Ori_Drv gp(const Dil& a, const Vec& b) {
  return Ori_Drv(a[0] * b[0], a[0] * b[1], a[0] * b[2], a[1] * b[0],
                 a[1] * b[1], a[1] * b[2]);
}

inline Ori_Drb gp(const Dil& a, const Biv& b) {
  return Ori_Drb(a[0] * b[0], a[0] * b[1], a[0] * b[2], a[1] * b[0],
                 a[1] * b[1], a[1] * b[2]);
}

inline Ori_Drt gp(const Dil& a, const Tri& b) {
  return Ori_Drt(a[0] * b[0], a[1] * b[0]);
}

inline Ori_Flp gp(const Dil& a, const Aff& b) {
  return Ori_Flp(a[0] * b[0], a[0] * b[1], a[0] * b[2],
                 a[0] * b[3] - a[1] * b[3], a[1] * b[0], a[1] * b[1],
                 a[1] * b[2]);
}

inline Ori_Lin gp(const Dil& a, const Afl& b) {
  return Ori_Lin(a[0] * b[0], a[0] * b[1], a[0] * b[2],
                 a[0] * b[3] - a[1] * b[3], a[0] * b[4] - a[1] * b[4],
                 a[0] * b[5] - a[1] * b[5], a[1] * b[0], a[1] * b[1],
                 a[1] * b[2]);
}

inline Ori_Sph gp(const Dil& a, const Afp& b) {
  return Ori_Sph(a[0] * b[0] - a[1] * b[0], a[0] * b[1] - a[1] * b[1],
                 a[0] * b[2] - a[1] * b[2], a[0] * b[3], a[1] * b[3]);
}

inline Tvd gp(const Dil& a, const Dap& b) {
  return Tvd(a[1] * b[3], a[0] * b[0] - a[1] * b[0], a[0] * b[1] - a[1] * b[1],
             a[0] * b[2] - a[1] * b[2], a[0] * b[3]);
}

inline Ori_Dfp gp(const Dil& a, const Daf& b) {
  return Ori_Dfp(a[1] * b[0], a[1] * b[1], a[1] * b[2], a[0] * b[0],
                 a[0] * b[1], a[0] * b[2], a[0] * b[3] - a[1] * b[3]);
}

inline Ori_Sta gp(const Dil& a, const Dal& b) {
  return Ori_Sta(a[1] * b[3], a[1] * b[4], a[1] * b[5],
                 a[0] * b[0] - a[1] * b[0], a[0] * b[1] - a[1] * b[1],
                 a[0] * b[2] - a[1] * b[2], a[0] * b[3], a[0] * b[4],
                 a[0] * b[5]);
}

inline Ori_Drv gp(const Dil& a, const Mnv& b) {
  return Ori_Drv(a[1] * b[0], a[1] * b[1], a[1] * b[2], a[0] * b[0],
                 a[0] * b[1], a[0] * b[2]);
}

inline Rtd gp(const Dil& a, const Rot& b) {
  return Rtd(a[0] * b[0], a[0] * b[1], a[0] * b[2], a[0] * b[3], a[1] * b[0],
             a[1] * b[1], a[1] * b[2], a[1] * b[3]);
}

inline Mtd gp(const Dil& a, const Mot& b) {
  return Mtd(a[0] * b[0], a[0] * b[1], a[0] * b[2], a[0] * b[3],
             a[0] * b[4] + a[1] * b[4], a[0] * b[5] + a[1] * b[5],
             a[0] * b[6] + a[1] * b[6], a[1] * b[0], a[1] * b[1], a[1] * b[2],
             a[1] * b[3], a[0] * b[7] + a[1] * b[7]);
}

inline Dil gp(const Dil& a, const Dil& b) {
  return Dil(a[0] * b[0] + a[1] * b[1], a[0] * b[1] + a[1] * b[0]);
}

inline Tvd gp(const Dil& a, const Trv& b) {
  return Tvd(a[0] * b[0], a[0] * b[1] - a[1] * b[1], a[0] * b[2] - a[1] * b[2],
             a[0] * b[3] - a[1] * b[3], a[1] * b[0]);
}

inline Mtd gp(const Dil& a, const Mtd& b) {
  return Mtd(a[0] * b[0] + a[1] * b[7], a[0] * b[1] + a[1] * b[8],
             a[0] * b[2] + a[1] * b[9], a[0] * b[3] + a[1] * b[10],
             a[0] * b[4] + a[1] * b[4], a[0] * b[5] + a[1] * b[5],
             a[0] * b[6] + a[1] * b[6], a[0] * b[7] + a[1] * b[0],
             a[0] * b[8] + a[1] * b[1], a[0] * b[9] + a[1] * b[2],
             a[0] * b[10] + a[1] * b[3], a[0] * b[11] + a[1] * b[11]);
}

inline Tsd gp(const Dil& a, const Trs& b) {
  return Tsd(a[0] * b[0], a[0] * b[1] + a[1] * b[1], a[0] * b[2] + a[1] * b[2],
             a[0] * b[3] + a[1] * b[3], a[1] * b[0]);
}

inline Rtc gp(const Dil& a, const Rtc& b) {
  return Rtc(a[0] * b[0] + a[1] * b[11], a[0] * b[1] + a[1] * b[12],
             a[0] * b[2] + a[1] * b[13], a[0] * b[3] - a[1] * b[3],
             a[0] * b[4] + a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] - a[1] * b[7],
             a[0] * b[8] + a[1] * b[8], a[0] * b[9] + a[1] * b[9],
             a[0] * b[10] + a[1] * b[10], a[0] * b[11] + a[1] * b[0],
             a[0] * b[12] + a[1] * b[1], a[0] * b[13] + a[1] * b[2],
             a[0] * b[14] + a[1] * b[15], a[0] * b[15] + a[1] * b[14]);
}

inline Mtt gp(const Dil& a, const Mtt& b) {
  return Mtt(a[0] * b[0] + a[1] * b[10], a[0] * b[1] + a[1] * b[11],
             a[0] * b[2] + a[1] * b[12], a[0] * b[3] + a[1] * b[13],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] + a[1] * b[7],
             a[0] * b[8] + a[1] * b[8], a[0] * b[9] + a[1] * b[9],
             a[0] * b[10] + a[1] * b[0], a[0] * b[11] + a[1] * b[1],
             a[0] * b[12] + a[1] * b[2], a[0] * b[13] + a[1] * b[3],
             a[0] * b[14] - a[1] * b[14], a[0] * b[15] + a[1] * b[15]);
}

inline Rvd gp(const Dil& a, const Rtt& b) {
  return Rvd(a[0] * b[0], a[0] * b[1], a[0] * b[2], a[0] * b[3],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[1] * b[0], a[1] * b[1], a[1] * b[2],
             a[1] * b[3], a[0] * b[7] - a[1] * b[7]);
}

inline Rtd gp(const Dil& a, const Rtd& b) {
  return Rtd(a[0] * b[0] + a[1] * b[4], a[0] * b[1] + a[1] * b[5],
             a[0] * b[2] + a[1] * b[6], a[0] * b[3] + a[1] * b[7],
             a[0] * b[4] + a[1] * b[0], a[0] * b[5] + a[1] * b[1],
             a[0] * b[6] + a[1] * b[2], a[0] * b[7] + a[1] * b[3]);
}

inline Tvd gp(const Dil& a, const Tvd& b) {
  return Tvd(a[0] * b[0] + a[1] * b[4], a[0] * b[1] - a[1] * b[1],
             a[0] * b[2] - a[1] * b[2], a[0] * b[3] - a[1] * b[3],
             a[0] * b[4] + a[1] * b[0]);
}

inline Tsd gp(const Dil& a, const Tsd& b) {
  return Tsd(a[0] * b[0] + a[1] * b[4], a[0] * b[1] + a[1] * b[1],
             a[0] * b[2] + a[1] * b[2], a[0] * b[3] + a[1] * b[3],
             a[0] * b[4] + a[1] * b[0]);
}

inline Trt gp(const Dil& a, const Trt& b) {
  return Trt(a[0] * b[0] + a[1] * b[10], a[0] * b[1] + a[1] * b[11],
             a[0] * b[2] + a[1] * b[12], a[0] * b[3] + a[1] * b[13],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] + a[1] * b[7],
             a[0] * b[8] + a[1] * b[8], a[0] * b[9] + a[1] * b[9],
             a[0] * b[10] + a[1] * b[0], a[0] * b[11] + a[1] * b[1],
             a[0] * b[12] + a[1] * b[2], a[0] * b[13] + a[1] * b[3]);
}

inline Rvd gp(const Dil& a, const Rvd& b) {
  return Rvd(a[0] * b[0] + a[1] * b[7], a[0] * b[1] + a[1] * b[8],
             a[0] * b[2] + a[1] * b[9], a[0] * b[3] + a[1] * b[10],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] + a[1] * b[0],
             a[0] * b[8] + a[1] * b[1], a[0] * b[9] + a[1] * b[2],
             a[0] * b[10] + a[1] * b[3], a[0] * b[11] - a[1] * b[11]);
}

inline Tst gp(const Dil& a, const Tst& b) {
  return Tst(a[0] * b[0] + a[1] * b[10], a[0] * b[1] + a[1] * b[11],
             a[0] * b[2] + a[1] * b[12], a[0] * b[3] + a[1] * b[13],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] + a[1] * b[7],
             a[0] * b[8] + a[1] * b[8], a[0] * b[9] + a[1] * b[9],
             a[0] * b[10] + a[1] * b[0], a[0] * b[11] + a[1] * b[1],
             a[0] * b[12] + a[1] * b[2], a[0] * b[13] + a[1] * b[3],
             a[0] * b[14] - a[1] * b[14]);
}

inline Tvt gp(const Dil& a, const Tvt& b) {
  return Tvt(a[0] * b[0] + a[1] * b[10], a[0] * b[1] + a[1] * b[11],
             a[0] * b[2] + a[1] * b[12], a[0] * b[3] + a[1] * b[13],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] + a[1] * b[7],
             a[0] * b[8] + a[1] * b[8], a[0] * b[9] + a[1] * b[9],
             a[0] * b[10] + a[1] * b[0], a[0] * b[11] + a[1] * b[1],
             a[0] * b[12] + a[1] * b[2], a[0] * b[13] + a[1] * b[3],
             a[0] * b[14] + a[1] * b[14]);
}

inline Trt gp(const Dil& a, const Bst& b) {
  return Trt(a[0] * b[0] + a[1] * b[10], a[0] * b[1], a[0] * b[2], a[0] * b[3],
             a[0] * b[4] - a[1] * b[4], a[0] * b[5] - a[1] * b[5],
             a[0] * b[6] - a[1] * b[6], a[0] * b[7] + a[1] * b[7],
             a[0] * b[8] + a[1] * b[8], a[0] * b[9] + a[1] * b[9],
             a[0] * b[10] + a[1] * b[0], a[1] * b[1], a[1] * b[2], a[1] * b[3]);
}

inline Dil ip(const Dil& a, const Dil& b) {
  return Dil(a[0] * b[0] + a[1] * b[1], a[0] * b[1]);
}

template <>
inline Dil sp(const Dil& dil, const Rot& rot) {
  const Rot& t1 = rot;
  const Dil& t2 = dil;
  Rtd t3(t1[0] * t2[0], t1[1] * t2[0], t1[2] * t2[0], t1[3] * t2[0],
         t1[0] * t2[1], t1[1] * t2[1], t1[2] * t2[1], t1[3] * t2[1]);
  const Rot& t4 = rot;
  Rot t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
             t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Mot& mot) {
  const Mot& t1 = mot;
  const Dil& t2 = dil;
  Mtd t3(t1[0] * t2[0], t1[1] * t2[0], t1[2] * t2[0], t1[3] * t2[0],
         t1[4] * t2[0] - t1[4] * t2[1], t1[5] * t2[0] - t1[5] * t2[1],
         t1[6] * t2[0] - t1[6] * t2[1], t1[0] * t2[1], t1[1] * t2[1],
         t1[2] * t2[1], t1[3] * t2[1], t1[7] * t2[0] - t1[7] * t2[1]);
  const Mot& t4 = mot;
  Mot t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
             t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Trv& trv) {
  const Trv& t1 = trv;
  const Dil& t2 = dil;
  Tvd t3(t1[0] * t2[0], t1[1] * t2[0] + t1[1] * t2[1],
         t1[2] * t2[0] + t1[2] * t2[1], t1[3] * t2[0] + t1[3] * t2[1],
         t1[0] * t2[1]);
  const Trv& t4 = trv;
  Trv t5 = reverse(t4);
  return Dil(t3[0] * t5[0], t3[4] * t5[0]);
}

template <>
inline Dil sp(const Dil& dil, const Mtd& mtd) {
  const Mtd& t1 = mtd;
  const Dil& t2 = dil;
  Mtd t3(t1[0] * t2[0] + t1[7] * t2[1], t1[1] * t2[0] + t1[8] * t2[1],
         t1[2] * t2[0] + t1[9] * t2[1], t1[3] * t2[0] + t1[10] * t2[1],
         t1[4] * t2[0] - t1[4] * t2[1], t1[5] * t2[0] - t1[5] * t2[1],
         t1[6] * t2[0] - t1[6] * t2[1], t1[0] * t2[1] + t1[7] * t2[0],
         t1[1] * t2[1] + t1[8] * t2[0], t1[2] * t2[1] + t1[9] * t2[0],
         t1[3] * t2[1] + t1[10] * t2[0], t1[11] * t2[0] - t1[11] * t2[1]);
  const Mtd& t4 = mtd;
  Mtd t5 = reverse(t4);
  return Dil(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
          t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
      t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] +
          t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Trs& trs) {
  const Trs& t1 = trs;
  const Dil& t2 = dil;
  Tsd t3(t1[0] * t2[0], t1[1] * t2[0] - t1[1] * t2[1],
         t1[2] * t2[0] - t1[2] * t2[1], t1[3] * t2[0] - t1[3] * t2[1],
         t1[0] * t2[1]);
  const Trs& t4 = trs;
  Trs t5 = reverse(t4);
  return Dil(t3[0] * t5[0], t3[4] * t5[0]);
}

template <>
inline Dil sp(const Dil& dil, const Rtc& rtc) {
  const Rtc& t1 = rtc;
  const Dil& t2 = dil;
  Rtc t3(t1[0] * t2[0] + t1[11] * t2[1], t1[1] * t2[0] + t1[12] * t2[1],
         t1[2] * t2[0] + t1[13] * t2[1], t1[3] * t2[0] + t1[3] * t2[1],
         t1[4] * t2[0] - t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[7] * t2[0] + t1[7] * t2[1],
         t1[8] * t2[0] - t1[8] * t2[1], t1[9] * t2[0] - t1[9] * t2[1],
         t1[10] * t2[0] - t1[10] * t2[1], t1[0] * t2[1] + t1[11] * t2[0],
         t1[1] * t2[1] + t1[12] * t2[0], t1[2] * t2[1] + t1[13] * t2[0],
         t1[14] * t2[0] + t1[15] * t2[1], t1[14] * t2[1] + t1[15] * t2[0]);
  const Rtc& t4 = rtc;
  Rtc t5 = reverse(t4);
  return Dil(
      t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] -
          t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] +
          t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] +
          t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
      t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] -
          t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] +
          t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] +
          t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]);
}

template <>
inline Dil sp(const Dil& dil, const Mtt& mtt) {
  const Mtt& t1 = mtt;
  const Dil& t2 = dil;
  Mtt t3(t1[0] * t2[0] + t1[10] * t2[1], t1[1] * t2[0] + t1[11] * t2[1],
         t1[2] * t2[0] + t1[12] * t2[1], t1[3] * t2[0] + t1[13] * t2[1],
         t1[4] * t2[0] + t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[7] * t2[0] - t1[7] * t2[1],
         t1[8] * t2[0] - t1[8] * t2[1], t1[9] * t2[0] - t1[9] * t2[1],
         t1[0] * t2[1] + t1[10] * t2[0], t1[1] * t2[1] + t1[11] * t2[0],
         t1[2] * t2[1] + t1[12] * t2[0], t1[3] * t2[1] + t1[13] * t2[0],
         t1[14] * t2[0] + t1[14] * t2[1], t1[15] * t2[0] - t1[15] * t2[1]);
  const Mtt& t4 = mtt;
  Mtt t5 = reverse(t4);
  return Dil(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
          t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] +
          t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] -
          t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
      t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] -
          t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] +
          t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] -
          t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]);
}

template <>
inline Dil sp(const Dil& dil, const Rtt& rtt) {
  const Rtt& t1 = rtt;
  const Dil& t2 = dil;
  Rvd t3(t1[0] * t2[0], t1[1] * t2[0], t1[2] * t2[0], t1[3] * t2[0],
         t1[4] * t2[0] + t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[0] * t2[1], t1[1] * t2[1],
         t1[2] * t2[1], t1[3] * t2[1], t1[7] * t2[0] + t1[7] * t2[1]);
  const Rtt& t4 = rtt;
  Rtt t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
             t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Rtd& rtd) {
  const Rtd& t1 = rtd;
  const Dil& t2 = dil;
  Rtd t3(t1[0] * t2[0] + t1[4] * t2[1], t1[1] * t2[0] + t1[5] * t2[1],
         t1[2] * t2[0] + t1[6] * t2[1], t1[3] * t2[0] + t1[7] * t2[1],
         t1[0] * t2[1] + t1[4] * t2[0], t1[1] * t2[1] + t1[5] * t2[0],
         t1[2] * t2[1] + t1[6] * t2[0], t1[3] * t2[1] + t1[7] * t2[0]);
  const Rtd& t4 = rtd;
  Rtd t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
                 t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] - t3[7] * t5[7],
             t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] +
                 t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Tvd& tvd) {
  const Tvd& t1 = tvd;
  const Dil& t2 = dil;
  Tvd t3(t1[0] * t2[0] + t1[4] * t2[1], t1[1] * t2[0] + t1[1] * t2[1],
         t1[2] * t2[0] + t1[2] * t2[1], t1[3] * t2[0] + t1[3] * t2[1],
         t1[0] * t2[1] + t1[4] * t2[0]);
  const Tvd& t4 = tvd;
  Tvd t5 = reverse(t4);
  return Dil(t3[0] * t5[0] + t3[4] * t5[4], t3[0] * t5[4] + t3[4] * t5[0]);
}

template <>
inline Dil sp(const Dil& dil, const Tsd& tsd) {
  const Tsd& t1 = tsd;
  const Dil& t2 = dil;
  Tsd t3(t1[0] * t2[0] + t1[4] * t2[1], t1[1] * t2[0] - t1[1] * t2[1],
         t1[2] * t2[0] - t1[2] * t2[1], t1[3] * t2[0] - t1[3] * t2[1],
         t1[0] * t2[1] + t1[4] * t2[0]);
  const Tsd& t4 = tsd;
  Tsd t5 = reverse(t4);
  return Dil(t3[0] * t5[0] + t3[4] * t5[4], t3[0] * t5[4] + t3[4] * t5[0]);
}

template <>
inline Dil sp(const Dil& dil, const Trt& trt) {
  const Trt& t1 = trt;
  const Dil& t2 = dil;
  Trt t3(t1[0] * t2[0] + t1[10] * t2[1], t1[1] * t2[0] + t1[11] * t2[1],
         t1[2] * t2[0] + t1[12] * t2[1], t1[3] * t2[0] + t1[13] * t2[1],
         t1[4] * t2[0] + t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[7] * t2[0] - t1[7] * t2[1],
         t1[8] * t2[0] - t1[8] * t2[1], t1[9] * t2[0] - t1[9] * t2[1],
         t1[0] * t2[1] + t1[10] * t2[0], t1[1] * t2[1] + t1[11] * t2[0],
         t1[2] * t2[1] + t1[12] * t2[0], t1[3] * t2[1] + t1[13] * t2[0]);
  const Trt& t4 = trt;
  Trt t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
                 t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] -
                 t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
             t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] -
                 t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] -
                 t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Rvd& rvd) {
  const Rvd& t1 = rvd;
  const Dil& t2 = dil;
  Rvd t3(t1[0] * t2[0] + t1[7] * t2[1], t1[1] * t2[0] + t1[8] * t2[1],
         t1[2] * t2[0] + t1[9] * t2[1], t1[3] * t2[0] + t1[10] * t2[1],
         t1[4] * t2[0] + t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[0] * t2[1] + t1[7] * t2[0],
         t1[1] * t2[1] + t1[8] * t2[0], t1[2] * t2[1] + t1[9] * t2[0],
         t1[3] * t2[1] + t1[10] * t2[0], t1[11] * t2[0] + t1[11] * t2[1]);
  const Rvd& t4 = rvd;
  Rvd t5 = reverse(t4);
  return Dil(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
          t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
      t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] +
          t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Tst& tst) {
  const Tst& t1 = tst;
  const Dil& t2 = dil;
  Tst t3(t1[0] * t2[0] + t1[10] * t2[1], t1[1] * t2[0] + t1[11] * t2[1],
         t1[2] * t2[0] + t1[12] * t2[1], t1[3] * t2[0] + t1[13] * t2[1],
         t1[4] * t2[0] + t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[7] * t2[0] - t1[7] * t2[1],
         t1[8] * t2[0] - t1[8] * t2[1], t1[9] * t2[0] - t1[9] * t2[1],
         t1[0] * t2[1] + t1[10] * t2[0], t1[1] * t2[1] + t1[11] * t2[0],
         t1[2] * t2[1] + t1[12] * t2[0], t1[3] * t2[1] + t1[13] * t2[0],
         t1[14] * t2[0] + t1[14] * t2[1]);
  const Tst& t4 = tst;
  Tst t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
                 t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] -
                 t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
             t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] -
                 t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] -
                 t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Tvt& tvt) {
  const Tvt& t1 = tvt;
  const Dil& t2 = dil;
  Tvt t3(t1[0] * t2[0] + t1[10] * t2[1], t1[1] * t2[0] + t1[11] * t2[1],
         t1[2] * t2[0] + t1[12] * t2[1], t1[3] * t2[0] + t1[13] * t2[1],
         t1[4] * t2[0] + t1[4] * t2[1], t1[5] * t2[0] + t1[5] * t2[1],
         t1[6] * t2[0] + t1[6] * t2[1], t1[7] * t2[0] - t1[7] * t2[1],
         t1[8] * t2[0] - t1[8] * t2[1], t1[9] * t2[0] - t1[9] * t2[1],
         t1[0] * t2[1] + t1[10] * t2[0], t1[1] * t2[1] + t1[11] * t2[0],
         t1[2] * t2[1] + t1[12] * t2[0], t1[3] * t2[1] + t1[13] * t2[0],
         t1[14] * t2[0] - t1[14] * t2[1]);
  const Tvt& t4 = tvt;
  Tvt t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
                 t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] -
                 t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
             t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] -
                 t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] -
                 t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]);
}

template <>
inline Dil sp(const Dil& dil, const Bst& bst) {
  const Bst& t1 = bst;
  const Dil& t2 = dil;
  Trt t3(t1[0] * t2[0] + t1[10] * t2[1], t1[1] * t2[0], t1[2] * t2[0],
         t1[3] * t2[0], t1[4] * t2[0] + t1[4] * t2[1],
         t1[5] * t2[0] + t1[5] * t2[1], t1[6] * t2[0] + t1[6] * t2[1],
         t1[7] * t2[0] - t1[7] * t2[1], t1[8] * t2[0] - t1[8] * t2[1],
         t1[9] * t2[0] - t1[9] * t2[1], t1[0] * t2[1] + t1[10] * t2[0],
         t1[1] * t2[1], t1[2] * t2[1], t1[3] * t2[1]);
  const Bst& t4 = bst;
  Bst t5 = reverse(t4);
  return Dil(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] +
                 t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] +
                 t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
             t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] +
                 t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] +
                 t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] -
                 t3[13] * t5[3]);
}

template <>
inline Dil re(const Dil& dil, const Vec& vec) {
  const Vec& t1 = vec;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Ori_Drv t4(t1[0] * t3[0], t1[1] * t3[0], t1[2] * t3[0], t1[0] * t3[1],
             t1[1] * t3[1], t1[2] * t3[1]);
  const Vec& t5 = vec;
  Vec t6 = reverse(t5);
  return Dil(t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
             t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2]);
}

template <>
inline Dil re(const Dil& dil, const Dlp& dlp) {
  const Dlp& t1 = dlp;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Inf_Dap t4(t1[0] * t3[0], t1[1] * t3[0], t1[2] * t3[0],
             t1[3] * t3[0] - t1[3] * t3[1], t1[0] * t3[1], t1[1] * t3[1],
             t1[2] * t3[1]);
  const Dlp& t5 = dlp;
  Dlp t6 = reverse(t5);
  return Dil(t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
             t4[4] * t6[0] + t4[5] * t6[1] + t4[6] * t6[2]);
}

template <>
inline Dil re(const Dil& dil, const Pln& pln) {
  const Pln& t1 = pln;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Inf_Afp t4(t1[0] * t3[1], t1[1] * t3[1], t1[2] * t3[1], t1[0] * t3[0],
             t1[1] * t3[0], t1[2] * t3[0], t1[3] * t3[0] - t1[3] * t3[1]);
  const Pln& t5 = pln;
  Pln t6 = reverse(t5);
  return Dil(-t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
             -t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]);
}

template <>
inline Dil re(const Dil& dil, const Dll& dll) {
  const Dll& t1 = dll;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Inf_Dal t4(t1[0] * t3[0], t1[1] * t3[0], t1[2] * t3[0],
             t1[3] * t3[0] - t1[3] * t3[1], t1[4] * t3[0] - t1[4] * t3[1],
             t1[5] * t3[0] - t1[5] * t3[1], t1[0] * t3[1], t1[1] * t3[1],
             t1[2] * t3[1]);
  const Dll& t5 = dll;
  Dll t6 = reverse(t5);
  return Dil(-t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
             -t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2]);
}

template <>
inline Dil re(const Dil& dil, const Lin& lin) {
  const Lin& t1 = lin;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Inf_Sta t4(t1[3] * t3[1], t1[4] * t3[1], t1[5] * t3[1],
             t1[0] * t3[0] - t1[0] * t3[1], t1[1] * t3[0] - t1[1] * t3[1],
             t1[2] * t3[0] - t1[2] * t3[1], t1[3] * t3[0], t1[4] * t3[0],
             t1[5] * t3[0]);
  const Lin& t5 = lin;
  Lin t6 = reverse(t5);
  return Dil(t4[6] * t6[3] + t4[7] * t6[4] + t4[8] * t6[5],
             t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5]);
}

template <>
inline Dil re(const Dil& dil, const Pnt& pnt) {
  const Pnt& t1 = pnt;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Hyp_Flp t4(t1[0] * t3[0], t1[1] * t3[0], t1[2] * t3[0],
             t1[3] * t3[0] + t1[3] * t3[1], t1[4] * t3[0] - t1[4] * t3[1],
             t1[0] * t3[1], t1[1] * t3[1], t1[2] * t3[1]);
  const Pnt& t5 = pnt;
  Pnt t6 = reverse(t5);
  return Dil(t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] -
                 t4[4] * t6[3],
             t4[3] * t6[4] - t4[4] * t6[3] + t4[5] * t6[0] + t4[6] * t6[1] +
                 t4[7] * t6[2]);
}

template <>
inline Dil re(const Dil& dil, const Par& par) {
  const Par& t1 = par;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Trt t4(t1[9] * t3[1], t1[0] * t3[0], t1[1] * t3[0], t1[2] * t3[0],
         t1[3] * t3[0] + t1[3] * t3[1], t1[4] * t3[0] + t1[4] * t3[1],
         t1[5] * t3[0] + t1[5] * t3[1], t1[6] * t3[0] - t1[6] * t3[1],
         t1[7] * t3[0] - t1[7] * t3[1], t1[8] * t3[0] - t1[8] * t3[1],
         t1[9] * t3[0], t1[0] * t3[1], t1[1] * t3[1], t1[2] * t3[1]);
  const Par& t5 = par;
  Par t6 = reverse(t5);
  return Dil(-t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] +
                 t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] +
                 t4[9] * t6[5] + t4[10] * t6[9],
             t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] +
                 t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] -
                 t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]);
}

template <>
inline Dil re(const Dil& dil, const Cir& cir) {
  const Cir& t1 = cir;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Flp_Afp t4(t1[6] * t3[1], t1[7] * t3[1], t1[8] * t3[1],
             t1[0] * t3[0] + t1[0] * t3[1], t1[1] * t3[0] + t1[1] * t3[1],
             t1[2] * t3[0] + t1[2] * t3[1], t1[3] * t3[0] - t1[3] * t3[1],
             t1[4] * t3[0] - t1[4] * t3[1], t1[5] * t3[0] - t1[5] * t3[1],
             t1[6] * t3[0], t1[7] * t3[0], t1[8] * t3[0], t1[9] * t3[0],
             t1[9] * t3[1]);
  const Cir& t5 = cir;
  Cir t6 = reverse(t5);
  return Dil(t4[3] * t6[3] + t4[4] * t6[4] + t4[5] * t6[5] + t4[6] * t6[0] +
                 t4[7] * t6[1] + t4[8] * t6[2] + t4[9] * t6[6] +
                 t4[10] * t6[7] + t4[11] * t6[8] - t4[12] * t6[9],
             t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[3] * t6[3] -
                 t4[4] * t6[4] - t4[5] * t6[5] + t4[6] * t6[0] + t4[7] * t6[1] +
                 t4[8] * t6[2] - t4[13] * t6[9]);
}

template <>
inline Dil re(const Dil& dil, const Sph& sph) {
  const Sph& t1 = sph;
  const Dil& t2 = dil;
  Dil t3 = involute(t2);
  Hyp_Dfp t4(t1[0] * t3[1], t1[1] * t3[1], t1[2] * t3[1], t1[0] * t3[0],
             t1[1] * t3[0], t1[2] * t3[0], t1[3] * t3[0] + t1[3] * t3[1],
             t1[4] * t3[0] - t1[4] * t3[1]);
  const Sph& t5 = sph;
  Sph t6 = reverse(t5);
  return Dil(-t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2] - t4[6] * t6[4] -
                 t4[7] * t6[3],
             -t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[6] * t6[4] -
                 t4[7] * t6[3]);
}

}  // namespace vsr
#endif
