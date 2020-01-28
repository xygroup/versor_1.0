/*
 *  Frame.h
 *  CONGA_07
 *
 *  Created by x on 8/26/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

/*!
       A 3D coordinate Frame system.  Frames have a point position
       and rotor orientation.  Local x, y and z euclidean axes are defined
       through a call to an orient() method, which creates a 4x4 matrix
       representation of the rotor. Hyperplane momentum generators are used
       for moving, spinning, twisting, boosting, and dilating
       the frame in the global space.

       At each time step, these generators are multiplied by an
       acceleration/deceleration coefficent, exponentialized into
       versors and applied to the position and orientation of the frame.
       The relevant methods achieve these physics: move(), spin(), twist(),
       boost(), and dilate().
*/

#ifndef FRAME_H_INCLUDED
#define FRAME_H_INCLUDED

#include "gfx/gfx_matrix.h"
#include "vsr_interp.h"
#include "vsr_op.h"
#include "vsr_xf.h"

//#include "vsr_matrix.h"

namespace vsr {

class Frame {
 protected:
  Pnt mPos; /*!< Position Point */
  Rot mRot; /*!< Orientation Versor */

  /*! Direction Vector Generator (Position Momentum) */
  Vec dVec;
  /*! Euclidean Bivector Generator (Angular Momentum) */
  Biv dBiv;
  /*! Dual Line Generator (Twist Momentum) */
  Dll dDll;
  /*! Tangent Vector Generator (Local Boost) */
  Tnv dTnv;
  /*! Point Pair Generator (Global Boost) */
  Par dPar;

  /*! Minkowski Plane Generator (Dilation) */
  Mnk dMnk;

  double aBiv; /*!< Acceleration Coefficient */
  double aVec; /*!< Acceleration Coefficient */
  double aDll; /*!< Acceleration Coefficient */
  double aTnv; /*!< Acceleration Coefficient */
  double aMnk; /*!< Acceleration Coefficient */
  double aPar; /*!< Acceleration Coefficient */

  /*! Local Frame Matrix Representation */
  Mat4f mImage;
  /*! Scale */
  double mScale;

 public:
  Frame();

  Frame(const Pnt& pos);
  /*! Constructor
          @param[in] pos		Point position
          @param[in] rot		Rotor orientation
  */
  Frame(const Pnt& pos, const Rot& rot);  // Position and Rotation
  /*!	Constructor
          @param[in] mot		Motor concatenated position and
     orientation
  */
  Frame(const Mot& mot);  // Motor

  Frame(const Dll& dll);  // Dual Line

  Frame(const Frame& f) {
    mImage = f.mImage;
    mScale = f.mScale;
    aBiv = f.aBiv;
    aVec = f.aVec;
    aDll = f.aDll;
    aTnv = f.aTnv;
    aPar = f.aPar;
    aMnk = f.aMnk;
    mPos = f.mPos;
    mRot = f.mRot;
    //				mTrs = f.mTrs;
    //				mX = f.mX; mY = f.mY; mZ = f.mZ;
    dBiv = f.dBiv;
    dVec = f.dVec;
    dDll = f.dDll;
    dTnv = f.dTnv;
    dPar = f.dPar;
    dMnk = f.dMnk;
  }

  Frame operator=(const Frame& f) {
    if (this == &f) return *this;

    mImage = f.mImage;
    mScale = f.mScale;
    aBiv = f.aBiv;
    aVec = f.aVec;
    aDll = f.aDll;
    aTnv = f.aTnv;
    aPar = f.aPar;
    aMnk = f.aMnk;
    mPos = f.mPos;
    mRot = f.mRot;
    //				mTrs = f.mTrs;
    //				mX = f.mX; mY = f.mY; mZ = f.mZ;
    dBiv = f.dBiv;
    dVec = f.dVec;
    dDll = f.dDll;
    dTnv = f.dTnv;
    dPar = f.dPar;
    dMnk = f.dMnk;

    return *this;
  }

  // where was this being used? note, Frame is not a subclass of Motor

