#ifndef VEC_H_INCLUDED
#define VEC_H_INCLUDED

#include "vsr_casts.h"

namespace vsr {

inline Vec gp(const Vec& a, const Sca& b) {
  return Vec(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Tnv gp(const Vec& a, const Ori& b) {
  return Tnv(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Drv gp(const Vec& a, const Inf& b) {
  return Drv(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Mnv gp(const Vec& a, const Mnk& b) {
  return Mnv(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Hyp_Vec gp(const Vec& a, const Hyp& b) {
  return Hyp_Vec(a[0] * b[0], a[1] * b[0], a[2] * b[0], a[0] * b[1],
                 a[1] * b[1], a[2] * b[1]);
}

inline Mnk_Biv gp(const Vec& a, const Pss& b) {
  return Mnk_Biv(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Pnt_Vec gp(const Vec& a, const Pnt& b) {
  return Pnt_Vec(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3],
                 a[2] * b[3], a[0] * b[4], a[1] * b[4], a[2] * b[4]);
}

inline Pnt_Par gp(const Vec& a, const Par& b) {
  return Pnt_Par(
      -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
      a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
      a[0] * b[6] + a[1] * b[7] + a[2] * b[8], a[0] * b[4] - a[1] * b[3],
      a[0] * b[5] - a[2] * b[3], a[1] * b[5] - a[2] * b[4],
      a[0] * b[7] - a[1] * b[6], a[0] * b[8] - a[2] * b[6],
      a[1] * b[8] - a[2] * b[7], a[0] * b[9], a[1] * b[9], a[2] * b[9],
      a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Pnt_Cir gp(const Vec& a, const Cir& b) {
  return Pnt_Cir(
      a[2] * b[9], -a[1] * b[9], a[0] * b[9], -a[1] * b[0] - a[2] * b[1],
      a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2],
      -a[1] * b[3] - a[2] * b[4], a[0] * b[3] - a[2] * b[5],
      a[0] * b[4] + a[1] * b[5], a[0] * b[6] + a[1] * b[7] + a[2] * b[8],
      a[0] * b[7] - a[1] * b[6], a[0] * b[8] - a[2] * b[6],
      a[1] * b[8] - a[2] * b[7], a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
      a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Sph_Vec gp(const Vec& a, const Sph& b) {
  return Sph_Vec(a[2] * b[3], -a[1] * b[3], a[0] * b[3], a[2] * b[4],
                 -a[1] * b[4], a[0] * b[4], -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sta_Vec gp(const Vec& a, const Sta& b) {
  return Sta_Vec(
      -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
      a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
      a[0] * b[6] + a[1] * b[7] + a[2] * b[8], a[0] * b[4] - a[1] * b[3],
      a[0] * b[5] - a[2] * b[3], a[1] * b[5] - a[2] * b[4],
      a[0] * b[7] - a[1] * b[6], a[0] * b[8] - a[2] * b[6],
      a[1] * b[8] - a[2] * b[7], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Drv_Lin gp(const Vec& a, const Drv& b) {
  return Drv_Lin(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1]);
}

inline Drv_Pln gp(const Vec& a, const Drb& b) {
  return Drv_Pln(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Drb gp(const Vec& a, const Drt& b) {
  return Drb(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Tnv_Vec gp(const Vec& a, const Tnv& b) {
  return Tnv_Vec(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1]);
}

inline Tnv_Biv gp(const Vec& a, const Tnb& b) {
  return Tnv_Biv(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Tnb gp(const Vec& a, const Tnt& b) {
  return Tnb(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Lin_Dlp gp(const Vec& a, const Lin& b) {
  return Lin_Dlp(
      -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
      a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
      a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
      a[1] * b[5] - a[2] * b[4], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Pln_Dlp gp(const Vec& a, const Pln& b) {
  return Pln_Dlp(a[2] * b[3], -a[1] * b[3], a[0] * b[3],
                 -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Pln_Dfp gp(const Vec& a, const Flp& b) {
  return Pln_Dfp(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3],
                 a[2] * b[3]);
}

inline Pln_Flp gp(const Vec& a, const Dfp& b) {
  return Pln_Flp(a[2] * b[3], -a[1] * b[3], a[0] * b[3],
                 -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Lin_Pln gp(const Vec& a, const Dll& b) {
  return Lin_Pln(
      -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
      a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
      a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
      a[1] * b[5] - a[2] * b[4], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Pln_Pln gp(const Vec& a, const Dlp& b) {
  return Pln_Pln(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3],
                 a[2] * b[3]);
}

inline Rot gp(const Vec& a, const Vec& b) {
  return Rot(a[0] * b[0] + a[1] * b[1] + a[2] * b[2], a[0] * b[1] - a[1] * b[0],
             a[0] * b[2] - a[2] * b[0], a[1] * b[2] - a[2] * b[1]);
}

inline Vec_Biv gp(const Vec& a, const Biv& b) {
  return Vec_Biv(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Biv gp(const Vec& a, const Tri& b) {
  return Biv(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Vec_Aff gp(const Vec& a, const Aff& b) {
  return Vec_Aff(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3],
                 a[2] * b[3]);
}

inline Vec_Afl gp(const Vec& a, const Afl& b) {
  return Vec_Afl(
      -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
      a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
      a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
      a[1] * b[5] - a[2] * b[4], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Vec_Afp gp(const Vec& a, const Afp& b) {
  return Vec_Afp(a[2] * b[3], -a[1] * b[3], a[0] * b[3],
                 -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Vec_Dap gp(const Vec& a, const Dap& b) {
  return Vec_Dap(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3],
                 a[2] * b[3]);
}

inline Vec_Daf gp(const Vec& a, const Daf& b) {
  return Vec_Daf(a[2] * b[3], -a[1] * b[3], a[0] * b[3],
                 -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[2],
                 a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Vec_Dal gp(const Vec& a, const Dal& b) {
  return Vec_Dal(
      -a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
      a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
      a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
      a[1] * b[5] - a[2] * b[4], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Vec_Mnv gp(const Vec& a, const Mnv& b) {
  return Vec_Mnv(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
                 a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1]);
}

inline Vec_Biv gp(const Vec& a, const Rot& b) {
  return Vec_Biv(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Lin_Pln gp(const Vec& a, const Mot& b) {
  return Lin_Pln(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
                 a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
                 a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Ori_Drv gp(const Vec& a, const Dil& b) {
  return Ori_Drv(a[0] * b[0], a[1] * b[0], a[2] * b[0], a[0] * b[1],
                 a[1] * b[1], a[2] * b[1]);
}

inline Biv_Afp gp(const Vec& a, const Trv& b) {
  return Biv_Afp(a[0] * b[0], a[1] * b[0], a[2] * b[0],
                 a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
                 a[0] * b[2] - a[1] * b[1], a[0] * b[3] - a[2] * b[1],
                 a[1] * b[3] - a[2] * b[2]);
}

inline Par_Drb gp(const Vec& a, const Mtd& b) {
  return Par_Drb(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
                 a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
                 a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
                 a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
                 a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
                 a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
                 a[0] * b[10] - a[1] * b[9] + a[2] * b[8]);
}

inline Lin_Flp gp(const Vec& a, const Trs& b) {
  return Lin_Flp(a[0] * b[0], a[1] * b[0], a[2] * b[0],
                 a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
                 a[0] * b[2] - a[1] * b[1], a[0] * b[3] - a[2] * b[1],
                 a[1] * b[3] - a[2] * b[2]);
}

inline Mtt gp(const Vec& a, const Rtc& b) {
  return Mtt(a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
             a[0] * b[1] - a[1] * b[0] + a[2] * b[14],
             a[0] * b[2] - a[1] * b[14] - a[2] * b[0],
             a[0] * b[14] + a[1] * b[2] - a[2] * b[1],
             a[0] * b[3] - a[1] * b[5] - a[2] * b[6],
             a[0] * b[5] + a[1] * b[3] - a[2] * b[7],
             a[0] * b[6] + a[1] * b[7] + a[2] * b[3],
             a[0] * b[4] - a[1] * b[8] - a[2] * b[9],
             a[0] * b[8] + a[1] * b[4] - a[2] * b[10],
             a[0] * b[9] + a[1] * b[10] + a[2] * b[4],
             a[0] * b[11] + a[1] * b[12] + a[2] * b[13],
             a[0] * b[12] - a[1] * b[11] + a[2] * b[15],
             a[0] * b[13] - a[1] * b[15] - a[2] * b[11],
             a[0] * b[15] + a[1] * b[13] - a[2] * b[12],
             a[0] * b[7] - a[1] * b[6] + a[2] * b[5],
             a[0] * b[10] - a[1] * b[9] + a[2] * b[8]);
}

inline Rtc gp(const Vec& a, const Mtt& b) {
  return Rtc(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
             a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
             a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
             a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
             a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
             a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
             a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
             a[0] * b[8] - a[1] * b[7] + a[2] * b[15],
             a[0] * b[9] - a[1] * b[15] - a[2] * b[7],
             a[0] * b[15] + a[1] * b[9] - a[2] * b[8],
             a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
             a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
             a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
             a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
             a[0] * b[13] - a[1] * b[12] + a[2] * b[11]);
}

inline Vec_Afl gp(const Vec& a, const Rtt& b) {
  return Vec_Afl(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[7],
                 a[0] * b[6] - a[1] * b[7] - a[2] * b[4],
                 a[0] * b[7] + a[1] * b[6] - a[2] * b[5],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Drv_Tnb gp(const Vec& a, const Rtd& b) {
  return Drv_Tnb(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[4] - a[1] * b[5] - a[2] * b[6],
                 a[0] * b[5] + a[1] * b[4] - a[2] * b[7],
                 a[0] * b[6] + a[1] * b[7] + a[2] * b[4],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
                 a[0] * b[7] - a[1] * b[6] + a[2] * b[5]);
}

inline Ori_Par gp(const Vec& a, const Tvd& b) {
  return Ori_Par(a[0] * b[0], a[1] * b[0], a[2] * b[0],
                 a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
                 a[0] * b[2] - a[1] * b[1], a[0] * b[3] - a[2] * b[1],
                 a[1] * b[3] - a[2] * b[2], a[0] * b[4], a[1] * b[4],
                 a[2] * b[4]);
}

inline Inf_Par gp(const Vec& a, const Tsd& b) {
  return Inf_Par(a[0] * b[0], a[1] * b[0], a[2] * b[0],
                 a[0] * b[1] + a[1] * b[2] + a[2] * b[3],
                 a[0] * b[2] - a[1] * b[1], a[0] * b[3] - a[2] * b[1],
                 a[1] * b[3] - a[2] * b[2], a[0] * b[4], a[1] * b[4],
                 a[2] * b[4]);
}

inline Rtc gp(const Vec& a, const Trt& b) {
  return Rtc(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
             a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
             a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
             a[0] * b[7] + a[1] * b[8] + a[2] * b[9], a[0] * b[5] - a[1] * b[4],
             a[0] * b[6] - a[2] * b[4], a[1] * b[6] - a[2] * b[5],
             a[0] * b[8] - a[1] * b[7], a[0] * b[9] - a[2] * b[7],
             a[1] * b[9] - a[2] * b[8],
             a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
             a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
             a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
             a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
             a[0] * b[13] - a[1] * b[12] + a[2] * b[11]);
}

inline Par_Tnb gp(const Vec& a, const Rvd& b) {
  return Par_Tnb(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
                 a[0] * b[5] - a[1] * b[4] + a[2] * b[11],
                 a[0] * b[6] - a[1] * b[11] - a[2] * b[4],
                 a[0] * b[11] + a[1] * b[6] - a[2] * b[5],
                 a[0] * b[7] - a[1] * b[8] - a[2] * b[9],
                 a[0] * b[8] + a[1] * b[7] - a[2] * b[10],
                 a[0] * b[9] + a[1] * b[10] + a[2] * b[7],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
                 a[0] * b[10] - a[1] * b[9] + a[2] * b[8]);
}

inline Rtc gp(const Vec& a, const Tst& b) {
  return Rtc(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
             a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
             a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
             a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
             a[0] * b[5] - a[1] * b[4] + a[2] * b[14],
             a[0] * b[6] - a[1] * b[14] - a[2] * b[4],
             a[0] * b[14] + a[1] * b[6] - a[2] * b[5],
             a[0] * b[8] - a[1] * b[7], a[0] * b[9] - a[2] * b[7],
             a[1] * b[9] - a[2] * b[8],
             a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
             a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
             a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
             a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
             a[0] * b[13] - a[1] * b[12] + a[2] * b[11]);
}

inline Rtc gp(const Vec& a, const Tvt& b) {
  return Rtc(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
             a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
             a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
             a[0] * b[7] + a[1] * b[8] + a[2] * b[9], a[0] * b[5] - a[1] * b[4],
             a[0] * b[6] - a[2] * b[4], a[1] * b[6] - a[2] * b[5],
             a[0] * b[8] - a[1] * b[7] + a[2] * b[14],
             a[0] * b[9] - a[1] * b[14] - a[2] * b[7],
             a[0] * b[14] + a[1] * b[9] - a[2] * b[8],
             a[0] * b[10] - a[1] * b[11] - a[2] * b[12],
             a[0] * b[11] + a[1] * b[10] - a[2] * b[13],
             a[0] * b[12] + a[1] * b[13] + a[2] * b[10],
             a[0] * b[3] - a[1] * b[2] + a[2] * b[1],
             a[0] * b[13] - a[1] * b[12] + a[2] * b[11]);
}

inline Pnt_Par gp(const Vec& a, const Bst& b) {
  return Pnt_Par(a[0] * b[0] - a[1] * b[1] - a[2] * b[2],
                 a[0] * b[1] + a[1] * b[0] - a[2] * b[3],
                 a[0] * b[2] + a[1] * b[3] + a[2] * b[0],
                 a[0] * b[4] + a[1] * b[5] + a[2] * b[6],
                 a[0] * b[7] + a[1] * b[8] + a[2] * b[9],
                 a[0] * b[5] - a[1] * b[4], a[0] * b[6] - a[2] * b[4],
                 a[1] * b[6] - a[2] * b[5], a[0] * b[8] - a[1] * b[7],
                 a[0] * b[9] - a[2] * b[7], a[1] * b[9] - a[2] * b[8],
                 a[0] * b[10], a[1] * b[10], a[2] * b[10],
                 a[0] * b[3] - a[1] * b[2] + a[2] * b[1]);
}

inline Vec op(const Vec& a, const Sca& b) {
  return Vec(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Tnv op(const Vec& a, const Ori& b) {
  return Tnv(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Drv op(const Vec& a, const Inf& b) {
  return Drv(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Mnv op(const Vec& a, const Mnk& b) {
  return Mnv(a[0] * b[0], a[1] * b[0], a[2] * b[0]);
}

inline Hyp_Vec op(const Vec& a, const Hyp& b) {
  return Hyp_Vec(a[0] * b[0], a[1] * b[0], a[2] * b[0], a[0] * b[1],
                 a[1] * b[1], a[2] * b[1]);
}

inline Sca op(const Vec& a, const Pss& b) { return Sca(); }

inline Sta op(const Vec& a, const Pnt& b) {
  return Sta(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3], a[2] * b[3],
             a[0] * b[4], a[1] * b[4], a[2] * b[4]);
}

inline Cir op(const Vec& a, const Par& b) {
  return Cir(a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
             a[1] * b[5] - a[2] * b[4], a[0] * b[7] - a[1] * b[6],
             a[0] * b[8] - a[2] * b[6], a[1] * b[8] - a[2] * b[7], a[0] * b[9],
             a[1] * b[9], a[2] * b[9], a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sph op(const Vec& a, const Cir& b) {
  return Sph(a[0] * b[7] - a[1] * b[6], a[0] * b[8] - a[2] * b[6],
             a[1] * b[8] - a[2] * b[7], a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
             a[0] * b[5] - a[1] * b[4] + a[2] * b[3]);
}

inline Pss op(const Vec& a, const Sph& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Drb op(const Vec& a, const Drv& b) {
  return Drb(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1]);
}

inline Drt op(const Vec& a, const Drb& b) {
  return Drt(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sca op(const Vec& a, const Drt& b) { return Sca(); }

inline Tnb op(const Vec& a, const Tnv& b) {
  return Tnb(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1]);
}

inline Tnt op(const Vec& a, const Tnb& b) {
  return Tnt(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sca op(const Vec& a, const Tnt& b) { return Sca(); }

inline Pln op(const Vec& a, const Lin& b) {
  return Pln(a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
             a[1] * b[5] - a[2] * b[4],
             a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Pss op(const Vec& a, const Pln& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Lin op(const Vec& a, const Flp& b) {
  return Lin(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3], a[2] * b[3]);
}

inline Drt op(const Vec& a, const Dfp& b) {
  return Drt(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Dfp op(const Vec& a, const Dll& b) {
  return Dfp(a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
             a[1] * b[5] - a[2] * b[4],
             a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Dll op(const Vec& a, const Dlp& b) {
  return Dll(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3], a[2] * b[3]);
}

inline Biv op(const Vec& a, const Vec& b) {
  return Biv(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1]);
}

inline Tri op(const Vec& a, const Biv& b) {
  return Tri(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Sca op(const Vec& a, const Tri& b) { return Sca(); }

inline Afl op(const Vec& a, const Aff& b) {
  return Afl(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3], a[2] * b[3]);
}

inline Afp op(const Vec& a, const Afl& b) {
  return Afp(a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
             a[1] * b[5] - a[2] * b[4],
             a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Tnt op(const Vec& a, const Afp& b) {
  return Tnt(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Dal op(const Vec& a, const Dap& b) {
  return Dal(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
             a[1] * b[2] - a[2] * b[1], a[0] * b[3], a[1] * b[3], a[2] * b[3]);
}

inline Pss op(const Vec& a, const Daf& b) {
  return Pss(a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Daf op(const Vec& a, const Dal& b) {
  return Daf(a[0] * b[4] - a[1] * b[3], a[0] * b[5] - a[2] * b[3],
             a[1] * b[5] - a[2] * b[4],
             a[0] * b[2] - a[1] * b[1] + a[2] * b[0]);
}

inline Mnk_Biv op(const Vec& a, const Mnv& b) {
  return Mnk_Biv(a[0] * b[1] - a[1] * b[0], a[0] * b[2] - a[2] * b[0],
                 a[1] * b[2] - a[2] * b[1]);
}

inline Sca ip(const Vec& a, const Sca& b) { return Sca(); }

inline Sca ip(const Vec& a, const Ori& b) { return Sca(); }

inline Sca ip(const Vec& a, const Inf& b) { return Sca(); }

inline Sca ip(const Vec& a, const Mnk& b) { return Sca(); }

inline Sca ip(const Vec& a, const Hyp& b) { return Sca(); }

inline Mnk_Biv ip(const Vec& a, const Pss& b) {
  return Mnk_Biv(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Sca ip(const Vec& a, const Pnt& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Pnt ip(const Vec& a, const Par& b) {
  return Pnt(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
             a[0] * b[6] + a[1] * b[7] + a[2] * b[8]);
}

inline Par ip(const Vec& a, const Cir& b) {
  return Par(a[2] * b[9], -a[1] * b[9], a[0] * b[9], -a[1] * b[0] - a[2] * b[1],
             a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2],
             -a[1] * b[3] - a[2] * b[4], a[0] * b[3] - a[2] * b[5],
             a[0] * b[4] + a[1] * b[5],
             a[0] * b[6] + a[1] * b[7] + a[2] * b[8]);
}

inline Pss_Sta ip(const Vec& a, const Sph& b) {
  return Pss_Sta(a[2] * b[3], -a[1] * b[3], a[0] * b[3], a[2] * b[4],
                 -a[1] * b[4], a[0] * b[4], -a[1] * b[0] - a[2] * b[1],
                 a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2]);
}

inline Pnt ip(const Vec& a, const Sta& b) {
  return Pnt(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2], a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
             a[0] * b[6] + a[1] * b[7] + a[2] * b[8]);
}

inline Inf ip(const Vec& a, const Drv& b) {
  return Inf(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Drv ip(const Vec& a, const Drb& b) {
  return Drv(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2]);
}

inline Drb ip(const Vec& a, const Drt& b) {
  return Drb(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Ori ip(const Vec& a, const Tnv& b) {
  return Ori(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Tnv ip(const Vec& a, const Tnb& b) {
  return Tnv(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2]);
}

inline Tnb ip(const Vec& a, const Tnt& b) {
  return Tnb(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Flp ip(const Vec& a, const Lin& b) {
  return Flp(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2],
             a[0] * b[3] + a[1] * b[4] + a[2] * b[5]);
}

inline Lin ip(const Vec& a, const Pln& b) {
  return Lin(a[2] * b[3], -a[1] * b[3], a[0] * b[3], -a[1] * b[0] - a[2] * b[1],
             a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2]);
}

inline Inf ip(const Vec& a, const Flp& b) {
  return Inf(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Dll ip(const Vec& a, const Dfp& b) {
  return Dll(a[2] * b[3], -a[1] * b[3], a[0] * b[3], -a[1] * b[0] - a[2] * b[1],
             a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2]);
}

inline Dlp ip(const Vec& a, const Dll& b) {
  return Dlp(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2],
             a[0] * b[3] + a[1] * b[4] + a[2] * b[5]);
}

inline Sca ip(const Vec& a, const Dlp& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Sca ip(const Vec& a, const Vec& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Vec ip(const Vec& a, const Biv& b) {
  return Vec(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2]);
}

inline Biv ip(const Vec& a, const Tri& b) {
  return Biv(a[2] * b[0], -a[1] * b[0], a[0] * b[0]);
}

inline Sca ip(const Vec& a, const Aff& b) {
  return Sca(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Aff ip(const Vec& a, const Afl& b) {
  return Aff(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2],
             a[0] * b[3] + a[1] * b[4] + a[2] * b[5]);
}

inline Afl ip(const Vec& a, const Afp& b) {
  return Afl(a[2] * b[3], -a[1] * b[3], a[0] * b[3], -a[1] * b[0] - a[2] * b[1],
             a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2]);
}

inline Ori ip(const Vec& a, const Dap& b) {
  return Ori(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

inline Dal ip(const Vec& a, const Daf& b) {
  return Dal(a[2] * b[3], -a[1] * b[3], a[0] * b[3], -a[1] * b[0] - a[2] * b[1],
             a[0] * b[0] - a[2] * b[2], a[0] * b[1] + a[1] * b[2]);
}

inline Dap ip(const Vec& a, const Dal& b) {
  return Dap(-a[1] * b[0] - a[2] * b[1], a[0] * b[0] - a[2] * b[2],
             a[0] * b[1] + a[1] * b[2],
             a[0] * b[3] + a[1] * b[4] + a[2] * b[5]);
}

inline Mnk ip(const Vec& a, const Mnv& b) {
  return Mnk(a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

template <>
inline Vec sp(const Vec& vec, const Rot& rot) {
  const Rot& t1 = rot;
  const Vec& t2 = vec;
  Vec_Biv t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Rot& t4 = rot;
  Rot t5 = reverse(t4);
  return Vec(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
             t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1]);
}

template <>
inline Vec sp(const Vec& vec, const Mot& mot) {
  const Mot& t1 = mot;
  const Vec& t2 = vec;
  Lin_Pln t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
             -t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
             -t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
             -t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Mot& t4 = mot;
  Mot t5 = reverse(t4);
  return Vec(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
             t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1]);
}

template <>
inline Vec sp(const Vec& vec, const Dil& dil) {
  const Dil& t1 = dil;
  const Vec& t2 = vec;
  Ori_Drv t3(t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2], t1[1] * t2[0],
             t1[1] * t2[1], t1[1] * t2[2]);
  const Dil& t4 = dil;
  Dil t5 = reverse(t4);
  return Vec(t3[0] * t5[0] + t3[3] * t5[1], t3[1] * t5[0] + t3[4] * t5[1],
             t3[2] * t5[0] + t3[5] * t5[1]);
}

template <>
inline Vec sp(const Vec& vec, const Trv& trv) {
  const Trv& t1 = trv;
  const Vec& t2 = vec;
  Biv_Afp t3(t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             -t1[1] * t2[1] + t1[2] * t2[0], -t1[1] * t2[2] + t1[3] * t2[0],
             -t1[2] * t2[2] + t1[3] * t2[1]);
  const Trv& t4 = trv;
  Trv t5 = reverse(t4);
  return Vec(t3[0] * t5[0], t3[1] * t5[0], t3[2] * t5[0]);
}

template <>
inline Vec sp(const Vec& vec, const Mtd& mtd) {
  const Mtd& t1 = mtd;
  const Vec& t2 = vec;
  Par_Drb t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
             -t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
             -t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
             -t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
             t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
             t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
             t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
             t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]);
  const Mtd& t4 = mtd;
  Mtd t5 = reverse(t4);
  return Vec(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] -
          t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
      t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] +
          t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
      t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] +
          t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8]);
}

template <>
inline Vec sp(const Vec& vec, const Trs& trs) {
  const Trs& t1 = trs;
  const Vec& t2 = vec;
  Lin_Flp t3(t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             -t1[1] * t2[1] + t1[2] * t2[0], -t1[1] * t2[2] + t1[3] * t2[0],
             -t1[2] * t2[2] + t1[3] * t2[1]);
  const Trs& t4 = trs;
  Trs t5 = reverse(t4);
  return Vec(t3[0] * t5[0], t3[1] * t5[0], t3[2] * t5[0]);
}

template <>
inline Vec sp(const Vec& vec, const Rtc& rtc) {
  const Rtc& t1 = rtc;
  const Vec& t2 = vec;
  Mtt t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
         t1[0] * t2[1] - t1[1] * t2[0] + t1[14] * t2[2],
         t1[0] * t2[2] - t1[2] * t2[0] - t1[14] * t2[1],
         t1[1] * t2[2] - t1[2] * t2[1] + t1[14] * t2[0],
         -t1[3] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
         -t1[3] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
         -t1[3] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
         -t1[4] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
         -t1[4] * t2[1] + t1[8] * t2[0] - t1[10] * t2[2],
         -t1[4] * t2[2] + t1[9] * t2[0] + t1[10] * t2[1],
         t1[11] * t2[0] + t1[12] * t2[1] + t1[13] * t2[2],
         t1[11] * t2[1] - t1[12] * t2[0] + t1[15] * t2[2],
         t1[11] * t2[2] - t1[13] * t2[0] - t1[15] * t2[1],
         t1[12] * t2[2] - t1[13] * t2[1] + t1[15] * t2[0],
         -t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
         -t1[8] * t2[2] + t1[9] * t2[1] - t1[10] * t2[0]);
  const Rtc& t4 = rtc;
  Rtc t5 = reverse(t4);
  return Vec(
      t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[14] -
          t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[3] +
          t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[11] + t3[11] * t5[12] +
          t3[12] * t5[13] - t3[13] * t5[15] + t3[14] * t5[10] + t3[15] * t5[7],
      t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] + t3[3] * t5[2] -
          t3[4] * t5[8] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[5] -
          t3[8] * t5[3] + t3[9] * t5[7] + t3[10] * t5[12] - t3[11] * t5[11] +
          t3[12] * t5[15] + t3[13] * t5[13] - t3[14] * t5[9] - t3[15] * t5[6],
      t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[1] -
          t3[4] * t5[9] - t3[5] * t5[10] - t3[6] * t5[4] - t3[7] * t5[6] -
          t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[13] - t3[11] * t5[15] -
          t3[12] * t5[11] - t3[13] * t5[12] + t3[14] * t5[8] + t3[15] * t5[5]);
}

template <>
inline Vec sp(const Vec& vec, const Mtt& mtt) {
  const Mtt& t1 = mtt;
  const Vec& t2 = vec;
  Rtc t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
         t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
         t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
         -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
         -t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
         -t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
         -t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
         -t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
         -t1[7] * t2[1] + t1[8] * t2[0] - t1[15] * t2[2],
         -t1[7] * t2[2] + t1[9] * t2[0] + t1[15] * t2[1],
         -t1[8] * t2[2] + t1[9] * t2[1] - t1[15] * t2[0],
         t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
         t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
         t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
         t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
         t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]);
  const Mtt& t4 = mtt;
  Mtt t5 = reverse(t4);
  return Vec(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] +
          t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[15] +
          t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] -
          t3[12] * t5[11] - t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
      t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] +
          t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[9] -
          t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] +
          t3[12] * t5[10] - t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
      t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] +
          t3[4] * t5[6] - t3[5] * t5[15] - t3[6] * t5[7] - t3[7] * t5[8] -
          t3[8] * t5[14] - t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] +
          t3[12] * t5[13] + t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]);
}

template <>
inline Vec sp(const Vec& vec, const Rtt& rtt) {
  const Rtt& t1 = rtt;
  const Vec& t2 = vec;
  Vec_Afl t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
             -t1[4] * t2[1] + t1[5] * t2[0] - t1[7] * t2[2],
             -t1[4] * t2[2] + t1[6] * t2[0] + t1[7] * t2[1],
             -t1[5] * t2[2] + t1[6] * t2[1] - t1[7] * t2[0],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Rtt& t4 = rtt;
  Rtt t5 = reverse(t4);
  return Vec(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[7] * t5[3],
             t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[2],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[7] * t5[1]);
}

template <>
inline Vec sp(const Vec& vec, const Rtd& rtd) {
  const Rtd& t1 = rtd;
  const Vec& t2 = vec;
  Drv_Tnb t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             t1[4] * t2[0] + t1[5] * t2[1] + t1[6] * t2[2],
             t1[4] * t2[1] - t1[5] * t2[0] + t1[7] * t2[2],
             t1[4] * t2[2] - t1[6] * t2[0] - t1[7] * t2[1],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
             t1[5] * t2[2] - t1[6] * t2[1] + t1[7] * t2[0]);
  const Rtd& t4 = rtd;
  Rtd t5 = reverse(t4);
  return Vec(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[4] -
                 t3[4] * t5[5] - t3[5] * t5[6] - t3[6] * t5[3] - t3[7] * t5[7],
             t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[5] +
                 t3[4] * t5[4] - t3[5] * t5[7] + t3[6] * t5[2] + t3[7] * t5[6],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[6] +
                 t3[4] * t5[7] + t3[5] * t5[4] - t3[6] * t5[1] - t3[7] * t5[5]);
}

template <>
inline Vec sp(const Vec& vec, const Tvd& tvd) {
  const Tvd& t1 = tvd;
  const Vec& t2 = vec;
  Ori_Par t3(t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             -t1[1] * t2[1] + t1[2] * t2[0], -t1[1] * t2[2] + t1[3] * t2[0],
             -t1[2] * t2[2] + t1[3] * t2[1], t1[4] * t2[0], t1[4] * t2[1],
             t1[4] * t2[2]);
  const Tvd& t4 = tvd;
  Tvd t5 = reverse(t4);
  return Vec(t3[0] * t5[0] + t3[7] * t5[4], t3[1] * t5[0] + t3[8] * t5[4],
             t3[2] * t5[0] + t3[9] * t5[4]);
}

template <>
inline Vec sp(const Vec& vec, const Tsd& tsd) {
  const Tsd& t1 = tsd;
  const Vec& t2 = vec;
  Inf_Par t3(t1[0] * t2[0], t1[0] * t2[1], t1[0] * t2[2],
             -t1[1] * t2[0] - t1[2] * t2[1] - t1[3] * t2[2],
             -t1[1] * t2[1] + t1[2] * t2[0], -t1[1] * t2[2] + t1[3] * t2[0],
             -t1[2] * t2[2] + t1[3] * t2[1], t1[4] * t2[0], t1[4] * t2[1],
             t1[4] * t2[2]);
  const Tsd& t4 = tsd;
  Tsd t5 = reverse(t4);
  return Vec(t3[0] * t5[0] + t3[7] * t5[4], t3[1] * t5[0] + t3[8] * t5[4],
             t3[2] * t5[0] + t3[9] * t5[4]);
}

template <>
inline Vec sp(const Vec& vec, const Trt& trt) {
  const Trt& t1 = trt;
  const Vec& t2 = vec;
  Rtc t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
         t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
         t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
         -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
         -t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
         -t1[4] * t2[1] + t1[5] * t2[0], -t1[4] * t2[2] + t1[6] * t2[0],
         -t1[5] * t2[2] + t1[6] * t2[1], -t1[7] * t2[1] + t1[8] * t2[0],
         -t1[7] * t2[2] + t1[9] * t2[0], -t1[8] * t2[2] + t1[9] * t2[1],
         t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
         t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
         t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
         t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
         t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]);
  const Trt& t4 = trt;
  Trt t5 = reverse(t4);
  return Vec(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] +
                 t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] +
                 t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] -
                 t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
             t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] +
                 t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] +
                 t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] -
                 t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] +
                 t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] -
                 t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] +
                 t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]);
}

template <>
inline Vec sp(const Vec& vec, const Rvd& rvd) {
  const Rvd& t1 = rvd;
  const Vec& t2 = vec;
  Par_Tnb t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
             -t1[4] * t2[1] + t1[5] * t2[0] - t1[11] * t2[2],
             -t1[4] * t2[2] + t1[6] * t2[0] + t1[11] * t2[1],
             -t1[5] * t2[2] + t1[6] * t2[1] - t1[11] * t2[0],
             t1[7] * t2[0] + t1[8] * t2[1] + t1[9] * t2[2],
             t1[7] * t2[1] - t1[8] * t2[0] + t1[10] * t2[2],
             t1[7] * t2[2] - t1[9] * t2[0] - t1[10] * t2[1],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
             t1[8] * t2[2] - t1[9] * t2[1] + t1[10] * t2[0]);
  const Rvd& t4 = rvd;
  Rvd t5 = reverse(t4);
  return Vec(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[7] * t5[7] -
          t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[3] - t3[11] * t5[10],
      t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[7] * t5[8] +
          t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[2] + t3[11] * t5[9],
      t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[7] * t5[9] +
          t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[1] - t3[11] * t5[8]);
}

template <>
inline Vec sp(const Vec& vec, const Tst& tst) {
  const Tst& t1 = tst;
  const Vec& t2 = vec;
  Rtc t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
         t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
         t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
         -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
         -t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
         -t1[4] * t2[1] + t1[5] * t2[0] - t1[14] * t2[2],
         -t1[4] * t2[2] + t1[6] * t2[0] + t1[14] * t2[1],
         -t1[5] * t2[2] + t1[6] * t2[1] - t1[14] * t2[0],
         -t1[7] * t2[1] + t1[8] * t2[0], -t1[7] * t2[2] + t1[9] * t2[0],
         -t1[8] * t2[2] + t1[9] * t2[1],
         t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
         t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
         t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
         t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
         t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]);
  const Tst& t4 = tst;
  Tst t5 = reverse(t4);
  return Vec(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] +
          t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] +
          t3[9] * t5[6] - t3[10] * t5[14] + t3[11] * t5[10] - t3[12] * t5[11] -
          t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
      t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] +
          t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] +
          t3[9] * t5[14] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] -
          t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
      t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] +
          t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[8] * t5[14] -
          t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] +
          t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]);
}

template <>
inline Vec sp(const Vec& vec, const Tvt& tvt) {
  const Tvt& t1 = tvt;
  const Vec& t2 = vec;
  Rtc t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
         t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
         t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
         -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
         -t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
         -t1[4] * t2[1] + t1[5] * t2[0], -t1[4] * t2[2] + t1[6] * t2[0],
         -t1[5] * t2[2] + t1[6] * t2[1],
         -t1[7] * t2[1] + t1[8] * t2[0] - t1[14] * t2[2],
         -t1[7] * t2[2] + t1[9] * t2[0] + t1[14] * t2[1],
         -t1[8] * t2[2] + t1[9] * t2[1] - t1[14] * t2[0],
         t1[10] * t2[0] + t1[11] * t2[1] + t1[12] * t2[2],
         t1[10] * t2[1] - t1[11] * t2[0] + t1[13] * t2[2],
         t1[10] * t2[2] - t1[12] * t2[0] - t1[13] * t2[1],
         t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0],
         t1[11] * t2[2] - t1[12] * t2[1] + t1[13] * t2[0]);
  const Tvt& t4 = tvt;
  Tvt t5 = reverse(t4);
  return Vec(
      t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] +
          t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] - t3[7] * t5[14] +
          t3[8] * t5[5] + t3[9] * t5[6] + t3[11] * t5[10] - t3[12] * t5[11] -
          t3[13] * t5[12] - t3[14] * t5[3] - t3[15] * t5[13],
      t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] +
          t3[4] * t5[5] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[9] -
          t3[8] * t5[4] + t3[10] * t5[6] + t3[11] * t5[11] + t3[12] * t5[10] -
          t3[13] * t5[13] + t3[14] * t5[2] + t3[15] * t5[12],
      t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] +
          t3[4] * t5[6] - t3[5] * t5[14] - t3[6] * t5[7] - t3[7] * t5[8] -
          t3[9] * t5[4] - t3[10] * t5[5] + t3[11] * t5[12] + t3[12] * t5[13] +
          t3[13] * t5[10] - t3[14] * t5[1] - t3[15] * t5[11]);
}

template <>
inline Vec sp(const Vec& vec, const Bst& bst) {
  const Bst& t1 = bst;
  const Vec& t2 = vec;
  Pnt_Par t3(t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2],
             t1[0] * t2[1] - t1[1] * t2[0] + t1[3] * t2[2],
             t1[0] * t2[2] - t1[2] * t2[0] - t1[3] * t2[1],
             -t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2],
             -t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2],
             -t1[4] * t2[1] + t1[5] * t2[0], -t1[4] * t2[2] + t1[6] * t2[0],
             -t1[5] * t2[2] + t1[6] * t2[1], -t1[7] * t2[1] + t1[8] * t2[0],
             -t1[7] * t2[2] + t1[9] * t2[0], -t1[8] * t2[2] + t1[9] * t2[1],
             t1[10] * t2[0], t1[10] * t2[1], t1[10] * t2[2],
             t1[1] * t2[2] - t1[2] * t2[1] + t1[3] * t2[0]);
  const Bst& t4 = bst;
  Bst t5 = reverse(t4);
  return Vec(t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] + t3[3] * t5[7] +
                 t3[4] * t5[4] + t3[5] * t5[8] + t3[6] * t5[9] + t3[8] * t5[5] +
                 t3[9] * t5[6] + t3[11] * t5[10] - t3[14] * t5[3],
             t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[8] +
                 t3[4] * t5[5] - t3[5] * t5[7] + t3[7] * t5[9] - t3[8] * t5[4] +
                 t3[10] * t5[6] + t3[12] * t5[10] + t3[14] * t5[2],
             t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] + t3[3] * t5[9] +
                 t3[4] * t5[6] - t3[6] * t5[7] - t3[7] * t5[8] - t3[9] * t5[4] -
                 t3[10] * t5[5] + t3[13] * t5[10] - t3[14] * t5[1]);
}

template <>
inline Vec re(const Vec& vec, const Dlp& dlp) {
  const Dlp& t1 = dlp;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Pln_Pln t4(t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
             t1[0] * t3[1] - t1[1] * t3[0], t1[0] * t3[2] - t1[2] * t3[0],
             t1[1] * t3[2] - t1[2] * t3[1], -t1[3] * t3[0], -t1[3] * t3[1],
             -t1[3] * t3[2]);
  const Dlp& t5 = dlp;
  Dlp t6 = reverse(t5);
  return Vec(t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
             t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2],
             t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1]);
}

template <>
inline Vec re(const Vec& vec, const Pln& pln) {
  const Pln& t1 = pln;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Pln_Dlp t4(-t1[3] * t3[2], t1[3] * t3[1], -t1[3] * t3[0],
             t1[0] * t3[1] + t1[1] * t3[2], -t1[0] * t3[0] + t1[2] * t3[2],
             -t1[1] * t3[0] - t1[2] * t3[1],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Pln& t5 = pln;
  Pln t6 = reverse(t5);
  return Vec(-t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
             t4[3] * t6[0] - t4[5] * t6[2] + t4[6] * t6[1],
             t4[3] * t6[1] + t4[4] * t6[2] - t4[6] * t6[0]);
}

template <>
inline Vec re(const Vec& vec, const Dll& dll) {
  const Dll& t1 = dll;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Lin_Pln t4(t1[0] * t3[1] + t1[1] * t3[2], -t1[0] * t3[0] + t1[2] * t3[2],
             -t1[1] * t3[0] - t1[2] * t3[1],
             -t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
             -t1[3] * t3[1] + t1[4] * t3[0], -t1[3] * t3[2] + t1[5] * t3[0],
             -t1[4] * t3[2] + t1[5] * t3[1],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Dll& t5 = dll;
  Dll t6 = reverse(t5);
  return Vec(-t4[1] * t6[0] - t4[2] * t6[1] - t4[7] * t6[2],
             t4[0] * t6[0] - t4[2] * t6[2] + t4[7] * t6[1],
             t4[0] * t6[1] + t4[1] * t6[2] - t4[7] * t6[0]);
}

template <>
inline Vec re(const Vec& vec, const Lin& lin) {
  const Lin& t1 = lin;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Lin_Dlp t4(-t1[0] * t3[1] - t1[1] * t3[2], t1[0] * t3[0] - t1[2] * t3[2],
             t1[1] * t3[0] + t1[2] * t3[1],
             t1[3] * t3[0] + t1[4] * t3[1] + t1[5] * t3[2],
             t1[3] * t3[1] - t1[4] * t3[0], t1[3] * t3[2] - t1[5] * t3[0],
             t1[4] * t3[2] - t1[5] * t3[1],
             -t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0]);
  const Lin& t5 = lin;
  Lin t6 = reverse(t5);
  return Vec(t4[3] * t6[3] + t4[4] * t6[4] + t4[5] * t6[5],
             t4[3] * t6[4] - t4[4] * t6[3] + t4[6] * t6[5],
             t4[3] * t6[5] - t4[5] * t6[3] - t4[6] * t6[4]);
}

template <>
inline Vec re(const Vec& vec, const Pnt& pnt) {
  const Pnt& t1 = pnt;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Pnt_Vec t4(t1[0] * t3[0] + t1[1] * t3[1] + t1[2] * t3[2],
             t1[0] * t3[1] - t1[1] * t3[0], t1[0] * t3[2] - t1[2] * t3[0],
             t1[1] * t3[2] - t1[2] * t3[1], -t1[3] * t3[0], -t1[3] * t3[1],
             -t1[3] * t3[2], -t1[4] * t3[0], -t1[4] * t3[1], -t1[4] * t3[2]);
  const Pnt& t5 = pnt;
  Pnt t6 = reverse(t5);
  return Vec(t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[4] * t6[4] -
                 t4[7] * t6[3],
             t4[0] * t6[1] - t4[1] * t6[0] + t4[3] * t6[2] - t4[5] * t6[4] -
                 t4[8] * t6[3],
             t4[0] * t6[2] - t4[2] * t6[0] - t4[3] * t6[1] - t4[6] * t6[4] -
                 t4[9] * t6[3]);
}

template <>
inline Vec re(const Vec& vec, const Par& par) {
  const Par& t1 = par;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Pnt_Par t4(t1[0] * t3[1] + t1[1] * t3[2], -t1[0] * t3[0] + t1[2] * t3[2],
             -t1[1] * t3[0] - t1[2] * t3[1],
             -t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
             -t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2],
             -t1[3] * t3[1] + t1[4] * t3[0], -t1[3] * t3[2] + t1[5] * t3[0],
             -t1[4] * t3[2] + t1[5] * t3[1], -t1[6] * t3[1] + t1[7] * t3[0],
             -t1[6] * t3[2] + t1[8] * t3[0], -t1[7] * t3[2] + t1[8] * t3[1],
             t1[9] * t3[0], t1[9] * t3[1], t1[9] * t3[2],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Par& t5 = par;
  Par t6 = reverse(t5);
  return Vec(-t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[6] + t4[4] * t6[3] +
                 t4[5] * t6[7] + t4[6] * t6[8] + t4[8] * t6[4] + t4[9] * t6[5] +
                 t4[11] * t6[9] - t4[14] * t6[2],
             t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[7] + t4[4] * t6[4] -
                 t4[5] * t6[6] + t4[7] * t6[8] - t4[8] * t6[3] +
                 t4[10] * t6[5] + t4[12] * t6[9] + t4[14] * t6[1],
             t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[8] + t4[4] * t6[5] -
                 t4[6] * t6[6] - t4[7] * t6[7] - t4[9] * t6[3] -
                 t4[10] * t6[4] + t4[13] * t6[9] - t4[14] * t6[0]);
}

template <>
inline Vec re(const Vec& vec, const Cir& cir) {
  const Cir& t1 = cir;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Pnt_Cir t4(t1[9] * t3[2], -t1[9] * t3[1], t1[9] * t3[0],
             -t1[0] * t3[1] - t1[1] * t3[2], t1[0] * t3[0] - t1[2] * t3[2],
             t1[1] * t3[0] + t1[2] * t3[1], -t1[3] * t3[1] - t1[4] * t3[2],
             t1[3] * t3[0] - t1[5] * t3[2], t1[4] * t3[0] + t1[5] * t3[1],
             t1[6] * t3[0] + t1[7] * t3[1] + t1[8] * t3[2],
             t1[6] * t3[1] - t1[7] * t3[0], t1[6] * t3[2] - t1[8] * t3[0],
             t1[7] * t3[2] - t1[8] * t3[1],
             -t1[0] * t3[2] + t1[1] * t3[1] - t1[2] * t3[0],
             -t1[3] * t3[2] + t1[4] * t3[1] - t1[5] * t3[0]);
  const Cir& t5 = cir;
  Cir t6 = reverse(t5);
  return Vec(-t4[2] * t6[9] + t4[4] * t6[3] + t4[5] * t6[4] + t4[7] * t6[0] +
                 t4[8] * t6[1] + t4[9] * t6[6] + t4[10] * t6[7] +
                 t4[11] * t6[8] + t4[13] * t6[5] + t4[14] * t6[2],
             t4[1] * t6[9] - t4[3] * t6[3] + t4[5] * t6[5] - t4[6] * t6[0] +
                 t4[8] * t6[2] + t4[9] * t6[7] - t4[10] * t6[6] +
                 t4[12] * t6[8] - t4[13] * t6[4] - t4[14] * t6[1],
             -t4[0] * t6[9] - t4[3] * t6[4] - t4[4] * t6[5] - t4[6] * t6[1] -
                 t4[7] * t6[2] + t4[9] * t6[8] - t4[11] * t6[6] -
                 t4[12] * t6[7] + t4[13] * t6[3] + t4[14] * t6[0]);
}

template <>
inline Vec re(const Vec& vec, const Sph& sph) {
  const Sph& t1 = sph;
  const Vec& t2 = vec;
  Vec t3 = involute(t2);
  Sph_Vec t4(-t1[3] * t3[2], t1[3] * t3[1], -t1[3] * t3[0], -t1[4] * t3[2],
             t1[4] * t3[1], -t1[4] * t3[0], t1[0] * t3[1] + t1[1] * t3[2],
             -t1[0] * t3[0] + t1[2] * t3[2], -t1[1] * t3[0] - t1[2] * t3[1],
             t1[0] * t3[2] - t1[1] * t3[1] + t1[2] * t3[0]);
  const Sph& t5 = sph;
  Sph t6 = reverse(t5);
  return Vec(-t4[2] * t6[4] - t4[5] * t6[3] - t4[7] * t6[0] - t4[8] * t6[1] -
                 t4[9] * t6[2],
             t4[1] * t6[4] + t4[4] * t6[3] + t4[6] * t6[0] - t4[8] * t6[2] +
                 t4[9] * t6[1],
             -t4[0] * t6[4] - t4[3] * t6[3] + t4[6] * t6[1] + t4[7] * t6[2] -
                 t4[9] * t6[0]);
}

}  // namespace vsr
#endif
