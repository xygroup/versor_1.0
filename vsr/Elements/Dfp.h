#ifndef DFP_H_INCLUDED
#define DFP_H_INCLUDED

#include "vsr_casts.h"

namespace vsr {

inline Dfp gp(const Dfp& a, const Sca& b) {
  return Dfp(a[0] * b[0], a[1] * b[0], a[2] * b[0], a[3] * b[0]);
}

inline Ori_Dfp gp(const Dfp& a, const Ori& b) {
  return Ori_Dfp(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], -a[0] * b[0],
                 -a[1] * b[0], -a[2] * b[0], a[3] * b[0]);
}

inline Drt gp(const Dfp& a, const Inf& b) { return Drt(a[3] * b[0]); }

inline Mnk_Dfp gp(const Dfp& a, const Mnk& b) {
  return Mnk_Dfp(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], a[3] * b[0]);
}

inline Hyp_Dfp gp(const Dfp& a, const Hyp& b) {
  return Hyp_Dfp(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], -a[0] * b[0],
                 -a[1] * b[0], -a[2] * b[0], a[3] * b[0], a[3] * b[1]);
}

inline Flp gp(const Dfp& a, const Pss& b) {
  return Flp(-a[2] * b[0], a[1] * b[0], -a[0] * b[0], -a[3] * b[0]);
}

inline Pnt_Dfp gp(const Dfp& a, const Pnt& b) {
  return Pnt_Dfp(-a[0] * b[3] + a[3] * b[2], -a[1] * b[3] - a[3] * b[1],
                 -a[2] * b[3] + a[3] * b[0], -a[0] * b[1] - a[1] * b[2],
                 a[0] * b[0] - a[2] * b[2], a[1] * b[0] + a[2] * b[1],
                 -a[0] * b[3], -a[1] * b[3], -a[2] * b[3], a[3] * b[3],
                 -a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[4]);
}

inline Par_Dfp gp(const Dfp& a, const Par& b) {
  return Par_Dfp(
      a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
      -a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
      -a[1] * b[3] - a[2] * b[4] - a[3] * b[0],
      -a[0] * b[0] - a[1] * b[1] - a[2] * b[2], a[3] * b[5], -a[3] * b[4],
      a[3] * b[3], -a[0] * b[9] - a[1] * b[2] + a[2] * b[1] + a[3] * b[8],
      a[0] * b[2] - a[1] * b[9] - a[2] * b[0] - a[3] * b[7],
      -a[0] * b[1] + a[1] * b[0] - a[2] * b[9] + a[3] * b[6],
      a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
      -a[1] * b[3] - a[2] * b[4], a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
      a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[9]);
}

inline Tvt gp(const Dfp& a, const Cir& b) {
  return Tvt(a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[9],
             a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
             a[0] * b[1] - a[1] * b[0], -a[3] * b[2], a[3] * b[1], -a[3] * b[0],
             a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[5],
             -a[0] * b[6] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4],
             a[0] * b[9] - a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
             a[1] * b[2] - a[2] * b[1] + a[3] * b[8],
             -a[0] * b[2] + a[2] * b[0] - a[3] * b[7],
             a[0] * b[1] - a[1] * b[0] + a[3] * b[6],
             a[0] * b[8] - a[1] * b[7] + a[2] * b[6]);
}

inline Pnt_Flp gp(const Dfp& a, const Sph& b) {
  return Pnt_Flp(-a[2] * b[3], a[1] * b[3], -a[0] * b[3], -a[3] * b[3],
                 a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], -a[2] * b[3] - a[3] * b[2],
                 a[1] * b[3] + a[3] * b[1], -a[0] * b[3] - a[3] * b[0]);
}