  //            /*! Experimental: returns a Frame representing the concatenation
  //            ("addition") of *this followed by f */
  //			Frame operator + (const Frame& f) const {
  //                return Frame( f.mot() * mot() );
  //            }
  //            /*! Experimental: returns a Frame representing the
  //            transformation ("difference") from f to *this */
  //			Frame operator -(const Frame& f) const {
  //                return Frame( Gen::ratio( f.dll(), dll() ) );
  //            }
  //            /*! Experimental: returns a Frame representing the concatenation
  //            ("addition") of *this followed by f */
  //			Frame& operator +=(const Frame& f) {
  //                mot( f.mot() * mot() ); return *this;
  //            }
  //
  //            /*! Experimental: returns a Frame representing the concatenation
  //            ("multiplication") of f followed by *this */
  //			Frame operator *(const Frame& f) const {
  //                return Frame( mot() * f.mot() );
  //            }

  Mat4f& image() { return mImage; }       ///< get matrix image
  Mat4f image() const { return mImage; }  ///< get matrix image
  Frame& orient() {
    mImage = Xf::mat(mRot);
    return *this;
  }  ///< load matrix image with current rotor
  void set(const Pnt& p, const Rot& r = Rot(1, 0, 0, 0)) {
    mPos = p;
    mRot = r;
    orient();
  }
  void reset() {
    mRot.set(1, 0, 0, 0);
    mPos.set(0, 0, 0, 1, 0);
    orient();
  }  ///< reset position and orientation

  /*! Local Z Axis Euclidean Vector NEGATES opengl Z*/
  Vec forward() const {
    return Vec(mImage.col[2][0], mImage.col[2][1], mImage.col[2][2]) * -1;
  }
  /*! Local Y Axis Euclidean Vector */
  Vec up() const {
    return Vec(mImage.col[1][0], mImage.col[1][1], mImage.col[1][2]);
  }
  /*! Local X Axis Euclidean Vector */
  Vec right() const {
    return Vec(mImage.col[0][0], mImage.col[0][1], mImage.col[0][2]);
  }
  /*! Reverse Local Z Axis Euclidean Vector */
  Vec backward() const {
    return Vec(mImage.col[2][0], mImage.col[2][1], mImage.col[2][2]);
  }
  /*! Reverse Local Y Axis Euclidean Vector */
  Vec down() const {
    return Vec(mImage.col[1][0], mImage.col[1][1], mImage.col[1][2]) * -1;
  }
  /*! Reverse Local X Axis Euclidean Vector */
  Vec left() const {
    return Vec(mImage.col[0][0], mImage.col[0][1], mImage.col[0][2]) * -1;
  }
  Pnt pos() const { return mPos; }      ///< get position point
  void pos(const Pnt& p) { mPos = p; }  ///< set position point
  Pnt& pos() { return mPos; }           ///< set position point
  void pos(double x, double y, double z) {
    mPos = Ro::null(x, y, z);
  }  ///< set position point
  void rot0(const Rot& r) {
    mRot = r;
  }  ///< set rotor without orientation (deprecated)
  Rot rot() const { return mRot; }  ///< get orientation rotor
  Quat quat() const { return Quat(mRot[0], -mRot[3], mRot[2], mRot[1]); }
  void rot(const Rot& r) {
    mRot = r;
    orient();
  }                                           ///< set orientation rotot
  Rot& rot() { return mRot; }                 ///< set orientation rotor
  Trs trs() const { return Gen::trs(mPos); }  ///< get translation versor
  void trs(const Trs& t) {
    mPos = Pnt(0, 0, 0, 1, .5).sp(t);
  }                                 ///< set translation versor
  Vec vec() const { return mPos; }  ///< get position vector
  Mot mot() const {
    Mot m(trs() * rot());
    return m / m.rnorm();
  }  ///< get normalized motor relative to origin

  // HELPERS

  /*! Flat Point position (dilator generator) */
  Flp flat() const { return mPos ^ Inf(1); }

  Vec x() const { return right(); }
  Vec y() const { return up(); }
  Vec z() const { return forward(); }
  Vec xs() const { return right() * scale(); }
  Vec ys() const { return up() * scale(); }
  Vec zs() const { return forward() * scale(); }

