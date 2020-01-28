#ifndef DRB_H_INCLUDED
#define DRB_H_INCLUDED

#include "vsr_casts.h"

namespace vsr {

inline Drb gp(const Drb& a, const Sca& b) {
  return Drb(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Ori_Drb gp(const Drb& a, const Ori& b) {
  return Ori_Drb(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], -a[0] * b[0],
                 -a[1] * b[0], -a[2] * b[0]);
}

inline Sca gp(const Drb& a, const Inf& b) { return Sca(); }

inline Drb gp(const Drb& a, const Mnk& b) {
  return Drb(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0]);
}

inline Ori_Drb gp(const Drb& a, const Hyp& b) {
  return Ori_Drb(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0], -a[0] * b[0],
                 -a[1] * b[0], -a[2] * b[0]);
}

inline Drv gp(const Drb& a, const Pss& b) {
  return Drv(-a[2] * b[0], a[1] * b[0], -a[0] * b[0]);
}

inline Inf_Cir gp(const Drb& a, const Pnt& b) {
  return Inf_Cir(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3],
                 -a[0] * b[1] - a[1] * b[2], a[0] * b[0] - a[2] * b[2],
                 a[1] * b[0] + a[2] * b[1], -a[0] * b[3], -a[1] * b[3],
                 -a[2] * b[3], -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Par_Drb gp(const Drb& a, const Par& b) {
  return Par_Drb(
      a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
      -a[1] * b[3] - a[2] * b[4], -a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
      -a[0] * b[9] - a[1] * b[2] + a[2] * b[1],
      a[0] * b[2] - a[1] * b[9] - a[2] * b[0],
      -a[0] * b[1] + a[1] * b[0] - a[2] * b[9], a[0] * b[4] + a[1] * b[5],
      -a[0] * b[3] + a[2] * b[5], -a[1] * b[3] - a[2] * b[4],
      a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
      a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Mtd gp(const Drb& a, const Cir& b) {
  return Mtd(a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0],
             a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
             -a[0] * b[6] - a[1] * b[9] + a[2] * b[8],
             a[0] * b[9] - a[1] * b[6] - a[2] * b[7],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0],
             a[0] * b[8] - a[1] * b[7] + a[2] * b[6]);
}

inline Inf_Par gp(const Drb& a, const Sph& b) {
  return Inf_Par(-a[2] * b[3], a[1] * b[3], -a[0] * b[3],
                 a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], -a[2] * b[3], a[1] * b[3],
                 -a[0] * b[3]);
}