inline Par_Dfp gp(const Dfp& a, const Sta& b) {
  return Par_Dfp(
      a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
      -a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
      -a[1] * b[3] - a[2] * b[4] - a[3] * b[0],
      -a[0] * b[0] - a[1] * b[1] - a[2] * b[2], a[3] * b[5], -a[3] * b[4],
      a[3] * b[3], -a[1] * b[2] + a[2] * b[1] + a[3] * b[8],
      a[0] * b[2] - a[2] * b[0] - a[3] * b[7],
      -a[0] * b[1] + a[1] * b[0] + a[3] * b[6], a[0] * b[4] + a[1] * b[5],
      -a[0] * b[3] + a[2] * b[5], -a[1] * b[3] - a[2] * b[4],
      a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
      a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Drb gp(const Dfp& a, const Drv& b) {
  return Drb(a[3] * b[2], -a[3] * b[1], a[3] * b[0]);
}

inline Drv gp(const Dfp& a, const Drb& b) {
  return Drv(-a[3] * b[2], a[3] * b[1], -a[3] * b[0]);
}

inline Inf gp(const Dfp& a, const Drt& b) { return Inf(-a[3] * b[0]); }

inline Tnv_Dfp gp(const Dfp& a, const Tnv& b) {
  return Tnv_Dfp(a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1], a[3] * b[2], -a[3] * b[1],
                 a[3] * b[0], a[0] * b[1] + a[1] * b[2],
                 -a[0] * b[0] + a[2] * b[2], -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Tnv_Flp gp(const Dfp& a, const Tnb& b) {
  return Tnv_Flp(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], -a[3] * b[2], a[3] * b[1],
                 -a[3] * b[0], a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0]);
}

inline Ori_Flp gp(const Dfp& a, const Tnt& b) {
  return Ori_Flp(-a[2] * b[0], a[1] * b[0], -a[0] * b[0], -a[3] * b[0],
                 -a[2] * b[0], a[1] * b[0], -a[0] * b[0]);
}

inline Lin_Dfp gp(const Dfp& a, const Lin& b) {
  return Lin_Dfp(a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
                 -a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
                 -a[1] * b[3] - a[2] * b[4] - a[3] * b[0], a[3] * b[5],
                 -a[3] * b[4], a[3] * b[3],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Pln_Dfp gp(const Dfp& a, const Pln& b) {
  return Pln_Dfp(a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], -a[3] * b[2], a[3] * b[1],
                 -a[3] * b[0]);
}

inline Mnk_Dfp gp(const Dfp& a, const Flp& b) {
  return Mnk_Dfp(-a[0] * b[3] + a[3] * b[2], -a[1] * b[3] - a[3] * b[1],
                 -a[2] * b[3] + a[3] * b[0], a[3] * b[3]);
}

inline Trs gp(const Dfp& a, const Dfp& b) {
  return Trs(-a[3] * b[3], a[2] * b[3] - a[3] * b[2],
             -a[1] * b[3] + a[3] * b[1], a[0] * b[3] - a[3] * b[0]);
}

inline Lin_Flp gp(const Dfp& a, const Dll& b) {
  return Lin_Flp(-a[3] * b[2], a[3] * b[1], -a[3] * b[0],
                 -a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 -a[1] * b[2] + a[2] * b[1] + a[3] * b[5],
                 a[0] * b[2] - a[2] * b[0] - a[3] * b[4],
                 -a[0] * b[1] + a[1] * b[0] + a[3] * b[3]);
}

inline Pln_Flp gp(const Dfp& a, const Dlp& b) {
  return Pln_Flp(a[3] * b[2], -a[3] * b[1], a[3] * b[0],
                 -a[0] * b[1] - a[1] * b[2], a[0] * b[0] - a[2] * b[2],
                 a[1] * b[0] + a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]);
}

inline Pln_Flp gp(const Dfp& a, const Vec& b) {
  return Pln_Flp(a[3] * b[2], -a[3] * b[1], a[3] * b[0],
                 -a[0] * b[1] - a[1] * b[2], a[0] * b[0] - a[2] * b[2],
                 a[1] * b[0] + a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Lin_Flp gp(const Dfp& a, const Biv& b) {
  return Lin_Flp(-a[3] * b[2], a[3] * b[1], -a[3] * b[0],
                 -a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 -a[1] * b[2] + a[2] * b[1], a[0] * b[2] - a[2] * b[0],
                 -a[0] * b[1] + a[1] * b[0]);
}

inline Trs gp(const Dfp& a, const Tri& b) {
  return Trs(-a[3] * b[0], a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Pnt_Dfp gp(const Dfp& a, const Aff& b) {
  return Pnt_Dfp(-a[0] * b[3] + a[3] * b[2], -a[1] * b[3] - a[3] * b[1],
                 -a[2] * b[3] + a[3] * b[0], -a[0] * b[1] - a[1] * b[2],
                 a[0] * b[0] - a[2] * b[2], a[1] * b[0] + a[2] * b[1],
                 -a[0] * b[3], -a[1] * b[3], -a[2] * b[3], a[3] * b[3],
                 -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Par_Dfp gp(const Dfp& a, const Afl& b) {
  return Par_Dfp(a[0] * b[4] + a[1] * b[5] - a[3] * b[2],
                 -a[0] * b[3] + a[2] * b[5] + a[3] * b[1],
                 -a[1] * b[3] - a[2] * b[4] - a[3] * b[0],
                 -a[0] * b[0] - a[1] * b[1] - a[2] * b[2], a[3] * b[5],
                 -a[3] * b[4], a[3] * b[3], -a[1] * b[2] + a[2] * b[1],
                 a[0] * b[2] - a[2] * b[0], -a[0] * b[1] + a[1] * b[0],
                 a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
                 -a[1] * b[3] - a[2] * b[4],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Trt gp(const Dfp& a, const Afp& b) {
  return Trt(a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3],
             a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
             a[0] * b[1] - a[1] * b[0], -a[3] * b[2], a[3] * b[1], -a[3] * b[0],
             a[2] * b[3], -a[1] * b[3], a[0] * b[3],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0]);
}

inline Flp_Afp gp(const Dfp& a, const Dap& b) {
  return Flp_Afp(a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1], a[3] * b[2], -a[3] * b[1],
                 a[3] * b[0], -a[0] * b[3], -a[1] * b[3], -a[2] * b[3],
                 a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]);
}

inline Pnt_Flp gp(const Dfp& a, const Daf& b) {
  return Pnt_Flp(-a[2] * b[3], a[1] * b[3], -a[0] * b[3], -a[3] * b[3],
                 a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], -a[2] * b[3] - a[3] * b[2],
                 a[1] * b[3] + a[3] * b[1], -a[0] * b[3] - a[3] * b[0]);
}

inline Tvt gp(const Dfp& a, const Dal& b) {
  return Tvt(a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0],
             -a[3] * b[2], a[3] * b[1], -a[3] * b[0], a[0] * b[4] + a[1] * b[5],
             -a[0] * b[3] + a[2] * b[5], -a[1] * b[3] - a[2] * b[4],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
             a[1] * b[2] - a[2] * b[1] + a[3] * b[5],
             -a[0] * b[2] + a[2] * b[0] - a[3] * b[4],
             a[0] * b[1] - a[1] * b[0] + a[3] * b[3],
             a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Lin_Dfp gp(const Dfp& a, const Mnv& b) {
  return Lin_Dfp(a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1], a[3] * b[2], -a[3] * b[1],
                 a[3] * b[0], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Lin_Pln gp(const Dfp& a, const Rot& b) {
  return Lin_Pln(-a[3] * b[3], a[3] * b[2], -a[3] * b[1],
                 -a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
                 a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
                 a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] + a[2] * b[0], a[3] * b[0]);
}

inline Lin_Pln gp(const Dfp& a, const Mot& b) {
  return Lin_Pln(-a[3] * b[3], a[3] * b[2], -a[3] * b[1],
                 -a[0] * b[1] - a[1] * b[2] - a[2] * b[3] - a[3] * b[7],
                 a[0] * b[0] - a[1] * b[3] + a[2] * b[2] + a[3] * b[6],
                 a[0] * b[3] + a[1] * b[0] - a[2] * b[1] - a[3] * b[5],
                 -a[0] * b[2] + a[1] * b[1] + a[2] * b[0] + a[3] * b[4],
                 a[3] * b[0]);
}

inline Inf_Sph gp(const Dfp& a, const Dil& b) {
  return Inf_Sph(a[0] * b[0] - a[0] * b[1], a[1] * b[0] - a[1] * b[1],
                 a[2] * b[0] - a[2] * b[1], a[3] * b[0], a[3] * b[1]);
}

inline Flp_Afp gp(const Dfp& a, const Trv& b) {
  return Flp_Afp(a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2], a[3] * b[3], -a[3] * b[2],
                 a[3] * b[1], a[0] * b[0], a[1] * b[0], a[2] * b[0],
                 a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Par_Drb gp(const Dfp& a, const Mtd& b) {
  return Par_Drb(-a[3] * b[3], a[3] * b[2], -a[3] * b[1],
                 -a[0] * b[1] + a[0] * b[8] - a[1] * b[2] + a[1] * b[9] -
                     a[2] * b[3] + a[2] * b[10] - a[3] * b[11],
                 a[0] * b[0] - a[0] * b[7] - a[1] * b[3] + a[1] * b[10] +
                     a[2] * b[2] - a[2] * b[9] + a[3] * b[6],
                 a[0] * b[3] - a[0] * b[10] + a[1] * b[0] - a[1] * b[7] -
                     a[2] * b[1] + a[2] * b[8] - a[3] * b[5],
                 -a[0] * b[2] + a[0] * b[9] + a[1] * b[1] - a[1] * b[8] +
                     a[2] * b[0] - a[2] * b[7] + a[3] * b[4],
                 -a[3] * b[10], a[3] * b[9], -a[3] * b[8], a[3] * b[0],
                 a[3] * b[7]);
}

inline Dfp gp(const Dfp& a, const Trs& b) {
  return Dfp(a[0] * b[0] + a[3] * b[3], a[1] * b[0] - a[3] * b[2],
             a[2] * b[0] + a[3] * b[1], a[3] * b[0]);
}

inline Mtt gp(const Dfp& a, const Rtc& b) {
  return Mtt(a[0] * b[5] + a[1] * b[6] + a[2] * b[7] - a[3] * b[14],
             -a[0] * b[3] + a[1] * b[7] - a[2] * b[6] + a[3] * b[2],
             -a[0] * b[7] - a[1] * b[3] + a[2] * b[5] - a[3] * b[1],
             a[0] * b[6] - a[1] * b[5] - a[2] * b[3] + a[3] * b[0],
             -a[3] * b[7], a[3] * b[6], -a[3] * b[5],
             -a[0] * b[1] + a[0] * b[12] - a[1] * b[2] + a[1] * b[13] +
                 a[2] * b[14] - a[2] * b[15] - a[3] * b[10],
             a[0] * b[0] - a[0] * b[11] - a[1] * b[14] + a[1] * b[15] -
                 a[2] * b[2] + a[2] * b[13] + a[3] * b[9],
             a[0] * b[14] - a[0] * b[15] + a[1] * b[0] - a[1] * b[11] +
                 a[2] * b[1] - a[2] * b[12] - a[3] * b[8],
             a[0] * b[5] + a[1] * b[6] + a[2] * b[7] - a[3] * b[15],
             -a[0] * b[3] + a[1] * b[7] - a[2] * b[6] + a[3] * b[13],
             -a[0] * b[7] - a[1] * b[3] + a[2] * b[5] - a[3] * b[12],
             a[0] * b[6] - a[1] * b[5] - a[2] * b[3] + a[3] * b[11],
             a[3] * b[3],
             -a[0] * b[2] + a[0] * b[13] + a[1] * b[1] - a[1] * b[12] -
                 a[2] * b[0] + a[2] * b[11] + a[3] * b[4]);
}

inline Rtc gp(const Dfp& a, const Mtt& b) {
  return Rtc(a[0] * b[5] + a[1] * b[6] - a[2] * b[14] - a[3] * b[3],
             -a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[2],
             -a[0] * b[14] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
             -a[3] * b[14],
             -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                 a[2] * b[3] + a[2] * b[13] - a[3] * b[15],
             a[3] * b[6], -a[3] * b[5], a[3] * b[4],
             a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                 a[2] * b[2] - a[2] * b[12] + a[3] * b[9],
             a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                 a[2] * b[1] + a[2] * b[11] - a[3] * b[8],
             -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                 a[2] * b[0] - a[2] * b[10] + a[3] * b[7],
             a[0] * b[5] + a[1] * b[6] - a[2] * b[14] - a[3] * b[13],
             -a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[12],
             -a[0] * b[14] - a[1] * b[4] - a[2] * b[5] - a[3] * b[11],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10]);
}

inline Rtc gp(const Dfp& a, const Rtt& b) {
  return Rtc(a[0] * b[5] + a[1] * b[6] - a[2] * b[7] - a[3] * b[3],
             -a[0] * b[4] + a[1] * b[7] + a[2] * b[6] + a[3] * b[2],
             -a[0] * b[7] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
             -a[3] * b[7], -a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
             a[3] * b[6], -a[3] * b[5], a[3] * b[4],
             a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
             a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
             -a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
             a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
             -a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
             -a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Par_Drb gp(const Dfp& a, const Rtd& b) {
  return Par_Drb(-a[3] * b[3], a[3] * b[2], -a[3] * b[1],
                 -a[0] * b[1] + a[0] * b[5] - a[1] * b[2] + a[1] * b[6] -
                     a[2] * b[3] + a[2] * b[7],
                 a[0] * b[0] - a[0] * b[4] - a[1] * b[3] + a[1] * b[7] +
                     a[2] * b[2] - a[2] * b[6],
                 a[0] * b[3] - a[0] * b[7] + a[1] * b[0] - a[1] * b[4] -
                     a[2] * b[1] + a[2] * b[5],
                 -a[0] * b[2] + a[0] * b[6] + a[1] * b[1] - a[1] * b[5] +
                     a[2] * b[0] - a[2] * b[4],
                 -a[3] * b[7], a[3] * b[6], -a[3] * b[5], a[3] * b[0],
                 a[3] * b[4]);
}

inline Flp_Afp gp(const Dfp& a, const Tvd& b) {
  return Flp_Afp(a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2], a[3] * b[3], -a[3] * b[2],
                 a[3] * b[1], a[0] * b[0] - a[0] * b[4],
                 a[1] * b[0] - a[1] * b[4], a[2] * b[0] - a[2] * b[4],
                 a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[4]);
}

inline Inf_Sph gp(const Dfp& a, const Tsd& b) {
  return Inf_Sph(a[0] * b[0] - a[0] * b[4] + a[3] * b[3],
                 a[1] * b[0] - a[1] * b[4] - a[3] * b[2],
                 a[2] * b[0] - a[2] * b[4] + a[3] * b[1], a[3] * b[0],
                 a[3] * b[4]);
}

inline Par_Dfp gp(const Dfp& a, const Trt& b) {
  return Par_Dfp(a[0] * b[5] + a[1] * b[6] - a[3] * b[3],
                 -a[0] * b[4] + a[2] * b[6] + a[3] * b[2],
                 -a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
                 -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                     a[2] * b[3] + a[2] * b[13],
                 a[3] * b[6], -a[3] * b[5], a[3] * b[4],
                 a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                     a[2] * b[2] - a[2] * b[12] + a[3] * b[9],
                 a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                     a[2] * b[1] + a[2] * b[11] - a[3] * b[8],
                 -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                     a[2] * b[0] - a[2] * b[10] + a[3] * b[7],
                 a[0] * b[5] + a[1] * b[6] - a[3] * b[13],
                 -a[0] * b[4] + a[2] * b[6] + a[3] * b[12],
                 -a[1] * b[4] - a[2] * b[5] - a[3] * b[11],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10]);
}

inline Rtc gp(const Dfp& a, const Rvd& b) {
  return Rtc(a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[3] * b[3],
             -a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[2],
             -a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
             -a[3] * b[11],
             -a[0] * b[1] + a[0] * b[8] - a[1] * b[2] + a[1] * b[9] -
                 a[2] * b[3] + a[2] * b[10],
             a[3] * b[6], -a[3] * b[5], a[3] * b[4],
             a[0] * b[0] - a[0] * b[7] - a[1] * b[3] + a[1] * b[10] +
                 a[2] * b[2] - a[2] * b[9],
             a[0] * b[3] - a[0] * b[10] + a[1] * b[0] - a[1] * b[7] -
                 a[2] * b[1] + a[2] * b[8],
             -a[0] * b[2] + a[0] * b[9] + a[1] * b[1] - a[1] * b[8] +
                 a[2] * b[0] - a[2] * b[7],
             a[0] * b[5] + a[1] * b[6] - a[2] * b[11] - a[3] * b[10],
             -a[0] * b[4] + a[1] * b[11] + a[2] * b[6] + a[3] * b[9],
             -a[0] * b[11] - a[1] * b[4] - a[2] * b[5] - a[3] * b[8],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[7]);
}

inline Rtc gp(const Dfp& a, const Tst& b) {
  return Rtc(a[0] * b[5] + a[1] * b[6] - a[2] * b[14] - a[3] * b[3],
             -a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[2],
             -a[0] * b[14] - a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
             -a[3] * b[14],
             -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                 a[2] * b[3] + a[2] * b[13],
             a[3] * b[6], -a[3] * b[5], a[3] * b[4],
             a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                 a[2] * b[2] - a[2] * b[12] + a[3] * b[9],
             a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                 a[2] * b[1] + a[2] * b[11] - a[3] * b[8],
             -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                 a[2] * b[0] - a[2] * b[10] + a[3] * b[7],
             a[0] * b[5] + a[1] * b[6] - a[2] * b[14] - a[3] * b[13],
             -a[0] * b[4] + a[1] * b[14] + a[2] * b[6] + a[3] * b[12],
             -a[0] * b[14] - a[1] * b[4] - a[2] * b[5] - a[3] * b[11],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
             a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10]);
}

inline Par_Dfp gp(const Dfp& a, const Tvt& b) {
  return Par_Dfp(a[0] * b[5] + a[1] * b[6] - a[3] * b[3],
                 -a[0] * b[4] + a[2] * b[6] + a[3] * b[2],
                 -a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
                 -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                     a[2] * b[3] + a[2] * b[13] - a[3] * b[14],
                 a[3] * b[6], -a[3] * b[5], a[3] * b[4],
                 a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                     a[2] * b[2] - a[2] * b[12] + a[3] * b[9],
                 a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                     a[2] * b[1] + a[2] * b[11] - a[3] * b[8],
                 -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                     a[2] * b[0] - a[2] * b[10] + a[3] * b[7],
                 a[0] * b[5] + a[1] * b[6] - a[3] * b[13],
                 -a[0] * b[4] + a[2] * b[6] + a[3] * b[12],
                 -a[1] * b[4] - a[2] * b[5] - a[3] * b[11],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10]);
}

inline Par_Dfp gp(const Dfp& a, const Bst& b) {
  return Par_Dfp(
      a[0] * b[5] + a[1] * b[6] - a[3] * b[3],
      -a[0] * b[4] + a[2] * b[6] + a[3] * b[2],
      -a[1] * b[4] - a[2] * b[5] - a[3] * b[1],
      -a[0] * b[1] - a[1] * b[2] - a[2] * b[3], a[3] * b[6], -a[3] * b[5],
      a[3] * b[4],
      a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[2] * b[2] + a[3] * b[9],
      a[0] * b[3] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] - a[3] * b[8],
      -a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[2] * b[10] + a[3] * b[7],
      a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
      -a[1] * b[4] - a[2] * b[5],
      a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[0],
      a[0] * b[6] - a[1] * b[5] + a[2] * b[4] + a[3] * b[10]);
}

inline Dfp op(const Dfp& a, const Sca& b) {
  return Dfp(a[0] * b[0], a[1] * b[0], a[2] * b[0], a[3] * b[0]);
}

inline Daf op(const Dfp& a, const Ori& b) {
  return Daf(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], a[3] * b[0]);
}

inline Drt op(const Dfp& a, const Inf& b) { return Drt(a[3] * b[0]); }

inline Pss op(const Dfp& a, const Mnk& b) { return Pss(a[3] * b[0]); }

inline Sph op(const Dfp& a, const Hyp& b) {
  return Sph(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], a[3] * b[0],
             a[3] * b[1]);
}

