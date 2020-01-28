#ifndef VSR_H_INCLUDED
#define VSR_H_INCLUDED

/*! \mainpage VERSOR

       \section sec_intro Introduction

       Versor is a stand-alone library for experimenting with 5D conformal
   geometric algbera [CGA] and making hypercomplex spatial environments. While
   it can be built as a strict 5D CGA multivector library, it also includes
   bindings to OpenGL and an open source Graphics User Interface library, GLV
   (which can be downloaded by running the install_dependencies.sh).

   It is an arsenal of closed form solutions to common geometric problems:
   Versor includes classes for manipulating coordinate frames and navigating
   cameras, building kinematic chains, activating generator fields, and
   deforming meshes.

   3D Euclidean, Spherical, and Hyperbolic spaces are all represented.

       Versor suggests looking at GLV ( http://mat.ucsb.edu/glv/ ) for building
   graphics user interfaces, and GAMMA ( http://mat.ucsb.edu/gamma/ ) for
   incorporating digital signal processing.

*/

#include "Elements/Aff.h"
#include "Elements/Afl.h"
#include "Elements/Afp.h"
#include "Elements/Biv.h"
#include "Elements/Bst.h"
#include "Elements/Cir.h"
#include "Elements/Daf.h"
#include "Elements/Dal.h"
#include "Elements/Dap.h"
#include "Elements/Dfp.h"
#include "Elements/Dil.h"
#include "Elements/Dll.h"
#include "Elements/Dlp.h"
#include "Elements/Drb.h"
#include "Elements/Drt.h"
#include "Elements/Drv.h"
#include "Elements/Flp.h"
#include "Elements/Hyp.h"
#include "Elements/Inf.h"
#include "Elements/Lin.h"
#include "Elements/Mnk.h"
#include "Elements/Mnv.h"
#include "Elements/Mot.h"
#include "Elements/Mtd.h"
#include "Elements/Mtt.h"
#include "Elements/Ori.h"
#include "Elements/Par.h"
#include "Elements/Pln.h"
#include "Elements/Pnt.h"
#include "Elements/Pss.h"
#include "Elements/Rot.h"
#include "Elements/Rtc.h"
#include "Elements/Rtd.h"
#include "Elements/Rtt.h"
#include "Elements/Rvd.h"
#include "Elements/Sca.h"
#include "Elements/Sph.h"
#include "Elements/Sta.h"
#include "Elements/Tnb.h"
#include "Elements/Tnt.h"
#include "Elements/Tnv.h"
#include "Elements/Tri.h"
#include "Elements/Trs.h"
#include "Elements/Trt.h"
#include "Elements/Trv.h"
#include "Elements/Tsd.h"
#include "Elements/Tst.h"
#include "Elements/Tvd.h"
#include "Elements/Tvt.h"
#include "Elements/Vec.h"
#include "Elements/versorFuncs.h"
#include "Elements/vsr_casts.h"
#include "Elements/vsr_supplement.h"

#endif