  /* Local Euclidean Bivectors */
  Biv xz() { return right() ^ forward(); }  ///< xz euclidean bivector
  Biv xy() { return right() ^ up(); }       ///< xy euclidean bivector
  Biv yz() { return up() ^ forward(); }     ///< yz euclidean bivector

  /* Global Direct and Dual Lines ("Twists") */
  Lin lx() const { return mPos ^ x() ^ Inf(1); }  ///< x direction direct line
  Lin ly() const { return mPos ^ y() ^ Inf(1); }  ///< y direction direct line
  Lin lz() const { return mPos ^ z() ^ Inf(1); }  ///< z direction direct line
  Dll dlx() const { return lx().dual(); }         ///< x direction dual line
  Dll dly() const { return ly().dual(); }         ///< y direction dual line
  Dll dlz() const { return lz().dual(); }         ///< z direction dual line

  /* Hyperbolic Lines */
  Cir hxl() const { return mPos ^ x() ^ EP; }  ///< x direction h-line
  Cir hyl() const { return mPos ^ y() ^ EP; }  ///< y direction h-line
  Cir hzl() const { return mPos ^ z() ^ EP; }  ///< z direction h-line

  /* Homogenous Planes in Conformal Space */
  Dlp dxz() const { return forward() <= dlx(); }  ///< xz dual plane
  Dlp dxy() const { return up() <= dlx(); }       ///< xy dual plane
  Dlp dyz() const { return up() <= dlz(); }       ///< yz dual plane
  /* Local XY Pair */
  Par pxy() const { return dxy() ^ bound(); }  ///< xy point pair
  Par pxz() const { return dxz() ^ bound(); }  ///< xz point pair
  Par pyz() const { return dyz() ^ bound(); }  ///< yz point pair

  /* Local X Pair (real or imaginary */
  Par px(bool real) const {
    return Ro::par((real) ? ibound() : bound(), x());
  }  ///< xy point pair
  Par py(bool real) const {
    return Ro::par((real) ? ibound() : bound(), y());
  }  ///< xz point pair
  Par pz(bool real) const {
    return Ro::par((real) ? ibound() : bound(), z());
  }  ///< yz point pair

  /* Local XY Circle */
  Cir cxy() const { return Op::udl(pxy()); }  ///< xy circle
                                              /* Local XZ Circle */
  Cir cxz() const { return Op::udl(pxz()); }  ///< xz circle
                                              /* Local YZ Circle */
  Cir cyz() const { return Op::udl(pyz()); }  ///< yz circle
  /* Tangents */
  //			Tnv tx() const { return  Tnv( right() ); }		///< x tangent
  //generator in global space
  //			Tnv ty() const { return  Tnv( up() ) ; }		///< y tangent
  //generator in global space
  //			Tnv tz() const { return  Tnv( forward() ); }	///< z tangent
  //generator in global space
  /* Tangents */
  Par tx() const {
    return Par(Tnv(right())).sp(trs());
  }  ///< x tangent generator in global space
  Par ty() const {
    return Par(Tnv(up())).sp(trs());
  }  ///< y tangent generator in global space
  Par tz() const {
    return Par(Tnv(forward())).sp(trs());
  }  ///< z tangent generator in global space
  /* Tangents */
  Par tx(double t) const {
    return Par(Tnv(right() * t)).sp(trs());
  }  ///< x tangent generator in global space * t
  Par ty(double t) const {
    return Par(Tnv(up() * t)).sp(trs());
  }  ///< y tangent generator in global space * t
  Par tz(double t) const {
    return Par(Tnv(forward() * t)).sp(trs());
  }  ///< z tangent generator in global space * t
  /* Local Tangents Scaled */
  Par txScaled(double t = 1.0) const {
    return tx(scale() * t);
  }  ///< x tangent generator in global space * t
  Par tyScaled(double t = 1.0) const {
    return ty(scale() * t);
  }  ///< y tangent generator in global space * t
  Par tzScaled(double t = 1.0) const {
    return tz(scale() * t);
  }  ///< z tangent generator in global space * t