inline Sca op(const Dfp& a, const Pss& b) { return Sca(); }

inline Sph op(const Dfp& a, const Pnt& b) {
  return Sph(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3], a[3] * b[3],
             -a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[4]);
}

inline Pss op(const Dfp& a, const Par& b) {
  return Pss(a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[3] * b[9]);
}

inline Sca op(const Dfp& a, const Cir& b) { return Sca(); }

inline Sca op(const Dfp& a, const Sph& b) { return Sca(); }

inline Pss op(const Dfp& a, const Sta& b) {
  return Pss(a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sca op(const Dfp& a, const Drv& b) { return Sca(); }

inline Sca op(const Dfp& a, const Drb& b) { return Sca(); }

inline Sca op(const Dfp& a, const Drt& b) { return Sca(); }

inline Pss op(const Dfp& a, const Tnv& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sca op(const Dfp& a, const Tnb& b) { return Sca(); }

inline Sca op(const Dfp& a, const Tnt& b) { return Sca(); }

inline Sca op(const Dfp& a, const Lin& b) { return Sca(); }

inline Sca op(const Dfp& a, const Pln& b) { return Sca(); }

inline Pss op(const Dfp& a, const Flp& b) { return Pss(a[3] * b[3]); }

inline Sca op(const Dfp& a, const Dfp& b) { return Sca(); }

inline Sca op(const Dfp& a, const Dll& b) { return Sca(); }

inline Drt op(const Dfp& a, const Dlp& b) {
  return Drt(-a[0] * b[2] + a[1] * b[1] - a[2] * b[0] + a[3] * b[3]);
}

inline Drt op(const Dfp& a, const Vec& b) {
  return Drt(-a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Sca op(const Dfp& a, const Biv& b) { return Sca(); }

inline Sca op(const Dfp& a, const Tri& b) { return Sca(); }

inline Sph op(const Dfp& a, const Aff& b) {
  return Sph(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3], a[3] * b[3],
             -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Pss op(const Dfp& a, const Afl& b) {
  return Pss(a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sca op(const Dfp& a, const Afp& b) { return Sca(); }

inline Pss op(const Dfp& a, const Dap& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[3] * b[3]);
}

inline Sca op(const Dfp& a, const Daf& b) { return Sca(); }

inline Sca op(const Dfp& a, const Dal& b) { return Sca(); }

inline Sca op(const Dfp& a, const Mnv& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Sca& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Ori& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Inf& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Mnk& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Hyp& b) { return Sca(); }

inline Flp ip(const Dfp& a, const Pss& b) {
  return Flp(-a[2] * b[0], a[1] * b[0], -a[0] * b[0], -a[3] * b[0]);
}

inline Sca ip(const Dfp& a, const Pnt& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Par& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Cir& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[9]);
}

inline Pnt ip(const Dfp& a, const Sph& b) {
  return Pnt(-a[2] * b[3], a[1] * b[3], -a[0] * b[3], -a[3] * b[3],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[4]);
}

inline Sca ip(const Dfp& a, const Sta& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Drv& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Drb& b) { return Sca(); }

inline Inf ip(const Dfp& a, const Drt& b) { return Inf(-a[3] * b[0]); }

inline Sca ip(const Dfp& a, const Tnv& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Tnb& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Aff ip(const Dfp& a, const Tnt& b) {
  return Aff(-a[2] * b[0], a[1] * b[0], -a[0] * b[0], -a[3] * b[0]);
}

inline Sca ip(const Dfp& a, const Lin& b) { return Sca(); }

inline Inf ip(const Dfp& a, const Pln& b) {
  return Inf(a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]);
}

inline Sca ip(const Dfp& a, const Flp& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Dfp& b) { return Sca(-a[3] * b[3]); }

inline Sca ip(const Dfp& a, const Dll& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Dlp& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Vec& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Biv& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Tri& b) { return Sca(-a[3] * b[0]); }

inline Sca ip(const Dfp& a, const Aff& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Afl& b) { return Sca(); }

inline Sca ip(const Dfp& a, const Afp& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[3]);
}

inline Sca ip(const Dfp& a, const Dap& b) { return Sca(); }

inline Pnt ip(const Dfp& a, const Daf& b) {
  return Pnt(-a[2] * b[3], a[1] * b[3], -a[0] * b[3], -a[3] * b[3],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Dfp& a, const Dal& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Dfp& a, const Mnv& b) { return Sca(); }

template <>
inline Dfp sp(const Dfp& dfp, const Rot& rot) {
  const Rot& t1 = rot;
  const Dfp& t2 = dfp;
  Lin_Pln t3(-t1[3] * t2[3], t1[2] * t2[3], -t1[1] * t2[3],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0], t1[0] * t2[3]);
  const Rot& t4 = rot;
  Rot t5 = reverse(t4);
  return Dfp(t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
             t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
             t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0],
             t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Mot& mot) {
  const Mot& t1 = mot;
  const Dfp& t2 = dfp;
  Lin_Pln t3(-t1[3] * t2[3], t1[2] * t2[3], -t1[1] * t2[3],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3],
             t1[0] * t2[3]);
  const Mot& t4 = mot;
  Mot t5 = reverse(t4);
  return Dfp(t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[1] +
                 t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2] + t3[7] * t5[6],
             t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] + t3[3] * t5[2] +
                 t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1] - t3[7] * t5[5],
             t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] -
                 t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0] + t3[7] * t5[4],
             t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[0]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Dil& dil) {
  const Dil& t1 = dil;
  const Dfp& t2 = dfp;
  Inf_Sph t3(t1[0] * t2[0] + t1[1] * t2[0], t1[0] * t2[1] + t1[1] * t2[1],
             t1[0] * t2[2] + t1[1] * t2[2], t1[0] * t2[3], t1[1] * t2[3]);
  const Dil& t4 = dil;
  Dil t5 = reverse(t4);
  return Dfp(t3[0] * t5[0] - t3[0] * t5[1], t3[1] * t5[0] - t3[1] * t5[1],
             t3[2] * t5[0] - t3[2] * t5[1], t3[3] * t5[0] + t3[4] * t5[1]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Trv& trv) {
  const Trv& t1 = trv;
  const Dfp& t2 = dfp;
  Flp_Afp t3(t1[2] * t2[0] + t1[3] * t2[1], -t1[1] * t2[0] + t1[3] * t2[2],
             -t1[1] * t2[1] - t1[2] * t2[2], -t1[3] * t2[3], t1[2] * t2[3],
             -t1[1] * t2[3], t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2],
             -t1[2] * t2[0] - t1[3] * t2[1], t1[1] * t2[0] - t1[3] * t2[2],
             t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Trv& t4 = trv;
  Trv t5 = reverse(t4);
  return Dfp(t3[6] * t5[0], t3[7] * t5[0], t3[8] * t5[0],
             t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[12] * t5[0]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Mtd& mtd) {
  const Mtd& t1 = mtd;
  const Dfp& t2 = dfp;
  Par_Drb t3(-t1[3] * t2[3], t1[2] * t2[3], -t1[1] * t2[3],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[8] * t2[0] -
                 t1[9] * t2[1] - t1[10] * t2[2] + t1[11] * t2[3],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[6] * t2[3] +
                 t1[7] * t2[0] - t1[9] * t2[2] + t1[10] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[5] * t2[3] +
                 t1[7] * t2[1] + t1[8] * t2[2] - t1[10] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] +
                 t1[7] * t2[2] - t1[8] * t2[1] + t1[9] * t2[0],
             -t1[10] * t2[3], t1[9] * t2[3], -t1[8] * t2[3], t1[0] * t2[3],
             t1[7] * t2[3]);
  const Mtd& t4 = mtd;
  Mtd t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[1] -
          t3[3] * t5[8] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[3] +
          t3[5] * t5[10] + t3[6] * t5[2] - t3[6] * t5[9] + t3[7] * t5[5] -
          t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[6],
      t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] + t3[3] * t5[2] -
          t3[3] * t5[9] + t3[4] * t5[3] - t3[4] * t5[10] + t3[5] * t5[0] -
          t3[5] * t5[7] - t3[6] * t5[1] + t3[6] * t5[8] + t3[7] * t5[6] -
          t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[5],
      t3[0] * t5[11] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[3] -
          t3[3] * t5[10] - t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[1] -
          t3[5] * t5[8] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[11] +
          t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[4],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[10] -
          t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[0] + t3[11] * t5[7]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Trs& trs) {
  const Trs& t1 = trs;
  const Dfp& t2 = dfp;
  Dfp t3(t1[0] * t2[0] - t1[3] * t2[3], t1[0] * t2[1] + t1[2] * t2[3],
         t1[0] * t2[2] - t1[1] * t2[3], t1[0] * t2[3]);
  const Trs& t4 = trs;
  Trs t5 = reverse(t4);
  return Dfp(t3[0] * t5[0] + t3[3] * t5[3], t3[1] * t5[0] - t3[3] * t5[2],
             t3[2] * t5[0] + t3[3] * t5[1], t3[3] * t5[0]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Rtc& rtc) {
  const Rtc& t1 = rtc;
  const Dfp& t2 = dfp;
  Mtt t3(t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2] - t1[14] * t2[3],
         t1[2] * t2[3] - t1[3] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
         -t1[1] * t2[3] - t1[3] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
         t1[0] * t2[3] - t1[3] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
         t1[7] * t2[3], -t1[6] * t2[3], t1[5] * t2[3],
         -t1[1] * t2[0] - t1[2] * t2[1] + t1[10] * t2[3] - t1[12] * t2[0] -
             t1[13] * t2[1] - t1[14] * t2[2] - t1[15] * t2[2],
         t1[0] * t2[0] - t1[2] * t2[2] - t1[9] * t2[3] + t1[11] * t2[0] -
             t1[13] * t2[2] + t1[14] * t2[1] + t1[15] * t2[1],
         t1[0] * t2[1] + t1[1] * t2[2] + t1[8] * t2[3] + t1[11] * t2[1] +
             t1[12] * t2[2] - t1[14] * t2[0] - t1[15] * t2[0],
         -t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2] - t1[15] * t2[3],
         t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1] + t1[13] * t2[3],
         t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0] - t1[12] * t2[3],
         t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[11] * t2[3],
         -t1[3] * t2[3],
         t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[4] * t2[3] +
             t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]);
  const Rtc& t4 = rtc;
  Rtc t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] + t3[3] * t5[9] -
          t3[7] * t5[1] + t3[7] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] -
          t3[9] * t5[14] + t3[9] * t5[15] + t3[10] * t5[8] + t3[11] * t5[4] -
          t3[12] * t5[10] + t3[13] * t5[9] - t3[15] * t5[2] + t3[15] * t5[13],
      t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[3] * t5[8] -
          t3[7] * t5[2] + t3[7] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] +
          t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[9] + t3[11] * t5[10] +
          t3[12] * t5[4] - t3[13] * t5[8] + t3[15] * t5[1] - t3[15] * t5[12],
      t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[4] -
          t3[7] * t5[14] + t3[7] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] +
          t3[9] * t5[1] - t3[9] * t5[12] + t3[10] * t5[10] - t3[11] * t5[9] +
          t3[12] * t5[8] + t3[13] * t5[4] - t3[15] * t5[0] + t3[15] * t5[11],
      t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] + t3[3] * t5[0] -
          t3[4] * t5[10] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[7] +
          t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[15] + t3[11] * t5[13] -
          t3[12] * t5[12] + t3[13] * t5[11] - t3[14] * t5[4] - t3[15] * t5[3]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Mtt& mtt) {
  const Mtt& t1 = mtt;
  const Dfp& t2 = dfp;
  Rtc t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[14] * t2[2],
         t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[14] * t2[1],
         -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[14] * t2[0],
         t1[14] * t2[3],
         -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
             t1[12] * t2[1] - t1[13] * t2[2] + t1[15] * t2[3],
         -t1[6] * t2[3], t1[5] * t2[3], -t1[4] * t2[3],
         t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[9] * t2[3] +
             t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
         t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[8] * t2[3] +
             t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
         t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[3] +
             t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
         -t1[5] * t2[0] - t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[2],
         t1[4] * t2[0] - t1[6] * t2[2] + t1[12] * t2[3] + t1[14] * t2[1],
         t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[3] - t1[14] * t2[0],
         t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
         t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[10] * t2[3]);
  const Mtt& t4 = mtt;
  Mtt t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[4] * t5[1] -
          t3[4] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] +
          t3[9] * t5[13] + t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] -
          t3[12] * t5[7] + t3[13] * t5[15] + t3[14] * t5[9] + t3[15] * t5[9],
      t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] + t3[4] * t5[2] -
          t3[4] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] -
          t3[9] * t5[10] - t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] -
          t3[12] * t5[15] - t3[13] * t5[7] - t3[14] * t5[8] - t3[15] * t5[8],
      t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] -
          t3[4] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] -
          t3[9] * t5[11] + t3[10] * t5[0] - t3[10] * t5[10] + t3[11] * t5[15] +
          t3[12] * t5[9] - t3[13] * t5[8] + t3[14] * t5[7] + t3[15] * t5[7],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[15] +
          t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] +
          t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] -
          t3[12] * t5[12] + t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Rtt& rtt) {
  const Rtt& t1 = rtt;
  const Dfp& t2 = dfp;
  Rtc t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
         t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
         -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
         t1[7] * t2[3], -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
         -t1[6] * t2[3], t1[5] * t2[3], -t1[4] * t2[3],
         t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
         t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
         t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
         -t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
         t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
         t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
         t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
         t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Rtt& t4 = rtt;
  Rtt t5 = reverse(t4);
  return Dfp(t3[4] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
             t3[4] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
             t3[4] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
             t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[7] +
                 t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] +
                 t3[14] * t5[0]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Rtd& rtd) {
  const Rtd& t1 = rtd;
  const Dfp& t2 = dfp;
  Par_Drb t3(-t1[3] * t2[3], t1[2] * t2[3], -t1[1] * t2[3],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[5] * t2[0] -
                 t1[6] * t2[1] - t1[7] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[0] -
                 t1[6] * t2[2] + t1[7] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[1] +
                 t1[5] * t2[2] - t1[7] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[2] -
                 t1[5] * t2[1] + t1[6] * t2[0],
             -t1[7] * t2[3], t1[6] * t2[3], -t1[5] * t2[3], t1[0] * t2[3],
             t1[4] * t2[3]);
  const Rtd& t4 = rtd;
  Rtd t5 = reverse(t4);
  return Dfp(t3[3] * t5[1] - t3[3] * t5[5] + t3[4] * t5[0] - t3[4] * t5[4] -
                 t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[2] - t3[6] * t5[6],
             t3[3] * t5[2] - t3[3] * t5[6] + t3[4] * t5[3] - t3[4] * t5[7] +
                 t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[1] + t3[6] * t5[5],
             t3[3] * t5[3] - t3[3] * t5[7] - t3[4] * t5[2] + t3[4] * t5[6] +
                 t3[5] * t5[1] - t3[5] * t5[5] + t3[6] * t5[0] - t3[6] * t5[4],
             t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[7] * t5[7] -
                 t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[0] +
                 t3[11] * t5[4]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Tvd& tvd) {
  const Tvd& t1 = tvd;
  const Dfp& t2 = dfp;
  Flp_Afp t3(t1[2] * t2[0] + t1[3] * t2[1], -t1[1] * t2[0] + t1[3] * t2[2],
             -t1[1] * t2[1] - t1[2] * t2[2], -t1[3] * t2[3], t1[2] * t2[3],
             -t1[1] * t2[3], t1[0] * t2[0] + t1[4] * t2[0],
             t1[0] * t2[1] + t1[4] * t2[1], t1[0] * t2[2] + t1[4] * t2[2],
             -t1[2] * t2[0] - t1[3] * t2[1], t1[1] * t2[0] - t1[3] * t2[2],
             t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[3]);
  const Tvd& t4 = tvd;
  Tvd t5 = reverse(t4);
  return Dfp(t3[6] * t5[0] - t3[6] * t5[4], t3[7] * t5[0] - t3[7] * t5[4],
             t3[8] * t5[0] - t3[8] * t5[4],
             t3[6] * t5[3] - t3[7] * t5[2] + t3[8] * t5[1] + t3[12] * t5[0] +
                 t3[13] * t5[4]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Tsd& tsd) {
  const Tsd& t1 = tsd;
  const Dfp& t2 = dfp;
  Inf_Sph t3(t1[0] * t2[0] - t1[3] * t2[3] + t1[4] * t2[0],
             t1[0] * t2[1] + t1[2] * t2[3] + t1[4] * t2[1],
             t1[0] * t2[2] - t1[1] * t2[3] + t1[4] * t2[2], t1[0] * t2[3],
             t1[4] * t2[3]);
  const Tsd& t4 = tsd;
  Tsd t5 = reverse(t4);
  return Dfp(t3[0] * t5[0] - t3[0] * t5[4] + t3[3] * t5[3] + t3[4] * t5[3],
             t3[1] * t5[0] - t3[1] * t5[4] - t3[3] * t5[2] - t3[4] * t5[2],
             t3[2] * t5[0] - t3[2] * t5[4] + t3[3] * t5[1] + t3[4] * t5[1],
             t3[3] * t5[0] + t3[4] * t5[4]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Trt& trt) {
  const Trt& t1 = trt;
  const Dfp& t2 = dfp;
  Par_Dfp t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1],
             t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2],
             -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
                 t1[12] * t2[1] - t1[13] * t2[2],
             -t1[6] * t2[3], t1[5] * t2[3], -t1[4] * t2[3],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[9] * t2[3] +
                 t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[8] * t2[3] +
                 t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[3] +
                 t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1] - t1[13] * t2[3],
             t1[4] * t2[0] - t1[6] * t2[2] + t1[12] * t2[3],
             t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[3],
             t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[10] * t2[3]);
  const Trt& t4 = trt;
  Trt t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[1] - t3[3] * t5[11] +
          t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[3] + t3[8] * t5[13] +
          t3[9] * t5[2] - t3[9] * t5[12] + t3[10] * t5[8] - t3[11] * t5[7] +
          t3[13] * t5[9] + t3[14] * t5[9],
      t3[0] * t5[9] - t3[2] * t5[7] + t3[3] * t5[2] - t3[3] * t5[12] +
          t3[7] * t5[3] - t3[7] * t5[13] + t3[8] * t5[0] - t3[8] * t5[10] -
          t3[9] * t5[1] + t3[9] * t5[11] + t3[10] * t5[9] - t3[12] * t5[7] -
          t3[13] * t5[8] - t3[14] * t5[8],
      t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] - t3[3] * t5[13] -
          t3[7] * t5[2] + t3[7] * t5[12] + t3[8] * t5[1] - t3[8] * t5[11] +
          t3[9] * t5[0] - t3[9] * t5[10] + t3[11] * t5[9] - t3[12] * t5[8] +
          t3[13] * t5[7] + t3[14] * t5[7],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] -
          t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] +
          t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] +
          t3[13] * t5[0] + t3[14] * t5[10]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Rvd& rvd) {
  const Rvd& t1 = rvd;
  const Dfp& t2 = dfp;
  Rtc t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
         t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
         -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
         t1[11] * t2[3],
         -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[8] * t2[0] -
             t1[9] * t2[1] - t1[10] * t2[2],
         -t1[6] * t2[3], t1[5] * t2[3], -t1[4] * t2[3],
         t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0] -
             t1[9] * t2[2] + t1[10] * t2[1],
         t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[1] +
             t1[8] * t2[2] - t1[10] * t2[0],
         t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[2] -
             t1[8] * t2[1] + t1[9] * t2[0],
         -t1[5] * t2[0] - t1[6] * t2[1] - t1[10] * t2[3] - t1[11] * t2[2],
         t1[4] * t2[0] - t1[6] * t2[2] + t1[9] * t2[3] + t1[11] * t2[1],
         t1[4] * t2[1] + t1[5] * t2[2] - t1[8] * t2[3] - t1[11] * t2[0],
         t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
         t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[7] * t2[3]);
  const Rvd& t4 = rvd;
  Rvd t5 = reverse(t4);
  return Dfp(
      t3[4] * t5[1] - t3[4] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] -
          t3[9] * t5[3] + t3[9] * t5[10] + t3[10] * t5[2] - t3[10] * t5[9],
      t3[4] * t5[2] - t3[4] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] +
          t3[9] * t5[0] - t3[9] * t5[7] - t3[10] * t5[1] + t3[10] * t5[8],
      t3[4] * t5[3] - t3[4] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] +
          t3[9] * t5[1] - t3[9] * t5[8] + t3[10] * t5[0] - t3[10] * t5[7],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[11] +
          t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[10] -
          t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[0] + t3[15] * t5[7]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Tst& tst) {
  const Tst& t1 = tst;
  const Dfp& t2 = dfp;
  Rtc t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1] + t1[14] * t2[2],
         t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2] - t1[14] * t2[1],
         -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2] + t1[14] * t2[0],
         t1[14] * t2[3],
         -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
             t1[12] * t2[1] - t1[13] * t2[2],
         -t1[6] * t2[3], t1[5] * t2[3], -t1[4] * t2[3],
         t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[9] * t2[3] +
             t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
         t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[8] * t2[3] +
             t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
         t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[3] +
             t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
         -t1[5] * t2[0] - t1[6] * t2[1] - t1[13] * t2[3] - t1[14] * t2[2],
         t1[4] * t2[0] - t1[6] * t2[2] + t1[12] * t2[3] + t1[14] * t2[1],
         t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[3] - t1[14] * t2[0],
         t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
         t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[10] * t2[3]);
  const Tst& t4 = tst;
  Tst t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[4] * t5[1] - t3[4] * t5[11] +
          t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] +
          t3[10] * t5[2] - t3[10] * t5[12] + t3[11] * t5[8] - t3[12] * t5[7] +
          t3[14] * t5[9] + t3[15] * t5[9],
      t3[0] * t5[9] - t3[2] * t5[7] + t3[4] * t5[2] - t3[4] * t5[12] +
          t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] -
          t3[10] * t5[1] + t3[10] * t5[11] + t3[11] * t5[9] - t3[13] * t5[7] -
          t3[14] * t5[8] - t3[15] * t5[8],
      t3[1] * t5[9] - t3[2] * t5[8] + t3[4] * t5[3] - t3[4] * t5[13] -
          t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] +
          t3[10] * t5[0] - t3[10] * t5[10] + t3[12] * t5[9] - t3[13] * t5[8] +
          t3[14] * t5[7] + t3[15] * t5[7],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[14] +
          t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[7] + t3[8] * t5[6] -
          t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[13] - t3[12] * t5[12] +
          t3[13] * t5[11] + t3[14] * t5[0] + t3[15] * t5[10]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Tvt& tvt) {
  const Tvt& t1 = tvt;
  const Dfp& t2 = dfp;
  Par_Dfp t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1],
             t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2],
             -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
                 t1[12] * t2[1] - t1[13] * t2[2] + t1[14] * t2[3],
             -t1[6] * t2[3], t1[5] * t2[3], -t1[4] * t2[3],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[9] * t2[3] +
                 t1[10] * t2[0] - t1[12] * t2[2] + t1[13] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[8] * t2[3] +
                 t1[10] * t2[1] + t1[11] * t2[2] - t1[13] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[3] +
                 t1[10] * t2[2] - t1[11] * t2[1] + t1[12] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1] - t1[13] * t2[3],
             t1[4] * t2[0] - t1[6] * t2[2] + t1[12] * t2[3],
             t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[3],
             t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[10] * t2[3]);
  const Tvt& t4 = tvt;
  Tvt t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[1] -
          t3[3] * t5[11] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[3] +
          t3[8] * t5[13] + t3[9] * t5[2] - t3[9] * t5[12] + t3[10] * t5[8] -
          t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[14] * t5[9],
      t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] + t3[3] * t5[2] -
          t3[3] * t5[12] + t3[7] * t5[3] - t3[7] * t5[13] + t3[8] * t5[0] -
          t3[8] * t5[10] - t3[9] * t5[1] + t3[9] * t5[11] + t3[10] * t5[9] -
          t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[8],
      t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] -
          t3[3] * t5[13] - t3[7] * t5[2] + t3[7] * t5[12] + t3[8] * t5[1] -
          t3[8] * t5[11] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[14] +
          t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[7],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] -
          t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] +
          t3[9] * t5[4] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] +
          t3[13] * t5[0] + t3[14] * t5[10]);
}