inline Par_Drb gp(const Drb& a, const Sta& b) {
  return Par_Drb(a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
                 -a[1] * b[3] - a[2] * b[4],
                 -a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 -a[1] * b[2] + a[2] * b[1], a[0] * b[2] - a[2] * b[0],
                 -a[0] * b[1] + a[1] * b[0], a[0] * b[4] + a[1] * b[5],
                 -a[0] * b[3] + a[2] * b[5], -a[1] * b[3] - a[2] * b[4],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sca gp(const Drb& a, const Drv& b) { return Sca(); }

inline Sca gp(const Drb& a, const Drb& b) { return Sca(); }

inline Sca gp(const Drb& a, const Drt& b) { return Sca(); }

inline Drv_Tnb gp(const Drb& a, const Tnv& b) {
  return Drv_Tnb(a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1], a[0] * b[1] + a[1] * b[2],
                 -a[0] * b[0] + a[2] * b[2], -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Rtd gp(const Drb& a, const Tnb& b) {
  return Rtd(a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0]);
}

inline Ori_Drv gp(const Drb& a, const Tnt& b) {
  return Ori_Drv(-a[2] * b[0], a[1] * b[0], -a[0] * b[0], -a[2] * b[0],
                 a[1] * b[0], -a[0] * b[0]);
}

inline Drv_Pln gp(const Drb& a, const Lin& b) {
  return Drv_Pln(a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
                 -a[1] * b[3] - a[2] * b[4],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Drv_Lin gp(const Drb& a, const Pln& b) {
  return Drv_Lin(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0]);
}

inline Drb gp(const Drb& a, const Flp& b) {
  return Drb(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3]);
}

inline Drv gp(const Drb& a, const Dfp& b) {
  return Drv(a[2] * b[3], -a[1] * b[3], a[0] * b[3]);
}

inline Drv_Lin gp(const Drb& a, const Dll& b) {
  return Drv_Lin(-a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 -a[1] * b[2] + a[2] * b[1], a[0] * b[2] - a[2] * b[0],
                 -a[0] * b[1] + a[1] * b[0]);
}

inline Drv_Pln gp(const Drb& a, const Dlp& b) {
  return Drv_Pln(-a[0] * b[1] - a[1] * b[2], a[0] * b[0] - a[2] * b[2],
                 a[1] * b[0] + a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Drv_Pln gp(const Drb& a, const Vec& b) {
  return Drv_Pln(-a[0] * b[1] - a[1] * b[2], a[0] * b[0] - a[2] * b[2],
                 a[1] * b[0] + a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Drv_Lin gp(const Drb& a, const Biv& b) {
  return Drv_Lin(-a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 -a[1] * b[2] + a[2] * b[1], a[0] * b[2] - a[2] * b[0],
                 -a[0] * b[1] + a[1] * b[0]);
}

inline Drv gp(const Drb& a, const Tri& b) {
  return Drv(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Inf_Cir gp(const Drb& a, const Aff& b) {
  return Inf_Cir(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3],
                 -a[0] * b[1] - a[1] * b[2], a[0] * b[0] - a[2] * b[2],
                 a[1] * b[0] + a[2] * b[1], -a[0] * b[3], -a[1] * b[3],
                 -a[2] * b[3], -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Par_Drb gp(const Drb& a, const Afl& b) {
  return Par_Drb(a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
                 -a[1] * b[3] - a[2] * b[4],
                 -a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 -a[1] * b[2] + a[2] * b[1], a[0] * b[2] - a[2] * b[0],
                 -a[0] * b[1] + a[1] * b[0], a[0] * b[4] + a[1] * b[5],
                 -a[0] * b[3] + a[2] * b[5], -a[1] * b[3] - a[2] * b[4],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Drv_Dap gp(const Drb& a, const Afp& b) {
  return Drv_Dap(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], a[2] * b[3], -a[1] * b[3],
                 a[0] * b[3], a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0]);
}

inline Drv_Afp gp(const Drb& a, const Dap& b) {
  return Drv_Afp(a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1], -a[0] * b[3], -a[1] * b[3],
                 -a[2] * b[3], a[0] * b[1] + a[1] * b[2],
                 -a[0] * b[0] + a[2] * b[2], -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Inf_Par gp(const Drb& a, const Daf& b) {
  return Inf_Par(-a[2] * b[3], a[1] * b[3], -a[0] * b[3],
                 a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[1] * b[2] - a[2] * b[1], -a[0] * b[2] + a[2] * b[0],
                 a[0] * b[1] - a[1] * b[0], -a[2] * b[3], a[1] * b[3],
                 -a[0] * b[3]);
}

inline Mtd gp(const Drb& a, const Dal& b) {
  return Mtd(a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0],
             a[0] * b[4] + a[1] * b[5], -a[0] * b[3] + a[2] * b[5],
             -a[1] * b[3] - a[2] * b[4],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[1] * b[2] - a[2] * b[1],
             -a[0] * b[2] + a[2] * b[0], a[0] * b[1] - a[1] * b[0],
             a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Drv_Pln gp(const Drb& a, const Mnv& b) {
  return Drv_Pln(a[0] * b[1] + a[1] * b[2], -a[0] * b[0] + a[2] * b[2],
                 -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Drv_Lin gp(const Drb& a, const Rot& b) {
  return Drv_Lin(-a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
                 a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
                 a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] + a[2] * b[0]);
}

inline Drv_Lin gp(const Drb& a, const Mot& b) {
  return Drv_Lin(-a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
                 a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
                 a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] + a[2] * b[0]);
}

inline Drb gp(const Drb& a, const Dil& b) {
  return Drb(a[0] * b[0] - a[0] * b[1], a[1] * b[0] - a[1] * b[1],
             a[2] * b[0] - a[2] * b[1]);
}

inline Drv_Afp gp(const Drb& a, const Trv& b) {
  return Drv_Afp(a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2], a[0] * b[0], a[1] * b[0],
                 a[2] * b[0], a[0] * b[2] + a[1] * b[3],
                 -a[0] * b[1] + a[2] * b[3], -a[1] * b[1] - a[2] * b[2],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Drv_Lin gp(const Drb& a, const Mtd& b) {
  return Drv_Lin(-a[0] * b[1] + a[0] * b[8] - a[1] * b[2] + a[1] * b[9] -
                     a[2] * b[3] + a[2] * b[10],
                 a[0] * b[0] - a[0] * b[7] - a[1] * b[3] + a[1] * b[10] +
                     a[2] * b[2] - a[2] * b[9],
                 a[0] * b[3] - a[0] * b[10] + a[1] * b[0] - a[1] * b[7] -
                     a[2] * b[1] + a[2] * b[8],
                 -a[0] * b[2] + a[0] * b[9] + a[1] * b[1] - a[1] * b[8] +
                     a[2] * b[0] - a[2] * b[7]);
}

inline Drb gp(const Drb& a, const Trs& b) {
  return Drb(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Mtd gp(const Drb& a, const Rtc& b) {
  return Mtd(a[0] * b[5] + a[1] * b[6] + a[2] * b[7],
             -a[0] * b[3] + a[1] * b[7] - a[2] * b[6],
             -a[0] * b[7] - a[1] * b[3] + a[2] * b[5],
             a[0] * b[6] - a[1] * b[5] - a[2] * b[3],
             -a[0] * b[1] + a[0] * b[12] - a[1] * b[2] + a[1] * b[13] +
                 a[2] * b[14] - a[2] * b[15],
             a[0] * b[0] - a[0] * b[11] - a[1] * b[14] + a[1] * b[15] -
                 a[2] * b[2] + a[2] * b[13],
             a[0] * b[14] - a[0] * b[15] + a[1] * b[0] - a[1] * b[11] +
                 a[2] * b[1] - a[2] * b[12],
             a[0] * b[5] + a[1] * b[6] + a[2] * b[7],
             -a[0] * b[3] + a[1] * b[7] - a[2] * b[6],
             -a[0] * b[7] - a[1] * b[3] + a[2] * b[5],
             a[0] * b[6] - a[1] * b[5] - a[2] * b[3],
             -a[0] * b[2] + a[0] * b[13] + a[1] * b[1] - a[1] * b[12] -
                 a[2] * b[0] + a[2] * b[11]);
}

inline Par_Drb gp(const Drb& a, const Mtt& b) {
  return Par_Drb(a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
                 -a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
                 -a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
                 -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                     a[2] * b[3] + a[2] * b[13],
                 a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                     a[2] * b[2] - a[2] * b[12],
                 a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                     a[2] * b[1] + a[2] * b[11],
                 -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                     a[2] * b[0] - a[2] * b[10],
                 a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
                 -a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
                 -a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Par_Drb gp(const Drb& a, const Rtt& b) {
  return Par_Drb(a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
                 -a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
                 -a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
                 -a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
                 a[0] * b[0] - a[1] * b[3] + a[2] * b[2],
                 a[0] * b[3] + a[1] * b[0] - a[2] * b[1],
                 -a[0] * b[2] + a[1] * b[1] + a[2] * b[0],
                 a[0] * b[5] + a[1] * b[6] - a[2] * b[7],
                 -a[0] * b[4] + a[1] * b[7] + a[2] * b[6],
                 -a[0] * b[7] - a[1] * b[4] - a[2] * b[5],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Drv_Lin gp(const Drb& a, const Rtd& b) {
  return Drv_Lin(-a[0] * b[1] + a[0] * b[5] - a[1] * b[2] + a[1] * b[6] -
                     a[2] * b[3] + a[2] * b[7],
                 a[0] * b[0] - a[0] * b[4] - a[1] * b[3] + a[1] * b[7] +
                     a[2] * b[2] - a[2] * b[6],
                 a[0] * b[3] - a[0] * b[7] + a[1] * b[0] - a[1] * b[4] -
                     a[2] * b[1] + a[2] * b[5],
                 -a[0] * b[2] + a[0] * b[6] + a[1] * b[1] - a[1] * b[5] +
                     a[2] * b[0] - a[2] * b[4]);
}

inline Drv_Afp gp(const Drb& a, const Tvd& b) {
  return Drv_Afp(a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2], a[0] * b[0] - a[0] * b[4],
                 a[1] * b[0] - a[1] * b[4], a[2] * b[0] - a[2] * b[4],
                 a[0] * b[2] + a[1] * b[3], -a[0] * b[1] + a[2] * b[3],
                 -a[1] * b[1] - a[2] * b[2],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Drb gp(const Drb& a, const Tsd& b) {
  return Drb(a[0] * b[0] - a[0] * b[4], a[1] * b[0] - a[1] * b[4],
             a[2] * b[0] - a[2] * b[4]);
}

inline Par_Drb gp(const Drb& a, const Trt& b) {
  return Par_Drb(a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
                 -a[1] * b[4] - a[2] * b[5],
                 -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                     a[2] * b[3] + a[2] * b[13],
                 a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                     a[2] * b[2] - a[2] * b[12],
                 a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                     a[2] * b[1] + a[2] * b[11],
                 -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                     a[2] * b[0] - a[2] * b[10],
                 a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
                 -a[1] * b[4] - a[2] * b[5],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Par_Drb gp(const Drb& a, const Rvd& b) {
  return Par_Drb(a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
                 -a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
                 -a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
                 -a[0] * b[1] + a[0] * b[8] - a[1] * b[2] + a[1] * b[9] -
                     a[2] * b[3] + a[2] * b[10],
                 a[0] * b[0] - a[0] * b[7] - a[1] * b[3] + a[1] * b[10] +
                     a[2] * b[2] - a[2] * b[9],
                 a[0] * b[3] - a[0] * b[10] + a[1] * b[0] - a[1] * b[7] -
                     a[2] * b[1] + a[2] * b[8],
                 -a[0] * b[2] + a[0] * b[9] + a[1] * b[1] - a[1] * b[8] +
                     a[2] * b[0] - a[2] * b[7],
                 a[0] * b[5] + a[1] * b[6] - a[2] * b[11],
                 -a[0] * b[4] + a[1] * b[11] + a[2] * b[6],
                 -a[0] * b[11] - a[1] * b[4] - a[2] * b[5],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Par_Drb gp(const Drb& a, const Tst& b) {
  return Par_Drb(a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
                 -a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
                 -a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
                 -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                     a[2] * b[3] + a[2] * b[13],
                 a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                     a[2] * b[2] - a[2] * b[12],
                 a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                     a[2] * b[1] + a[2] * b[11],
                 -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                     a[2] * b[0] - a[2] * b[10],
                 a[0] * b[5] + a[1] * b[6] - a[2] * b[14],
                 -a[0] * b[4] + a[1] * b[14] + a[2] * b[6],
                 -a[0] * b[14] - a[1] * b[4] - a[2] * b[5],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Par_Drb gp(const Drb& a, const Tvt& b) {
  return Par_Drb(a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
                 -a[1] * b[4] - a[2] * b[5],
                 -a[0] * b[1] + a[0] * b[11] - a[1] * b[2] + a[1] * b[12] -
                     a[2] * b[3] + a[2] * b[13],
                 a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[1] * b[13] +
                     a[2] * b[2] - a[2] * b[12],
                 a[0] * b[3] - a[0] * b[13] + a[1] * b[0] - a[1] * b[10] -
                     a[2] * b[1] + a[2] * b[11],
                 -a[0] * b[2] + a[0] * b[12] + a[1] * b[1] - a[1] * b[11] +
                     a[2] * b[0] - a[2] * b[10],
                 a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
                 -a[1] * b[4] - a[2] * b[5],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
                 a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Par_Drb gp(const Drb& a, const Bst& b) {
  return Par_Drb(
      a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
      -a[1] * b[4] - a[2] * b[5], -a[0] * b[1] - a[1] * b[2] - a[2] * b[3],
      a[0] * b[0] - a[0] * b[10] - a[1] * b[3] + a[2] * b[2],
      a[0] * b[3] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1],
      -a[0] * b[2] + a[1] * b[1] + a[2] * b[0] - a[2] * b[10],
      a[0] * b[5] + a[1] * b[6], -a[0] * b[4] + a[2] * b[6],
      -a[1] * b[4] - a[2] * b[5], a[0] * b[6] - a[1] * b[5] + a[2] * b[4],
      a[0] * b[6] - a[1] * b[5] + a[2] * b[4]);
}

inline Drb op(const Drb& a, const Sca& b) {
  return Drb(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Mnk_Biv op(const Drb& a, const Ori& b) {
  return Mnk_Biv(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0]);
}

inline Sca op(const Drb& a, const Inf& b) { return Sca(); }

inline Sca op(const Drb& a, const Mnk& b) { return Sca(); }

inline Mnk_Biv op(const Drb& a, const Hyp& b) {
  return Mnk_Biv(-a[0] * b[0], -a[1] * b[0], -a[2] * b[0]);
}

inline Sca op(const Drb& a, const Pss& b) { return Sca(); }

inline Pln op(const Drb& a, const Pnt& b) {
  return Pln(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3],
             -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Pss op(const Drb& a, const Par& b) {
  return Pss(a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sca op(const Drb& a, const Cir& b) { return Sca(); }

inline Sca op(const Drb& a, const Sph& b) { return Sca(); }

inline Pss op(const Drb& a, const Sta& b) {
  return Pss(a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sca op(const Drb& a, const Drv& b) { return Sca(); }

inline Sca op(const Drb& a, const Drb& b) { return Sca(); }

inline Sca op(const Drb& a, const Drt& b) { return Sca(); }

inline Pss op(const Drb& a, const Tnv& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sca op(const Drb& a, const Tnb& b) { return Sca(); }

inline Sca op(const Drb& a, const Tnt& b) { return Sca(); }

inline Sca op(const Drb& a, const Lin& b) { return Sca(); }

inline Sca op(const Drb& a, const Pln& b) { return Sca(); }

inline Sca op(const Drb& a, const Flp& b) { return Sca(); }

inline Sca op(const Drb& a, const Dfp& b) { return Sca(); }

inline Sca op(const Drb& a, const Dll& b) { return Sca(); }

inline Drt op(const Drb& a, const Dlp& b) {
  return Drt(-a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Drt op(const Drb& a, const Vec& b) {
  return Drt(-a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Sca op(const Drb& a, const Biv& b) { return Sca(); }

inline Sca op(const Drb& a, const Tri& b) { return Sca(); }

inline Pln op(const Drb& a, const Aff& b) {
  return Pln(-a[0] * b[3], -a[1] * b[3], -a[2] * b[3],
             -a[0] * b[2] + a[1] * b[1] - a[2] * b[0]);
}

inline Pss op(const Drb& a, const Afl& b) {
  return Pss(a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sca op(const Drb& a, const Afp& b) { return Sca(); }

inline Pss op(const Drb& a, const Dap& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sca op(const Drb& a, const Daf& b) { return Sca(); }

inline Sca op(const Drb& a, const Dal& b) { return Sca(); }

inline Sca op(const Drb& a, const Mnv& b) { return Sca(); }

inline Sca ip(const Drb& a, const Sca& b) { return Sca(); }

inline Sca ip(const Drb& a, const Ori& b) { return Sca(); }

inline Sca ip(const Drb& a, const Inf& b) { return Sca(); }

inline Sca ip(const Drb& a, const Mnk& b) { return Sca(); }

inline Sca ip(const Drb& a, const Hyp& b) { return Sca(); }

inline Drv ip(const Drb& a, const Pss& b) {
  return Drv(-a[2] * b[0], a[1] * b[0], -a[0] * b[0]);
}

inline Sca ip(const Drb& a, const Pnt& b) { return Sca(); }

inline Sca ip(const Drb& a, const Par& b) { return Sca(); }

inline Sca ip(const Drb& a, const Cir& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Dlp ip(const Drb& a, const Sph& b) {
  return Dlp(-a[2] * b[3], a[1] * b[3], -a[0] * b[3],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Drb& a, const Sta& b) { return Sca(); }

inline Sca ip(const Drb& a, const Drv& b) { return Sca(); }

inline Sca ip(const Drb& a, const Drb& b) { return Sca(); }

inline Sca ip(const Drb& a, const Drt& b) { return Sca(); }

inline Sca ip(const Drb& a, const Tnv& b) { return Sca(); }

inline Sca ip(const Drb& a, const Tnb& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Vec ip(const Drb& a, const Tnt& b) {
  return Vec(-a[2] * b[0], a[1] * b[0], -a[0] * b[0]);
}

inline Sca ip(const Drb& a, const Lin& b) { return Sca(); }

inline Inf ip(const Drb& a, const Pln& b) {
  return Inf(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Drb& a, const Flp& b) { return Sca(); }

inline Sca ip(const Drb& a, const Dfp& b) { return Sca(); }

inline Sca ip(const Drb& a, const Dll& b) { return Sca(); }

inline Sca ip(const Drb& a, const Dlp& b) { return Sca(); }

inline Sca ip(const Drb& a, const Vec& b) { return Sca(); }

inline Sca ip(const Drb& a, const Biv& b) { return Sca(); }

inline Sca ip(const Drb& a, const Tri& b) { return Sca(); }

inline Sca ip(const Drb& a, const Aff& b) { return Sca(); }

inline Sca ip(const Drb& a, const Afl& b) { return Sca(); }

inline Sca ip(const Drb& a, const Afp& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Drb& a, const Dap& b) { return Sca(); }

inline Dlp ip(const Drb& a, const Daf& b) {
  return Dlp(-a[2] * b[3], a[1] * b[3], -a[0] * b[3],
             a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Drb& a, const Dal& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Drb& a, const Mnv& b) { return Sca(); }

template <>
inline Drb sp(const Drb& drb, const Rot& rot) {
  const Rot& t1 = rot;
  const Drb& t2 = drb;
  Drv_Lin t3(-t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]);
  const Rot& t4 = rot;
  Rot t5 = reverse(t4);
  return Drb(t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
             t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]);
}

template <>
inline Drb sp(const Drb& drb, const Mot& mot) {
  const Mot& t1 = mot;
  const Drb& t2 = drb;
  Drv_Lin t3(-t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0]);
  const Mot& t4 = mot;
  Mot t5 = reverse(t4);
  return Drb(t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
             t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0]);
}

template <>
inline Drb sp(const Drb& drb, const Dil& dil) {
  const Dil& t1 = dil;
  const Drb& t2 = drb;
  Drb t3(t1[0] * t2[0] + t1[1] * t2[0], t1[0] * t2[1] + t1[1] * t2[1],
         t1[0] * t2[2] + t1[1] * t2[2]);
  const Dil& t4 = dil;
  Dil t5 = reverse(t4);
  return Drb(t3[0] * t5[0] - t3[0] * t5[1], t3[1] * t5[0] - t3[1] * t5[1],
             t3[2] * t5[0] - t3[2] * t5[1]);
}

template <>
inline Drb sp(const Drb& drb, const Trv& trv) {
  const Trv& t1 = trv;
  const Drb& t2 = drb;
  Drv_Afp t3(t1[2] * t2[0] + t1[3] * t2[1], -t1[1] * t2[0] + t1[3] * t2[2],
             -t1[1] * t2[1] - t1[2] * t2[2], t1[0] * t2[0], t1[0] * t2[1],
             t1[0] * t2[2], -t1[2] * t2[0] - t1[3] * t2[1],
             t1[1] * t2[0] - t1[3] * t2[2], t1[1] * t2[1] + t1[2] * t2[2],
             -t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Trv& t4 = trv;
  Trv t5 = reverse(t4);
  return Drb(t3[3] * t5[0], t3[4] * t5[0], t3[5] * t5[0]);
}

template <>
inline Drb sp(const Drb& drb, const Mtd& mtd) {
  const Mtd& t1 = mtd;
  const Drb& t2 = drb;
  Drv_Lin t3(-t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[8] * t2[0] -
                 t1[9] * t2[1] - t1[10] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0] -
                 t1[9] * t2[2] + t1[10] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[1] +
                 t1[8] * t2[2] - t1[10] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[2] -
                 t1[8] * t2[1] + t1[9] * t2[0]);
  const Mtd& t4 = mtd;
  Mtd t5 = reverse(t4);
  return Drb(t3[0] * t5[1] - t3[0] * t5[8] + t3[1] * t5[0] - t3[1] * t5[7] -
                 t3[2] * t5[3] + t3[2] * t5[10] + t3[3] * t5[2] - t3[3] * t5[9],
             t3[0] * t5[2] - t3[0] * t5[9] + t3[1] * t5[3] - t3[1] * t5[10] +
                 t3[2] * t5[0] - t3[2] * t5[7] - t3[3] * t5[1] + t3[3] * t5[8],
             t3[0] * t5[3] - t3[0] * t5[10] - t3[1] * t5[2] + t3[1] * t5[9] +
                 t3[2] * t5[1] - t3[2] * t5[8] + t3[3] * t5[0] - t3[3] * t5[7]);
}

template <>
inline Drb sp(const Drb& drb, const Trs& trs) {
  const Trs& t1 = trs;
  const Drb& t2 = drb;
  Drb t3(t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2]);
  const Trs& t4 = trs;
  Trs t5 = reverse(t4);
  return Drb(t3[0] * t5[0], t3[1] * t5[0], t3[2] * t5[0]);
}

template <>
inline Drb sp(const Drb& drb, const Rtc& rtc) {
  const Rtc& t1 = rtc;
  const Drb& t2 = drb;
  Mtd t3(t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
         -t1[3] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
         -t1[3] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
         -t1[3] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
         -t1[1] * t2[0] - t1[2] * t2[1] - t1[12] * t2[0] - t1[13] * t2[1] -
             t1[14] * t2[2] - t1[15] * t2[2],
         t1[0] * t2[0] - t1[2] * t2[2] + t1[11] * t2[0] - t1[13] * t2[2] +
             t1[14] * t2[1] + t1[15] * t2[1],
         t1[0] * t2[1] + t1[1] * t2[2] + t1[11] * t2[1] + t1[12] * t2[2] -
             t1[14] * t2[0] - t1[15] * t2[0],
         -t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
         t1[3] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
         t1[3] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
         t1[3] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0],
         t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[11] * t2[2] -
             t1[12] * t2[1] + t1[13] * t2[0]);
  const Rtc& t4 = rtc;
  Rtc t5 = reverse(t4);
  return Drb(
      t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] + t3[3] * t5[9] -
          t3[4] * t5[1] + t3[4] * t5[12] + t3[5] * t5[0] - t3[5] * t5[11] -
          t3[6] * t5[14] + t3[6] * t5[15] + t3[7] * t5[8] + t3[8] * t5[4] -
          t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[2] + t3[11] * t5[13],
      t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[3] * t5[8] -
          t3[4] * t5[2] + t3[4] * t5[13] + t3[5] * t5[14] - t3[5] * t5[15] +
          t3[6] * t5[0] - t3[6] * t5[11] + t3[7] * t5[9] + t3[8] * t5[10] +
          t3[9] * t5[4] - t3[10] * t5[8] + t3[11] * t5[1] - t3[11] * t5[12],
      t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[4] -
          t3[4] * t5[14] + t3[4] * t5[15] - t3[5] * t5[2] + t3[5] * t5[13] +
          t3[6] * t5[1] - t3[6] * t5[12] + t3[7] * t5[10] - t3[8] * t5[9] +
          t3[9] * t5[8] + t3[10] * t5[4] - t3[11] * t5[0] + t3[11] * t5[11]);
}

template <>
inline Drb sp(const Drb& drb, const Mtt& mtt) {
  const Mtt& t1 = mtt;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1] + t1[14] * t2[2],
             -t1[4] * t2[0] + t1[6] * t2[2] - t1[14] * t2[1],
             -t1[4] * t2[1] - t1[5] * t2[2] + t1[14] * t2[0],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
                 t1[12] * t2[1] - t1[13] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[10] * t2[0] -
                 t1[12] * t2[2] + t1[13] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[10] * t2[1] +
                 t1[11] * t2[2] - t1[13] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[10] * t2[2] -
                 t1[11] * t2[1] + t1[12] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
             t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
             t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Mtt& t4 = mtt;
  Mtt t5 = reverse(t4);
  return Drb(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[1] -
          t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[3] +
          t3[5] * t5[13] + t3[6] * t5[2] - t3[6] * t5[12] + t3[7] * t5[8] -
          t3[8] * t5[7] + t3[9] * t5[15] + t3[10] * t5[9] + t3[11] * t5[9],
      t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] + t3[3] * t5[2] -
          t3[3] * t5[12] + t3[4] * t5[3] - t3[4] * t5[13] + t3[5] * t5[0] -
          t3[5] * t5[10] - t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[9] -
          t3[8] * t5[15] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[8],
      t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] -
          t3[3] * t5[13] - t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[1] -
          t3[5] * t5[11] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[15] +
          t3[8] * t5[9] - t3[9] * t5[8] + t3[10] * t5[7] + t3[11] * t5[7]);
}

template <>
inline Drb sp(const Drb& drb, const Rtt& rtt) {
  const Rtt& t1 = rtt;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1] + t1[7] * t2[2],
             -t1[4] * t2[0] + t1[6] * t2[2] - t1[7] * t2[1],
             -t1[4] * t2[1] - t1[5] * t2[2] + t1[7] * t2[0],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1] - t1[7] * t2[2],
             t1[4] * t2[0] - t1[6] * t2[2] + t1[7] * t2[1],
             t1[4] * t2[1] + t1[5] * t2[2] - t1[7] * t2[0],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Rtt& t4 = rtt;
  Rtt t5 = reverse(t4);
  return Drb(t3[3] * t5[1] + t3[4] * t5[0] - t3[5] * t5[3] + t3[6] * t5[2],
             t3[3] * t5[2] + t3[4] * t5[3] + t3[5] * t5[0] - t3[6] * t5[1],
             t3[3] * t5[3] - t3[4] * t5[2] + t3[5] * t5[1] + t3[6] * t5[0]);
}

template <>
inline Drb sp(const Drb& drb, const Rtd& rtd) {
  const Rtd& t1 = rtd;
  const Drb& t2 = drb;
  Drv_Lin t3(-t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[5] * t2[0] -
                 t1[6] * t2[1] - t1[7] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[4] * t2[0] -
                 t1[6] * t2[2] + t1[7] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[4] * t2[1] +
                 t1[5] * t2[2] - t1[7] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[4] * t2[2] -
                 t1[5] * t2[1] + t1[6] * t2[0]);
  const Rtd& t4 = rtd;
  Rtd t5 = reverse(t4);
  return Drb(t3[0] * t5[1] - t3[0] * t5[5] + t3[1] * t5[0] - t3[1] * t5[4] -
                 t3[2] * t5[3] + t3[2] * t5[7] + t3[3] * t5[2] - t3[3] * t5[6],
             t3[0] * t5[2] - t3[0] * t5[6] + t3[1] * t5[3] - t3[1] * t5[7] +
                 t3[2] * t5[0] - t3[2] * t5[4] - t3[3] * t5[1] + t3[3] * t5[5],
             t3[0] * t5[3] - t3[0] * t5[7] - t3[1] * t5[2] + t3[1] * t5[6] +
                 t3[2] * t5[1] - t3[2] * t5[5] + t3[3] * t5[0] - t3[3] * t5[4]);
}

template <>
inline Drb sp(const Drb& drb, const Tvd& tvd) {
  const Tvd& t1 = tvd;
  const Drb& t2 = drb;
  Drv_Afp t3(t1[2] * t2[0] + t1[3] * t2[1], -t1[1] * t2[0] + t1[3] * t2[2],
             -t1[1] * t2[1] - t1[2] * t2[2], t1[0] * t2[0] + t1[4] * t2[0],
             t1[0] * t2[1] + t1[4] * t2[1], t1[0] * t2[2] + t1[4] * t2[2],
             -t1[2] * t2[0] - t1[3] * t2[1], t1[1] * t2[0] - t1[3] * t2[2],
             t1[1] * t2[1] + t1[2] * t2[2],
             -t1[1] * t2[2] + t1[2] * t2[1] - t1[3] * t2[0],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Tvd& t4 = tvd;
  Tvd t5 = reverse(t4);
  return Drb(t3[3] * t5[0] - t3[3] * t5[4], t3[4] * t5[0] - t3[4] * t5[4],
             t3[5] * t5[0] - t3[5] * t5[4]);
}

template <>
inline Drb sp(const Drb& drb, const Tsd& tsd) {
  const Tsd& t1 = tsd;
  const Drb& t2 = drb;
  Drb t3(t1[0] * t2[0] + t1[4] * t2[0], t1[0] * t2[1] + t1[4] * t2[1],
         t1[0] * t2[2] + t1[4] * t2[2]);
  const Tsd& t4 = tsd;
  Tsd t5 = reverse(t4);
  return Drb(t3[0] * t5[0] - t3[0] * t5[4], t3[1] * t5[0] - t3[1] * t5[4],
             t3[2] * t5[0] - t3[2] * t5[4]);
}

template <>
inline Drb sp(const Drb& drb, const Trt& trt) {
  const Trt& t1 = trt;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1], -t1[4] * t2[0] + t1[6] * t2[2],
             -t1[4] * t2[1] - t1[5] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
                 t1[12] * t2[1] - t1[13] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[10] * t2[0] -
                 t1[12] * t2[2] + t1[13] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[10] * t2[1] +
                 t1[11] * t2[2] - t1[13] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[10] * t2[2] -
                 t1[11] * t2[1] + t1[12] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1], t1[4] * t2[0] - t1[6] * t2[2],
             t1[4] * t2[1] + t1[5] * t2[2],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Trt& t4 = trt;
  Trt t5 = reverse(t4);
  return Drb(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[1] - t3[3] * t5[11] +
          t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[3] + t3[5] * t5[13] +
          t3[6] * t5[2] - t3[6] * t5[12] + t3[7] * t5[8] - t3[8] * t5[7] +
          t3[10] * t5[9] + t3[11] * t5[9],
      t3[0] * t5[9] - t3[2] * t5[7] + t3[3] * t5[2] - t3[3] * t5[12] +
          t3[4] * t5[3] - t3[4] * t5[13] + t3[5] * t5[0] - t3[5] * t5[10] -
          t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[9] - t3[9] * t5[7] -
          t3[10] * t5[8] - t3[11] * t5[8],
      t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] - t3[3] * t5[13] -
          t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[1] - t3[5] * t5[11] +
          t3[6] * t5[0] - t3[6] * t5[10] + t3[8] * t5[9] - t3[9] * t5[8] +
          t3[10] * t5[7] + t3[11] * t5[7]);
}

template <>
inline Drb sp(const Drb& drb, const Rvd& rvd) {
  const Rvd& t1 = rvd;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1] + t1[11] * t2[2],
             -t1[4] * t2[0] + t1[6] * t2[2] - t1[11] * t2[1],
             -t1[4] * t2[1] - t1[5] * t2[2] + t1[11] * t2[0],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[8] * t2[0] -
                 t1[9] * t2[1] - t1[10] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0] -
                 t1[9] * t2[2] + t1[10] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[7] * t2[1] +
                 t1[8] * t2[2] - t1[10] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[7] * t2[2] -
                 t1[8] * t2[1] + t1[9] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1] - t1[11] * t2[2],
             t1[4] * t2[0] - t1[6] * t2[2] + t1[11] * t2[1],
             t1[4] * t2[1] + t1[5] * t2[2] - t1[11] * t2[0],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Rvd& t4 = rvd;
  Rvd t5 = reverse(t4);
  return Drb(t3[3] * t5[1] - t3[3] * t5[8] + t3[4] * t5[0] - t3[4] * t5[7] -
                 t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[2] - t3[6] * t5[9],
             t3[3] * t5[2] - t3[3] * t5[9] + t3[4] * t5[3] - t3[4] * t5[10] +
                 t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[1] + t3[6] * t5[8],
             t3[3] * t5[3] - t3[3] * t5[10] - t3[4] * t5[2] + t3[4] * t5[9] +
                 t3[5] * t5[1] - t3[5] * t5[8] + t3[6] * t5[0] - t3[6] * t5[7]);
}

template <>
inline Drb sp(const Drb& drb, const Tst& tst) {
  const Tst& t1 = tst;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1] + t1[14] * t2[2],
             -t1[4] * t2[0] + t1[6] * t2[2] - t1[14] * t2[1],
             -t1[4] * t2[1] - t1[5] * t2[2] + t1[14] * t2[0],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
                 t1[12] * t2[1] - t1[13] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[10] * t2[0] -
                 t1[12] * t2[2] + t1[13] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[10] * t2[1] +
                 t1[11] * t2[2] - t1[13] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[10] * t2[2] -
                 t1[11] * t2[1] + t1[12] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1] - t1[14] * t2[2],
             t1[4] * t2[0] - t1[6] * t2[2] + t1[14] * t2[1],
             t1[4] * t2[1] + t1[5] * t2[2] - t1[14] * t2[0],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Tst& t4 = tst;
  Tst t5 = reverse(t4);
  return Drb(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[1] - t3[3] * t5[11] +
          t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[3] + t3[5] * t5[13] +
          t3[6] * t5[2] - t3[6] * t5[12] + t3[7] * t5[8] - t3[8] * t5[7] +
          t3[10] * t5[9] + t3[11] * t5[9],
      t3[0] * t5[9] - t3[2] * t5[7] + t3[3] * t5[2] - t3[3] * t5[12] +
          t3[4] * t5[3] - t3[4] * t5[13] + t3[5] * t5[0] - t3[5] * t5[10] -
          t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[9] - t3[9] * t5[7] -
          t3[10] * t5[8] - t3[11] * t5[8],
      t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] - t3[3] * t5[13] -
          t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[1] - t3[5] * t5[11] +
          t3[6] * t5[0] - t3[6] * t5[10] + t3[8] * t5[9] - t3[9] * t5[8] +
          t3[10] * t5[7] + t3[11] * t5[7]);
}

template <>
inline Drb sp(const Drb& drb, const Tvt& tvt) {
  const Tvt& t1 = tvt;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1], -t1[4] * t2[0] + t1[6] * t2[2],
             -t1[4] * t2[1] - t1[5] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2] - t1[11] * t2[0] -
                 t1[12] * t2[1] - t1[13] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[10] * t2[0] -
                 t1[12] * t2[2] + t1[13] * t2[1],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[10] * t2[1] +
                 t1[11] * t2[2] - t1[13] * t2[0],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[10] * t2[2] -
                 t1[11] * t2[1] + t1[12] * t2[0],
             -t1[5] * t2[0] - t1[6] * t2[1], t1[4] * t2[0] - t1[6] * t2[2],
             t1[4] * t2[1] + t1[5] * t2[2],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Tvt& t4 = tvt;
  Tvt t5 = reverse(t4);
  return Drb(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[1] -
          t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[10] - t3[5] * t5[3] +
          t3[5] * t5[13] + t3[6] * t5[2] - t3[6] * t5[12] + t3[7] * t5[8] -
          t3[8] * t5[7] + t3[9] * t5[14] + t3[10] * t5[9] + t3[11] * t5[9],
      t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] + t3[3] * t5[2] -
          t3[3] * t5[12] + t3[4] * t5[3] - t3[4] * t5[13] + t3[5] * t5[0] -
          t3[5] * t5[10] - t3[6] * t5[1] + t3[6] * t5[11] + t3[7] * t5[9] -
          t3[8] * t5[14] - t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[8],
      t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] -
          t3[3] * t5[13] - t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[1] -
          t3[5] * t5[11] + t3[6] * t5[0] - t3[6] * t5[10] + t3[7] * t5[14] +
          t3[8] * t5[9] - t3[9] * t5[8] + t3[10] * t5[7] + t3[11] * t5[7]);
}

template <>
inline Drb sp(const Drb& drb, const Bst& bst) {
  const Bst& t1 = bst;
  const Drb& t2 = drb;
  Par_Drb t3(t1[5] * t2[0] + t1[6] * t2[1], -t1[4] * t2[0] + t1[6] * t2[2],
             -t1[4] * t2[1] - t1[5] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             t1[0] * t2[0] - t1[2] * t2[2] + t1[3] * t2[1] + t1[10] * t2[0],
             t1[0] * t2[1] + t1[1] * t2[2] - t1[3] * t2[0] + t1[10] * t2[1],
             t1[0] * t2[2] - t1[1] * t2[1] + t1[2] * t2[0] + t1[10] * t2[2],
             -t1[5] * t2[0] - t1[6] * t2[1], t1[4] * t2[0] - t1[6] * t2[2],
             t1[4] * t2[1] + t1[5] * t2[2],
             -t1[4] * t2[2] + t1[5] * t2[1] - t1[6] * t2[0],
             t1[4] * t2[2] - t1[5] * t2[1] + t1[6] * t2[0]);
  const Bst& t4 = bst;
  Bst t5 = reverse(t4);
  return Drb(
      t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[1] + t3[4] * t5[0] -
          t3[4] * t5[10] - t3[5] * t5[3] + t3[6] * t5[2] + t3[7] * t5[8] -
          t3[8] * t5[7] + t3[10] * t5[9] + t3[11] * t5[9],
      t3[0] * t5[9] - t3[2] * t5[7] + t3[3] * t5[2] + t3[4] * t5[3] +
          t3[5] * t5[0] - t3[5] * t5[10] - t3[6] * t5[1] + t3[7] * t5[9] -
          t3[9] * t5[7] - t3[10] * t5[8] - t3[11] * t5[8],
      t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[3] - t3[4] * t5[2] +
          t3[5] * t5[1] + t3[6] * t5[0] - t3[6] * t5[10] + t3[8] * t5[9] -
          t3[9] * t5[8] + t3[10] * t5[7] + t3[11] * t5[7]);
}

template <>
inline Drb re(const Drb& drb, const Vec& vec) {
  const Vec& t1 = vec;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Drv_Pln t4(-t1[1] * t3[0] - t1[2] * t3[1], t1[0] * t3[0] - t1[2] * t3[2],
             t1[0] * t3[1] + t1[1] * t3[2],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Vec& t5 = vec;
  Vec t6 = reverse(t5);
  return Drb(-t4[0] * t6[1] + t4[1] * t6[0] - t4[3] * t6[2],
             -t4[0] * t6[2] + t4[2] * t6[0] + t4[3] * t6[1],
             -t4[1] * t6[2] + t4[2] * t6[1] - t4[3] * t6[0]);
}

template <>
inline Drb re(const Drb& drb, const Dlp& dlp) {
  const Dlp& t1 = dlp;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Drv_Pln t4(-t1[1] * t3[0] - t1[2] * t3[1], t1[0] * t3[0] - t1[2] * t3[2],
             t1[0] * t3[1] + t1[1] * t3[2],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Dlp& t5 = dlp;
  Dlp t6 = reverse(t5);
  return Drb(-t4[0] * t6[1] + t4[1] * t6[0] - t4[3] * t6[2],
             -t4[0] * t6[2] + t4[2] * t6[0] + t4[3] * t6[1],
             -t4[1] * t6[2] + t4[2] * t6[1] - t4[3] * t6[0]);
}

template <>
inline Drb re(const Drb& drb, const Pln& pln) {
  const Pln& t1 = pln;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Drv_Lin t4(-t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
             -t1[1] * t3[2] + t1[2] * t3[1], t1[0] * t3[2] - t1[2] * t3[0],
             -t1[0] * t3[1] + t1[1] * t3[0]);
  const Pln& t5 = pln;
  Pln t6 = reverse(t5);
  return Drb(-t4[0] * t6[0] + t4[2] * t6[2] - t4[3] * t6[1],
             -t4[0] * t6[1] - t4[1] * t6[2] + t4[3] * t6[0],
             -t4[0] * t6[2] + t4[1] * t6[1] - t4[2] * t6[0]);
}

template <>
inline Drb re(const Drb& drb, const Dll& dll) {
  const Dll& t1 = dll;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Drv_Lin t4(-t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
             -t1[1] * t3[2] + t1[2] * t3[1], t1[0] * t3[2] - t1[2] * t3[0],
             -t1[0] * t3[1] + t1[1] * t3[0]);
  const Dll& t5 = dll;
  Dll t6 = reverse(t5);
  return Drb(t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
             t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
             t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]);
}

template <>
inline Drb re(const Drb& drb, const Lin& lin) {
  const Lin& t1 = lin;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Drv_Pln t4(-t1[4] * t3[0] - t1[5] * t3[1], t1[3] * t3[0] - t1[5] * t3[2],
             t1[3] * t3[1] + t1[4] * t3[2],
             t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]);
  const Lin& t5 = lin;
  Lin t6 = reverse(t5);
  return Drb(t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5],
             t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4],
             t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[3]);
}

template <>
inline Drb re(const Drb& drb, const Pnt& pnt) {
  const Pnt& t1 = pnt;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Inf_Cir t4(-t1[3] * t3[0], -t1[3] * t3[1], -t1[3] * t3[2],
             -t1[1] * t3[0] - t1[2] * t3[1], t1[0] * t3[0] - t1[2] * t3[2],
             t1[0] * t3[1] + t1[1] * t3[2], t1[3] * t3[0], t1[3] * t3[1],
             t1[3] * t3[2], t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Pnt& t5 = pnt;
  Pnt t6 = reverse(t5);
  return Drb(t4[0] * t6[4] - t4[3] * t6[1] + t4[4] * t6[0] + t4[6] * t6[4] -
                 t4[9] * t6[2],
             t4[1] * t6[4] - t4[3] * t6[2] + t4[5] * t6[0] + t4[7] * t6[4] +
                 t4[9] * t6[1],
             t4[2] * t6[4] - t4[4] * t6[2] + t4[5] * t6[1] + t4[8] * t6[4] -
                 t4[9] * t6[0]);
}

template <>
inline Drb re(const Drb& drb, const Par& par) {
  const Par& t1 = par;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Par_Drb t4(t1[4] * t3[0] + t1[5] * t3[1], -t1[3] * t3[0] + t1[5] * t3[2],
             -t1[3] * t3[1] - t1[4] * t3[2],
             -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
             -t1[1] * t3[2] + t1[2] * t3[1] + t1[9] * t3[0],
             t1[0] * t3[2] - t1[2] * t3[0] + t1[9] * t3[1],
             -t1[0] * t3[1] + t1[1] * t3[0] + t1[9] * t3[2],
             -t1[4] * t3[0] - t1[5] * t3[1], t1[3] * t3[0] - t1[5] * t3[2],
             t1[3] * t3[1] + t1[4] * t3[2],
             -t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0],
             t1[3] * t3[2] - t1[4] * t3[1] + t1[5] * t3[0]);
  const Par& t5 = par;
  Par t6 = reverse(t5);
  return Drb(t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[0] - t4[4] * t6[9] -
                 t4[5] * t6[2] + t4[6] * t6[1] + t4[7] * t6[7] - t4[8] * t6[6] +
                 t4[10] * t6[8] + t4[11] * t6[8],
             t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[1] + t4[4] * t6[2] -
                 t4[5] * t6[9] - t4[6] * t6[0] + t4[7] * t6[8] - t4[9] * t6[6] -
                 t4[10] * t6[7] - t4[11] * t6[7],
             t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[2] - t4[4] * t6[1] +
                 t4[5] * t6[0] - t4[6] * t6[9] + t4[8] * t6[8] - t4[9] * t6[7] +
                 t4[10] * t6[6] + t4[11] * t6[6]);
}

template <>
inline Drb re(const Drb& drb, const Cir& cir) {
  const Cir& t1 = cir;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Mtd t4(t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
         t1[1] * t3[2] - t1[2] * t3[1], -t1[0] * t3[2] + t1[2] * t3[0],
         t1[0] * t3[1] - t1[1] * t3[0],
         -t1[7] * t3[0] - t1[8] * t3[1] - t1[9] * t3[2],
         t1[6] * t3[0] - t1[8] * t3[2] + t1[9] * t3[1],
         t1[6] * t3[1] + t1[7] * t3[2] - t1[9] * t3[0],
         -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
         -t1[1] * t3[2] + t1[2] * t3[1], t1[0] * t3[2] - t1[2] * t3[0],
         -t1[0] * t3[1] + t1[1] * t3[0],
         t1[6] * t3[2] - t1[7] * t3[1] + t1[8] * t3[0]);
  const Cir& t5 = cir;
  Cir t6 = reverse(t5);
  return Drb(t4[0] * t6[3] - t4[2] * t6[5] + t4[3] * t6[4] + t4[4] * t6[7] -
                 t4[5] * t6[6] - t4[6] * t6[9] + t4[7] * t6[3] - t4[9] * t6[5] +
                 t4[10] * t6[4] + t4[11] * t6[8],
             t4[0] * t6[4] + t4[1] * t6[5] - t4[3] * t6[3] + t4[4] * t6[8] +
                 t4[5] * t6[9] - t4[6] * t6[6] + t4[7] * t6[4] + t4[8] * t6[5] -
                 t4[10] * t6[3] - t4[11] * t6[7],
             t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[4] * t6[9] +
                 t4[5] * t6[8] - t4[6] * t6[7] + t4[7] * t6[5] - t4[8] * t6[4] +
                 t4[9] * t6[3] + t4[11] * t6[6]);
}

template <>
inline Drb re(const Drb& drb, const Sph& sph) {
  const Sph& t1 = sph;
  const Drb& t2 = drb;
  Drb t3 = involute(t2);
  Inf_Par t4(t1[3] * t3[2], -t1[3] * t3[1], t1[3] * t3[0],
             -t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
             -t1[1] * t3[2] + t1[2] * t3[1], t1[0] * t3[2] - t1[2] * t3[0],
             -t1[0] * t3[1] + t1[1] * t3[0], -t1[3] * t3[2], t1[3] * t3[1],
             -t1[3] * t3[0]);
  const Sph& t5 = sph;
  Sph t6 = reverse(t5);
  return Drb(t4[2] * t6[4] - t4[3] * t6[0] + t4[5] * t6[2] - t4[6] * t6[1] +
                 t4[9] * t6[4],
             -t4[1] * t6[4] - t4[3] * t6[1] - t4[4] * t6[2] + t4[6] * t6[0] -
                 t4[8] * t6[4],
             t4[0] * t6[4] - t4[3] * t6[2] + t4[4] * t6[1] - t4[5] * t6[0] +
                 t4[7] * t6[4]);
}

}  // namespace vsr
#endif