  /* Local Boost Tranformations */
  Bst ppx() { return Gen::bst(tx()); }  ///< x tangent space boost versor
  Bst ppy() { return Gen::bst(ty()); }  ///< y tangent space boost versor
  Bst ppz() { return Gen::bst(tz()); }  ///< z tangent space boost versor
  /* Local Boost Tranformations */
  Bst ppx(double t) {
    return Gen::bst(tx(t));
  }  ///< x tangent space boost versor
  Bst ppy(double t) {
    return Gen::bst(ty(t));
  }  ///< y tangent space boost versor
  Bst ppz(double t) {
    return Gen::bst(tz(t));
  }  ///< z tangent space boost versor

  void mot(const Mot& m) {
    mPos = PAO.sp(m);
    mRot = m;
    orient();
  }  ///< set position and orientation by motor

  /*! Orient Towards Point p
      @param a target pnt or vector
  */
  template <class A>
  void orientX(const A& p) {
    mRot = Gen::ratio(Vec::x, (Vec(p) - Vec(mPos)).unit());
    orient();
  }
  void orientX(double x, double y, double z) { orientX(Vec(x, y, z)); }
  template <class A>
  void orientXrel(const A& p) {
    mRot = Gen::ratio(Vec::x, Vec(p).unit());
    orient();
  }
  void orientXrel(double x, double y, double z) { orientXrel(Vec(x, y, z)); }
  /*! Orient Towards Point p
      @param a target pnt or vector
  */
  template <class A>
  void orientY(const A& p) {
    mRot = Gen::ratio(Vec::y, (Vec(p) - Vec(mPos)).unit());
    orient();
  }
  void orientY(double x, double y, double z) { orientY(Vec(x, y, z)); }
  template <class A>
  void orientYrel(const A& p) {
    mRot = Gen::ratio(Vec::y, Vec(p).unit());
    orient();
  }
  void orientYrel(double x, double y, double z) { orientYrel(Vec(x, y, z)); }
  /*! Orient Towards Point p
      @param a target pnt or vector
  */
  template <class A>
  void orientZ(const A& p) {
    mRot = Gen::ratio(Vec::z, (Vec(p) - Vec(mPos)).unit());
    orient();
  }
  void orientZ(double x, double y, double z) { orientZ(Vec(x, y, z)); }
  template <class A>
  void orientZrel(const A& p) {
    mRot = Gen::ratio(Vec::z, Vec(p).unit());
    orient();
  }
  void orientZrel(double x, double y, double z) { orientZrel(Vec(x, y, z)); }
  /*! Absolute Twist Transformation (based on global frame) */
  Frame& twista(const Mot& m) {
    mPos = PAO.sp(m);
    mRot = m;
    return orient();
  }
  /*! Absolute boost Transformation (based on global frame) */
  Frame& boosta(const Bst& trv) {
    mPos = PAO.sp(trv);
    return *this;
  }

  // absolute rotor (relative to Rot(1,0,0,0))
  Rot arot() const {
    return Gen::rot(Gen::log(rot()) * -1.0);
    // Gen::log_rot((Rot(1,0,0,0))*rot()));
    // return Rot(Op::slerp(Rot::e12(0), rot(), 1.0));
  }

  /*! Surrounding Dual Sphere */
  Dls bound() const { return Ro::dls_pnt(mPos, mScale); }
  /*! Surrounding Dual Imaginary Sphere */
  Dls ibound() const { return Ro::dls_pnt(mPos, -mScale); }

  /*! Get Dual Line Relative to Origin */
  Dll dll() const { return Gen::log(mot()); }
  /*! Get Bivector Relative to Origin */
  Biv biv() const { return Gen::log(arot()); }  //?

  /*! Pass in Biv (Euclidean Bivector) Generator and reorient*/
  void biv(const Biv& b) { rot(Gen::rot(b)); }
  /*! Pass in Dll (Dual Line) Generator and reorient*/
  void dll(const Dll& d) { mot(Gen::mot(d)); }