template <>
inline Dfp sp(const Dfp& dfp, const Bst& bst) {
  const Bst& t1 = bst;
  const Dfp& t2 = dfp;
  Par_Dfp t3(-t1[3] * t2[3] + t1[5] * t2[0] + t1[6] * t2[1],
             t1[2] * t2[3] - t1[4] * t2[0] + t1[6] * t2[2],
             -t1[1] * t2[3] - t1[4] * t2[1] - t1[5] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2], -t1[6] * t2[3],
             t1[5] * t2[3], -t1[4] * t2[3],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] - t1[9] * t2[3] +
                 t1[10] * t2[0],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[8] * t2[3] +
                 t1[10] * t2[1],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] - t1[7] * t2[3] +
                 t1[10] * t2[2],
             -t1[5] * t2[0] - t1[6] * t2[1], t1[4] * t2[0] - t1[6] * t2[2],
             t1[4] * t2[1] + t1[5] * t2[2],
             t1[0] * t2[3] - t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0] + t1[10] * t2[3]);
  const Bst& t4 = bst;
  Bst t5 = reverse(t4);
  return Dfp(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[1] + t3[7] * t5[0] -
          t3[7] * t5[10] - t3[8] * t5[3] + t3[9] * t5[2] + t3[10] * t5[8] -
          t3[11] * t5[7] + t3[13] * t5[9] + t3[14] * t5[9],
      t3[0] * t5[9] - t3[2] * t5[7] + t3[3] * t5[2] + t3[7] * t5[3] +
          t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[1] + t3[10] * t5[9] -
          t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[8],
      t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] - t3[7] * t5[2] +
          t3[8] * t5[1] + t3[9] * t5[0] - t3[9] * t5[10] + t3[11] * t5[9] -
          t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[7],
      t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[4] * t5[9] -
          t3[5] * t5[8] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[5] +
          t3[9] * t5[4] + t3[13] * t5[0] + t3[14] * t5[10]);
}

template <>
inline Dfp re(const Dfp& dfp, const Vec& vec) {
  const Vec& t1 = vec;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Pln_Flp t4(t1[2] * t3[3], -t1[1] * t3[3], t1[0] * t3[3],
             -t1[1] * t3[0] - t1[2] * t3[1], t1[0] * t3[0] - t1[2] * t3[2],
             t1[0] * t3[1] + t1[1] * t3[2],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Vec& t5 = vec;
  Vec t6 = reverse(t5);
  return Dfp(-t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
             -t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
             -t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0],
             t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]);
}

template <>
inline Dfp re(const Dfp& dfp, const Dlp& dlp) {
  const Dlp& t1 = dlp;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Pln_Flp t4(t1[2] * t3[3], -t1[1] * t3[3], t1[0] * t3[3],
             -t1[1] * t3[0] - t1[2] * t3[1], t1[0] * t3[0] - t1[2] * t3[2],
             t1[0] * t3[1] + t1[1] * t3[2],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[3]);
  const Dlp& t5 = dlp;
  Dlp t6 = reverse(t5);
  return Dfp(t4[0] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
             t4[1] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
             t4[2] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0],
             t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]);
}

template <>
inline Dfp re(const Dfp& dfp, const Pln& pln) {
  const Pln& t1 = pln;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Pln_Dfp t4(-t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[3],
             -t1[1] * t3[2] + t1[2] * t3[1], t1[0] * t3[2] - t1[2] * t3[0],
             -t1[0] * t3[1] + t1[1] * t3[0], -t1[2] * t3[3], t1[1] * t3[3],
             -t1[0] * t3[3]);
  const Pln& t5 = pln;
  Pln t6 = reverse(t5);
  return Dfp(-t4[0] * t6[0] + t4[2] * t6[2] - t4[3] * t6[1] + t4[6] * t6[3],
             -t4[0] * t6[1] - t4[1] * t6[2] + t4[3] * t6[0] - t4[5] * t6[3],
             -t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0] + t4[4] * t6[3],
             t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]);
}