  /* Set Time Step Accelerators */
  /*! Set Velocity dVec */
  template <class A>
  void dx(const A& v) {
    dVec = v;
  }
  void dx(double x, double y, double z) { dVec = Vec(x, y, z); }
  Vec dx() const { return dVec; }
  Vec& dx() { return dVec; }
  /*! Set Angular Velocity dBiv */
  template <class A>
  void db(const A& B) {
    dBiv = B;
  }
  void db(double xy, double xz, double yz) { dBiv = Biv(xy, xz, yz); }
  Biv db() const { return dBiv; }
  Biv& db() { return dBiv; }
  /*! Set Twist Velocity dDll */
  void dm(const Mot& M) { dDll = M; }
  Dll dm() const { return dDll; }
  Dll& dm() { return dDll; }
  /*! Set Local Boost dTnv */
  template <class A>
  void dt(const A& t) {
    dTnv = t;
  }
  Tnv dt() const { return dTnv; }
  Tnv& dt() { return dTnv; }
  /*! Set Global Boost dPar */
  void dp(const Par& t) { dPar = t; }
  Par dp() const { return dPar; }
  Par& dp() { return dPar; }
  /*! Set Dilation Velocity */
  template <class A>
  void dd(const A& m) {
    dMnk = m;
  }
  void dd(double d) { dMnk = Mnk(d); }
  Mnk dd() const { return dMnk; }
  Mnk& dd() { return dMnk; }

  /*! Set Acceleration */
  void ax(double t) { aVec = t; }
  /*! Set Angular Acceleration */
  void ab(double t) { aBiv = t; }
  /*! Set Twist Acceleration */
  void am(double t) { aDll = t; }
  /*! Set Local Boost Acceleration */
  void at(double t) { aTnv = t; }
  /*! Set Global Boost Acceleration */
  void ap(double t) { aPar = t; }

  /*! Get/Set Acceleration */
  double& ax() { return aVec; }
  double ax() const { return aVec; }

  /*! Get/Set Angular Acceleration */
  double& ab() { return aBiv; }
  double ab() const { return aBiv; }

  /*! Get/Set Twist Acceleration */
  double& am() { return aDll; }
  double am() const { return aDll; }

  /*! Get/Set Local Boost Acceleration */
  double& at() { return aTnv; }
  double at() const { return aTnv; }

  /*! Get/Set Global Boost Acceleration */
  double& ap() { return aPar; }
  double ap() const { return aPar; }

  /* Accumulators and Time Step */

  /*! Translation Step */
  void move() {
    mPos = Op::sp(mPos, Gen::trs(dVec));
    dVec *= aVec;
  }

  /*! Spin Step (Local Rotation) */
  void spin() {
    mRot = Gen::rot(dBiv) * mRot;
    orient();
    dBiv *= aBiv;
  }

  /*! Twist Step (Global Rotation) */
  void twist() {
    Mot tm = Gen::mot(dDll);
    mPos = Op::sp(mPos, tm);
    mRot = Rot(tm) * mRot;
    orient();
    dDll *= aDll;
  }

  /*! Boost Step (dTnv rel to origin) */
  void rboost() {
    dTnv *= aTnv;
    Trv trv = Gen::trv(dTnv);
    mPos = Ro::loc(Op::sp(bound(), trv));
  }

  /*! Boost Step (rel to dPar) */
  void boost() {
    dPar *= aPar;
    Bst bst = Gen::bst(dPar);
    Dls td = bound().sp(bst);  // spin surround or position?
    mPos = Ro::loc(td);
  }

  Frame& dilate(double t) {
    Dls s = Op::sp(bound(), Gen::dil(t));
    mScale = Ro::rad(s);
    return *this;
  }

  void dilate() {
    dMnk *= aMnk;
    Dls s = Op::sp(bound(), Gen::dil(dMnk));
    // mPos = Ro::loc(s);
    mScale = Ro::rad(s);
  }

  void step() {
    // twist();
    spin();
    move();  // acc();
  }

  /*! Local Transformations */
  template <class A>
  Frame& nudge(const A& dx) {
    mPos = mPos.sp(Gen::trs(dx));
    return *this;
  }
  Frame& spin(const Rot& r) {
    mRot = r * mRot;
    return orient();
  }
  Frame& twist(const Mot& m) {
    mPos = mPos.sp(m);
    mRot = Rot(m) * mRot;
    return orient();
  }
  //			Frame& boost(const State& dx) { mPos = Ro::loc(
  //Op::sp0(bound(),dx) ); return *this; } 			Frame& bboost(const State& dx) { mPos
  //= Ro::loc( Op::sp0(bound(), dx) ); return *this; }