template <>
inline Dfp re(const Dfp& dfp, const Dll& dll) {
  const Dll& t1 = dll;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Lin_Flp t4(-t1[2] * t3[3], t1[1] * t3[3], -t1[0] * t3[3],
             -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
             -t1[1] * t3[2] + t1[2] * t3[1] - t1[5] * t3[3],
             t1[0] * t3[2] - t1[2] * t3[0] + t1[4] * t3[3],
             -t1[0] * t3[1] + t1[1] * t3[0] - t1[3] * t3[3]);
  const Dll& t5 = dll;
  Dll t6 = reverse(t5);
  return Dfp(t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[0] - t4[5] * t6[2] +
                 t4[6] * t6[1],
             t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[1] + t4[4] * t6[2] -
                 t4[6] * t6[0],
             t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[2] - t4[4] * t6[1] +
                 t4[5] * t6[0],
             t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]);
}

template <>
inline Dfp re(const Dfp& dfp, const Lin& lin) {
  const Lin& t1 = lin;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Lin_Dfp t4(t1[2] * t3[3] - t1[4] * t3[0] - t1[5] * t3[1],
             -t1[1] * t3[3] + t1[3] * t3[0] - t1[5] * t3[2],
             t1[0] * t3[3] + t1[3] * t3[1] + t1[4] * t3[2], t1[5] * t3[3],
             -t1[4] * t3[3], t1[3] * t3[3],
             t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]);
  const Lin& t5 = lin;
  Lin t6 = reverse(t5);
  return Dfp(t4[0] * t6[4] - t4[1] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] +
                 t4[6] * t6[5],
             t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[2] - t4[5] * t6[0] -
                 t4[6] * t6[4],
             t4[1] * t6[5] - t4[2] * t6[4] - t4[3] * t6[1] + t4[4] * t6[0] +
                 t4[6] * t6[3],
             t4[3] * t6[5] - t4[4] * t6[4] + t4[5] * t6[3]);
}

template <>
inline Dfp re(const Dfp& dfp, const Pnt& pnt) {
  const Pnt& t1 = pnt;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Pnt_Dfp t4(t1[2] * t3[3] - t1[3] * t3[0], -t1[1] * t3[3] - t1[3] * t3[1],
             t1[0] * t3[3] - t1[3] * t3[2], -t1[1] * t3[0] - t1[2] * t3[1],
             t1[0] * t3[0] - t1[2] * t3[2], t1[0] * t3[1] + t1[1] * t3[2],
             t1[3] * t3[0], t1[3] * t3[1], t1[3] * t3[2], -t1[3] * t3[3],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0] - t1[4] * t3[3]);
  const Pnt& t5 = pnt;
  Pnt t6 = reverse(t5);
  return Dfp(t4[0] * t6[4] - t4[3] * t6[1] + t4[4] * t6[0] + t4[6] * t6[4] -
                 t4[10] * t6[2],
             t4[1] * t6[4] - t4[3] * t6[2] + t4[5] * t6[0] + t4[7] * t6[4] +
                 t4[10] * t6[1],
             t4[2] * t6[4] - t4[4] * t6[2] + t4[5] * t6[1] + t4[8] * t6[4] -
                 t4[10] * t6[0],
             t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[9] * t6[4] -
                 t4[10] * t6[3]);
}