  /*! Twist to another Frame f by amount t */
  Frame& twist2(const Frame& f, double t = 1.0) {
    Dll tdz = Gen::log(f.lz() / lz()) * t * .5;
    return twista(Gen::mot(tdz));
  }

  /* Orbit Control (in progress) */
  void around(const Pnt& p) { orient(); }
  /// accelerate all generators (deprecated, individual xforms do it)
  void acc() {
    dBiv *= aBiv;
    dVec *= aVec;
    dDll *= aDll;
    dTnv *= aTnv;
    dPar *= aPar;
    dMnk *= aMnk;
  }
  /*! interpolate between frames
          @param[in] f1 Start Frame
          @param[in] f2 End Frame
          @param[in] t position along interpolation [0,1]
  */
  static Frame Twist(const Frame& f1, const Frame& f2, double t);
  static Frame spin(const Frame& f1, const Frame& f2, double t);
  static Frame twist(const Frame& f1, double t);

  //			Frame twist(const State& dx) { mPos = Op::sp(mPos,dx); mRot =
  //Gen::rot_mot(dx) * mRot; orient(); }

  /* Cubic and Quadric Interpolations . . . */
  static void twist(const Frame* f, int num, double t,
                    Interpolation ctype = QUADRIC) {
    Dll* dlf = new Dll[num];
    for (int i = 0; i < num; ++i) {
      dlf[i] = f[i].dll();
    }
    Frame fr;

    switch (ctype) {
      case QUADRIC: {
        Dll dll = Interp::quadric<Dll>(dlf, num, t);
        fr.twist(Gen::mot(dll));
        break;
      }
      case CUBIC: {
        break;
      }
      case LINEAR: {
        break;
      }
      case BSPLINE: {
        break;
      }
      case NURB: {
        break;
      }
    }
  }

  /* Relative Transformations (given a second Frame and an interpolation value)
   */

  /*! Absolute Rotations */
  template <class A>
  void lookat(const A& v) {
    Vec n = Vec(mPos) - v;
    Rot r = Gen::ratio(Vec(0, 0, 1), n.unit());
    rot(r);
  }

  void euler(double y, double p, double r) {
    Biv b = Biv::xz * y + Biv::xy * r + Biv::yz * p;
    rot(Gen::rot(b));
  }

  // experiments
  //			Frame& twistb(const State& dx) { mPos = Op::sp(mPos,dx); mRot =
  //Op::sp(mRot,dx); return orient(); }

  // Feed in a Line to which to "twist" axis X Y or Z
  Frame& twistX(const Dll& dll, double t = 1.0) {
    Dll tdx = Gen::log(dll / dlx()) * t * .5;
    return twist(Gen::mot(tdx));
  }
  Frame& twistY(const Dll& dll, double t = 1.0) {
    Dll tdy = Gen::log(dll / dly()) * t * .5;
    return twist(Gen::mot(tdy));
  }
  Frame& twistZ(const Dll& dll, double t = 1.0) {
    Dll tdz = Gen::log(dll / dlz()) * t * .5;
    return twist(Gen::mot(tdz));
  }
  // Feed in a vector to which to "spin" particular axis
  Frame& spinX(const Vec& v, double t = 1.0) {
    Biv tbx = Gen::log(v / x()) * t * .5;
    return spin(Gen::rot(tbx));
  }
  Frame& spinY(const Vec& v, double t = 1.0) {
    Biv tby = Gen::log(v / y()) * t * .5;
    return spin(Gen::rot(tby));
  }
  Frame& spinZ(const Vec& v, double t = 1.0) {
    Biv tbz = Gen::log(v / z()) * t * .5;
    return spin(Gen::rot(tbz));
  }

  template <class A>
  void ang(const A& v, double dv) {
    Vec n = (Vec(mPos) - v);
    dBiv = z() ^ n.unit() * dv;
  }

  double scale() const { return mScale; }
  double& scale() { return mScale; }
  Frame& scale(double s) {
    mScale = s;
    return *this;
  }

  bool clicked();
};

}  // namespace vsr

#endif