template <>
inline Dfp re(const Dfp& dfp, const Par& par) {
  const Par& t1 = par;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Par_Dfp t4(-t1[2] * t3[3] + t1[4] * t3[0] + t1[5] * t3[1],
             t1[1] * t3[3] - t1[3] * t3[0] + t1[5] * t3[2],
             -t1[0] * t3[3] - t1[3] * t3[1] - t1[4] * t3[2],
             -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2], -t1[5] * t3[3],
             t1[4] * t3[3], -t1[3] * t3[3],
             -t1[1] * t3[2] + t1[2] * t3[1] - t1[8] * t3[3] + t1[9] * t3[0],
             t1[0] * t3[2] - t1[2] * t3[0] + t1[7] * t3[3] + t1[9] * t3[1],
             -t1[0] * t3[1] + t1[1] * t3[0] - t1[6] * t3[3] + t1[9] * t3[2],
             -t1[4] * t3[0] - t1[5] * t3[1], t1[3] * t3[0] - t1[5] * t3[2],
             t1[3] * t3[1] + t1[4] * t3[2],
             -t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
             t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0] + t1[9] * t3[3]);
  const Par& t5 = par;
  Par t6 = reverse(t5);
  return Dfp(t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[0] - t4[7] * t6[9] -
                 t4[8] * t6[2] + t4[9] * t6[1] + t4[10] * t6[7] -
                 t4[11] * t6[6] + t4[13] * t6[8] + t4[14] * t6[8],
             t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[1] + t4[7] * t6[2] -
                 t4[8] * t6[9] - t4[9] * t6[0] + t4[10] * t6[8] -
                 t4[12] * t6[6] - t4[13] * t6[7] - t4[14] * t6[7],
             t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[2] - t4[7] * t6[1] +
                 t4[8] * t6[0] - t4[9] * t6[9] + t4[11] * t6[8] -
                 t4[12] * t6[7] + t4[13] * t6[6] + t4[14] * t6[6],
             t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[4] * t6[8] -
                 t4[5] * t6[7] + t4[6] * t6[6] + t4[7] * t6[5] - t4[8] * t6[4] +
                 t4[9] * t6[3] + t4[14] * t6[9]);
}

template <>
inline Dfp re(const Dfp& dfp, const Cir& cir) {
  const Cir& t1 = cir;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Tvt t4(t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2] - t1[9] * t3[3],
         t1[1] * t3[2] - t1[2] * t3[1], -t1[0] * t3[2] + t1[2] * t3[0],
         t1[0] * t3[1] - t1[1] * t3[0], t1[2] * t3[3], -t1[1] * t3[3],
         t1[0] * t3[3],
         t1[5] * t3[3] - t1[7] * t3[0] - t1[8] * t3[1] - t1[9] * t3[2],
         -t1[4] * t3[3] + t1[6] * t3[0] - t1[8] * t3[2] + t1[9] * t3[1],
         t1[3] * t3[3] + t1[6] * t3[1] + t1[7] * t3[2] - t1[9] * t3[0],
         -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
         -t1[1] * t3[2] + t1[2] * t3[1] + t1[8] * t3[3],
         t1[0] * t3[2] - t1[2] * t3[0] - t1[7] * t3[3],
         -t1[0] * t3[1] + t1[1] * t3[0] + t1[6] * t3[3],
         t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]);
  const Cir& t5 = cir;
  Cir t6 = reverse(t5);
  return Dfp(t4[0] * t6[3] - t4[2] * t6[5] + t4[3] * t6[4] + t4[7] * t6[7] -
                 t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[3] -
                 t4[12] * t6[5] + t4[13] * t6[4] + t4[14] * t6[8],
             t4[0] * t6[4] + t4[1] * t6[5] - t4[3] * t6[3] + t4[7] * t6[8] +
                 t4[8] * t6[9] - t4[9] * t6[6] + t4[10] * t6[4] +
                 t4[11] * t6[5] - t4[13] * t6[3] - t4[14] * t6[7],
             t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[7] * t6[9] +
                 t4[8] * t6[8] - t4[9] * t6[7] + t4[10] * t6[5] -
                 t4[11] * t6[4] + t4[12] * t6[3] + t4[14] * t6[6],
             t4[0] * t6[9] - t4[4] * t6[5] + t4[5] * t6[4] - t4[6] * t6[3] -
                 t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] +
                 t4[11] * t6[8] - t4[12] * t6[7] + t4[13] * t6[6]);
}

template <>
inline Dfp re(const Dfp& dfp, const Sph& sph) {
  const Sph& t1 = sph;
  const Dfp& t2 = dfp;
  Dfp t3 = involute(t2);
  Pnt_Flp t4(t1[3] * t3[2], -t1[3] * t3[1], t1[3] * t3[0], t1[3] * t3[3],
             -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[4] * t3[3],
             -t1[1] * t3[2] + t1[2] * t3[1], t1[0] * t3[2] - t1[2] * t3[0],
             -t1[0] * t3[1] + t1[1] * t3[0], -t1[2] * t3[3] - t1[3] * t3[2],
             t1[1] * t3[3] + t1[3] * t3[1], -t1[0] * t3[3] - t1[3] * t3[0]);
  const Sph& t5 = sph;
  Sph t6 = reverse(t5);
  return Dfp(t4[2] * t6[4] - t4[4] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] +
                 t4[10] * t6[4],
             -t4[1] * t6[4] - t4[4] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] -
                 t4[9] * t6[4],
             t4[0] * t6[4] - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] +
                 t4[8] * t6[4],
             t4[3] * t6[4] + t4[4] * t6[3] + t4[8] * t6[2] - t4[9] * t6[1] +
                 t4[10] * t6[0]);
}

}  // namespace vsr
#endif
