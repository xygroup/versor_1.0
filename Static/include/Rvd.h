		#ifndef RVD_H_INCLUDED
		#define RVD_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Rvd gp (const Rvd& a, const Sca& b) { 
	return Rvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv_Vec gp (const Rvd& a, const Ori& b) { 
	return Tnv_Vec (
a[0] * b[0] - a[7] * b[0],
a[1] * b[0] - a[8] * b[0],
a[2] * b[0] - a[9] * b[0],
a[3] * b[0] - a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Ori*)(&b));
}			
		 
inline Par_Drb gp (const Rvd& a, const Inf& b) { 
	return Par_Drb (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0] + a[7] * b[0],
a[1] * b[0] + a[8] * b[0],
a[2] * b[0] + a[9] * b[0],
a[3] * b[0] + a[10] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
 - a[11] * b[0],
a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Inf*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Mnk& b) { 
	return Rvd (
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Mnk*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Hyp& b) { 
	return Rtc (
 - a[4] * b[1],
 - a[5] * b[1],
 - a[6] * b[1],
a[0] * b[0] - a[7] * b[0],
a[0] * b[1] + a[7] * b[1],
a[1] * b[0] - a[8] * b[0],
a[2] * b[0] - a[9] * b[0],
a[3] * b[0] - a[10] * b[0],
a[1] * b[1] + a[8] * b[1],
a[2] * b[1] + a[9] * b[1],
a[3] * b[1] + a[10] * b[1],
a[4] * b[1],
a[5] * b[1],
a[6] * b[1],
 - a[11] * b[1],
a[11] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Hyp*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Pss& b) { 
	return Par_Tnb (
 - a[10] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[11] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[7] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Pss*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Pnt& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[4],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[4],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[4],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[4] + a[7] * b[4],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[8] * b[3] - a[11] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] - a[9] * b[3] + a[11] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[10] * b[3] - a[11] * b[0],
a[1] * b[4] + a[8] * b[4],
a[2] * b[4] + a[9] * b[4],
a[3] * b[4] + a[10] * b[4],
a[4] * b[4] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[5] * b[4] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[6] * b[4] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[11] * b[4],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0] + a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] + a[7] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[8] * b[9] + a[11] * b[8],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] + a[9] * b[9] - a[11] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[10] * b[9] + a[11] * b[6],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[4] * b[9] - a[5] * b[0] - a[6] * b[1] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5] - a[11] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] + a[5] * b[9] - a[6] * b[2] - a[7] * b[4] + a[8] * b[3] - a[10] * b[5] + a[11] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] + a[6] * b[9] - a[7] * b[5] + a[9] * b[3] + a[10] * b[4] - a[11] * b[0],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[7] * b[7] - a[8] * b[6] + a[10] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[7] * b[8] - a[9] * b[6] - a[10] * b[7],
a[0] * b[9] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[1] * b[9] - a[4] * b[7] + a[5] * b[6] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] - a[11] * b[8],
a[2] * b[9] - a[4] * b[8] + a[6] * b[6] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] + a[11] * b[7],
a[3] * b[9] - a[5] * b[8] + a[6] * b[7] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] - a[11] * b[6],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[8] * b[5] + a[9] * b[4] - a[10] * b[3] + a[11] * b[9],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[8] * b[8] - a[9] * b[7] + a[10] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[5] * b[3] + a[6] * b[4] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8] + a[11] * b[5],
a[2] * b[9] - a[4] * b[3] + a[6] * b[5] + a[7] * b[7] - a[8] * b[6] + a[10] * b[8] - a[11] * b[4],
 - a[1] * b[9] - a[4] * b[4] - a[5] * b[5] + a[7] * b[8] - a[9] * b[6] - a[10] * b[7] + a[11] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2] + a[11] * b[9],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5] - a[8] * b[3] - a[9] * b[4] - a[10] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[7] + a[5] * b[6] - a[6] * b[9] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1] - a[11] * b[8],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[8] + a[5] * b[9] + a[6] * b[6] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0] + a[11] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[9] - a[5] * b[8] + a[6] * b[7] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] - a[11] * b[6],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[9] * b[5] + a[10] * b[4],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3] + a[7] * b[4] + a[8] * b[5] - a[10] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[7] * b[5] - a[8] * b[4] + a[9] * b[3],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[5] * b[3] - a[6] * b[4] - a[10] * b[9] - a[11] * b[5],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[3] - a[6] * b[5] + a[9] * b[9] + a[11] * b[4],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[4] + a[5] * b[5] - a[8] * b[9] - a[11] * b[3],
a[0] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[3] + a[8] * b[8] - a[9] * b[7] + a[10] * b[6],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[5] - a[5] * b[4] + a[6] * b[3] + a[7] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Cir*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Sph& b) { 
	return Mtt (
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2] - a[11] * b[4],
a[6] * b[4] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
 - a[5] * b[4] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[4] * b[4] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1] + a[10] * b[3] - a[11] * b[2],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2] - a[9] * b[3] + a[11] * b[1],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2] + a[8] * b[3] - a[11] * b[0],
 - a[3] * b[4] - a[10] * b[4],
a[2] * b[4] + a[9] * b[4],
 - a[1] * b[4] - a[8] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[11] * b[4],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[4],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[4],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[7] * b[3],
a[0] * b[4] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7] - a[5] * b[6] + a[11] * b[8],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[8] - a[6] * b[6] - a[11] * b[7],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[8] - a[6] * b[7] + a[11] * b[6],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5] - a[11] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] - a[7] * b[4] + a[8] * b[3] - a[10] * b[5] + a[11] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[7] * b[5] + a[9] * b[3] + a[10] * b[4] - a[11] * b[0],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[7] * b[7] - a[8] * b[6] + a[10] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[7] * b[8] - a[9] * b[6] - a[10] * b[7],
 - a[4] * b[6] - a[5] * b[7] - a[6] * b[8] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
 - a[4] * b[7] + a[5] * b[6] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] - a[11] * b[8],
 - a[4] * b[8] + a[6] * b[6] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] + a[11] * b[7],
 - a[5] * b[8] + a[6] * b[7] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] - a[11] * b[6],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[8] * b[5] + a[9] * b[4] - a[10] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[8] * b[8] - a[9] * b[7] + a[10] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Sta*)(&b));
}			
		 
inline Mtd gp (const Rvd& a, const Drv& b) { 
	return Mtd (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[11] * b[2],
a[4] * b[2] - a[6] * b[0] - a[11] * b[1],
a[5] * b[2] - a[6] * b[1] + a[11] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Drv*)(&b));
}			
		 
inline Par_Drb gp (const Rvd& a, const Drb& b) { 
	return Par_Drb (
a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Drb*)(&b));
}			
		 
inline Mtd gp (const Rvd& a, const Drt& b) { 
	return Mtd (
 - a[11] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0] - a[10] * b[0],
a[2] * b[0] + a[9] * b[0],
 - a[1] * b[0] - a[8] * b[0],
a[11] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
a[0] * b[0] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Biv gp (const Rvd& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[7] * b[1] + a[8] * b[0] - a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[7] * b[2] + a[9] * b[0] + a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[8] * b[2] + a[9] * b[1] - a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Rvd& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv_Biv gp (const Rvd& a, const Tnt& b) { 
	return Tnv_Biv (
 - a[3] * b[0] + a[10] * b[0],
a[2] * b[0] - a[9] * b[0],
 - a[1] * b[0] + a[8] * b[0],
a[0] * b[0] - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tnt*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Lin& b) { 
	return Rtc (
a[5] * b[0] + a[6] * b[1] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] + a[7] * b[4] - a[8] * b[3] + a[10] * b[5] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[5] - a[9] * b[3] - a[10] * b[4] + a[11] * b[0],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
 - a[4] * b[4] + a[5] * b[3] - a[11] * b[5],
 - a[4] * b[5] + a[6] * b[3] + a[11] * b[4],
 - a[5] * b[5] + a[6] * b[4] - a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[8] * b[5] - a[9] * b[4] + a[10] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Lin*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Pln& b) { 
	return Mtt (
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2] - a[11] * b[3],
a[6] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
 - a[5] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[4] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
 - a[3] * b[3] - a[10] * b[3],
a[2] * b[3] + a[9] * b[3],
 - a[1] * b[3] - a[8] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[0] * b[3] + a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Pln*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Flp& b) { 
	return Mtt (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2] + a[7] * b[3],
a[4] * b[1] - a[5] * b[0] + a[8] * b[3] + a[11] * b[2],
a[4] * b[2] - a[6] * b[0] + a[9] * b[3] - a[11] * b[1],
a[5] * b[2] - a[6] * b[1] + a[10] * b[3] + a[11] * b[0],
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
a[11] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Flp*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Dfp& b) { 
	return Rtc (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
a[11] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
 - a[6] * b[3],
a[5] * b[3],
 - a[4] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[10] * b[3] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[9] * b[3] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[8] * b[3] - a[11] * b[0],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Dll& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[11] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[11] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[11] * b[3],
 - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[7] * b[4] - a[8] * b[3] + a[10] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[7] * b[5] - a[9] * b[3] - a[10] * b[4],
 - a[4] * b[3] - a[5] * b[4] - a[6] * b[5] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
 - a[4] * b[4] + a[5] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] - a[11] * b[5],
 - a[4] * b[5] + a[6] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] + a[11] * b[4],
 - a[5] * b[5] + a[6] * b[4] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] - a[11] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[8] * b[5] - a[9] * b[4] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Dll*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Dlp& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[3] + a[7] * b[3],
 - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
a[1] * b[3] + a[8] * b[3],
a[2] * b[3] + a[9] * b[3],
a[3] * b[3] + a[10] * b[3],
a[4] * b[3] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[5] * b[3] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[6] * b[3] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[11] * b[3],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0] + a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Dlp*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Vec& b) { 
	return Par_Tnb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Vec*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Biv& b) { 
	return Rvd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Biv*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Tri& b) { 
	return Par_Tnb (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[11] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
 - a[10] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[0] * b[0],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tri*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Aff& b) { 
	return Par_Tnb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] - a[8] * b[3] - a[11] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] - a[9] * b[3] + a[11] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] - a[10] * b[3] - a[11] * b[0],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Aff*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Afl& b) { 
	return Rvd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5] - a[11] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] - a[7] * b[4] + a[8] * b[3] - a[10] * b[5] + a[11] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] - a[7] * b[5] + a[9] * b[3] + a[10] * b[4] - a[11] * b[0],
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[8] * b[5] + a[9] * b[4] - a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Afl*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Afp& b) { 
	return Par_Tnb (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2] + a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
 - a[10] * b[3],
a[9] * b[3],
 - a[8] * b[3],
a[0] * b[3],
a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Afp*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Dap& b) { 
	return Rvd (
a[7] * b[3],
a[8] * b[3],
a[9] * b[3],
a[10] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[4] * b[3] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[5] * b[3] - a[7] * b[1] + a[8] * b[0] - a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[6] * b[3] - a[7] * b[2] + a[9] * b[0] + a[10] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[8] * b[2] + a[9] * b[1] - a[10] * b[0] + a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Dap*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Daf& b) { 
	return Rvd (
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[3] * b[3] - a[5] * b[0] - a[6] * b[1] + a[10] * b[3] - a[11] * b[2],
a[2] * b[3] + a[4] * b[0] - a[6] * b[2] - a[9] * b[3] + a[11] * b[1],
 - a[1] * b[3] + a[4] * b[1] + a[5] * b[2] + a[8] * b[3] - a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Daf*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Dal& b) { 
	return Par_Tnb (
a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[7] * b[4] - a[8] * b[3] + a[10] * b[5],
a[7] * b[5] - a[9] * b[3] - a[10] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[4] + a[5] * b[3] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1] - a[11] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[5] + a[6] * b[3] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0] + a[11] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[5] * b[5] + a[6] * b[4] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0] - a[11] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[8] * b[5] - a[9] * b[4] + a[10] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Dal*)(&b));
}			
		 
inline Par_Tnb gp (const Rvd& a, const Mnv& b) { 
	return Par_Tnb (
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Mnv*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Rot& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[11] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[11] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[11] * b[1],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Rot*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Mot& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[11] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[11] * b[4],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[11] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[11] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[11] * b[1],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] - a[10] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[7] * b[5] - a[8] * b[4] + a[9] * b[7] + a[10] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[7] * b[6] - a[8] * b[7] - a[9] * b[4] - a[10] * b[5],
 - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] + a[11] * b[7],
 - a[4] * b[5] + a[5] * b[4] - a[6] * b[7] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[6],
 - a[4] * b[6] + a[5] * b[7] + a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[5],
 - a[4] * b[7] - a[5] * b[6] + a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[4],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[11] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Mot*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Dil& b) { 
	return Rvd (
a[0] * b[0] + a[7] * b[1],
a[1] * b[0] + a[8] * b[1],
a[2] * b[0] + a[9] * b[1],
a[3] * b[0] + a[10] * b[1],
a[4] * b[0] + a[4] * b[1],
a[5] * b[0] + a[5] * b[1],
a[6] * b[0] + a[6] * b[1],
a[0] * b[1] + a[7] * b[0],
a[1] * b[1] + a[8] * b[0],
a[2] * b[1] + a[9] * b[0],
a[3] * b[1] + a[10] * b[0],
a[11] * b[0] + a[11] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Dil*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Trv& b) { 
	return Rvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] - a[7] * b[1] - a[8] * b[2] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] - a[7] * b[2] + a[8] * b[1] - a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] - a[7] * b[3] + a[9] * b[1] + a[10] * b[2],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[8] * b[3] + a[9] * b[2] - a[10] * b[1] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Trv*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Mtd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[7] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10] - a[11] * b[11],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[8] + a[8] * b[7] - a[9] * b[10] + a[10] * b[9] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] + a[7] * b[9] + a[8] * b[10] + a[9] * b[7] - a[10] * b[8] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[10] - a[8] * b[9] + a[9] * b[8] + a[10] * b[7] + a[11] * b[4],
a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9] - a[11] * b[3] - a[11] * b[10],
a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10] + a[11] * b[2] + a[11] * b[9],
a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7] - a[11] * b[1] - a[11] * b[8],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] - a[10] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[7] * b[5] - a[8] * b[4] + a[9] * b[11] + a[10] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[7] * b[6] - a[8] * b[11] - a[9] * b[4] - a[10] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] + a[11] * b[11],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] - a[4] * b[5] + a[5] * b[4] - a[6] * b[11] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[6],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] - a[4] * b[6] + a[5] * b[11] + a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] - a[4] * b[11] - a[5] * b[6] + a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[4],
a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8] + a[11] * b[0] + a[11] * b[7],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[7] * b[11] + a[8] * b[6] - a[9] * b[5] + a[10] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Mtd*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Trs& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[11] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] - a[11] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[11] * b[1],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[7] * b[2] - a[8] * b[1] + a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3] - a[9] * b[1] - a[10] * b[2],
 - a[4] * b[1] - a[5] * b[2] - a[6] * b[3] + a[7] * b[0],
 - a[4] * b[2] + a[5] * b[1] + a[8] * b[0] - a[11] * b[3],
 - a[4] * b[3] + a[6] * b[1] + a[9] * b[0] + a[11] * b[2],
 - a[5] * b[3] + a[6] * b[2] + a[10] * b[0] - a[11] * b[1],
a[11] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[8] * b[3] - a[9] * b[2] + a[10] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Rvd& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] - a[4] * b[4] + a[5] * b[8] + a[6] * b[9] + a[7] * b[11] + a[8] * b[12] + a[9] * b[13] - a[10] * b[15] + a[11] * b[10],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] - a[4] * b[8] - a[5] * b[4] + a[6] * b[10] + a[7] * b[12] - a[8] * b[11] + a[9] * b[15] + a[10] * b[13] - a[11] * b[9],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] - a[4] * b[9] - a[5] * b[10] - a[6] * b[4] + a[7] * b[13] - a[8] * b[15] - a[9] * b[11] - a[10] * b[12] + a[11] * b[8],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] - a[4] * b[0] - a[4] * b[11] - a[5] * b[1] - a[5] * b[12] - a[6] * b[2] - a[6] * b[13] - a[7] * b[3] + a[8] * b[5] + a[9] * b[6] + a[10] * b[7] + a[11] * b[14] + a[11] * b[15],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[7] * b[4] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6] - a[4] * b[1] - a[4] * b[12] + a[5] * b[0] + a[5] * b[11] - a[6] * b[14] - a[6] * b[15] - a[7] * b[5] - a[8] * b[3] + a[9] * b[7] - a[10] * b[6] - a[11] * b[2] - a[11] * b[13],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5] - a[4] * b[2] - a[4] * b[13] + a[5] * b[14] + a[5] * b[15] + a[6] * b[0] + a[6] * b[11] - a[7] * b[6] - a[8] * b[7] - a[9] * b[3] + a[10] * b[5] + a[11] * b[1] + a[11] * b[12],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3] - a[4] * b[14] - a[4] * b[15] - a[5] * b[2] - a[5] * b[13] + a[6] * b[1] + a[6] * b[12] - a[7] * b[7] + a[8] * b[6] - a[9] * b[5] - a[10] * b[3] - a[11] * b[0] - a[11] * b[11],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9] + a[7] * b[8] + a[8] * b[4] - a[9] * b[10] + a[10] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8] + a[7] * b[9] + a[8] * b[10] + a[9] * b[4] - a[10] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4] + a[7] * b[10] - a[8] * b[9] + a[9] * b[8] + a[10] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] + a[4] * b[4] - a[5] * b[8] - a[6] * b[9] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2] - a[10] * b[14] - a[11] * b[10],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] + a[4] * b[8] + a[5] * b[4] - a[6] * b[10] + a[7] * b[1] - a[8] * b[0] + a[9] * b[14] + a[10] * b[2] + a[11] * b[9],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] + a[4] * b[9] + a[5] * b[10] + a[6] * b[4] + a[7] * b[2] - a[8] * b[14] - a[9] * b[0] - a[10] * b[1] - a[11] * b[8],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[10] + a[5] * b[9] - a[6] * b[8] + a[7] * b[15] + a[8] * b[13] - a[9] * b[12] + a[10] * b[11] - a[11] * b[4],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[14] + a[8] * b[2] - a[9] * b[1] + a[10] * b[0] + a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13] - a[11] * b[15],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[15] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[15] - a[6] * b[7] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[15] + a[5] * b[9] - a[6] * b[8] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[14] - a[11] * b[3] - a[11] * b[13],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[7] * b[5] + a[8] * b[4] - a[9] * b[14] - a[10] * b[6] + a[11] * b[2] + a[11] * b[12],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[6] + a[8] * b[14] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1] - a[11] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[10] * b[15],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9] + a[7] * b[8] - a[8] * b[7] + a[9] * b[15] + a[10] * b[9],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8] + a[7] * b[9] - a[8] * b[15] - a[9] * b[7] - a[10] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] + a[11] * b[15],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[15] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[15] + a[6] * b[7] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[15] - a[5] * b[9] + a[6] * b[8] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[7],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[7] * b[14] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0] + a[11] * b[10],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[15] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Mtt*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Rtt& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[7] - a[11] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] - a[7] * b[5] + a[8] * b[4] - a[9] * b[7] - a[10] * b[6] + a[11] * b[2],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[6] + a[8] * b[7] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] - a[7] * b[7] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Rtt*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Rtd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[4] - a[8] * b[5] - a[9] * b[6] - a[10] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[5] + a[8] * b[4] - a[9] * b[7] + a[10] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[6] + a[8] * b[7] + a[9] * b[4] - a[10] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[7] - a[8] * b[6] + a[9] * b[5] + a[10] * b[4],
a[4] * b[0] + a[4] * b[4] - a[5] * b[1] - a[5] * b[5] - a[6] * b[2] - a[6] * b[6] - a[11] * b[3] - a[11] * b[7],
a[4] * b[1] + a[4] * b[5] + a[5] * b[0] + a[5] * b[4] - a[6] * b[3] - a[6] * b[7] + a[11] * b[2] + a[11] * b[6],
a[4] * b[2] + a[4] * b[6] + a[5] * b[3] + a[5] * b[7] + a[6] * b[0] + a[6] * b[4] - a[11] * b[1] - a[11] * b[5],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[4] * b[3] + a[4] * b[7] - a[5] * b[2] - a[5] * b[6] + a[6] * b[1] + a[6] * b[5] + a[11] * b[0] + a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Rtd*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Tvd& b) { 
	return Rvd (
a[0] * b[0] + a[7] * b[4],
a[1] * b[0] + a[8] * b[4],
a[2] * b[0] + a[9] * b[4],
a[3] * b[0] + a[10] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] + a[4] * b[4] - a[7] * b[1] - a[8] * b[2] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] + a[5] * b[4] - a[7] * b[2] + a[8] * b[1] - a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] + a[6] * b[4] - a[7] * b[3] + a[9] * b[1] + a[10] * b[2],
a[0] * b[4] + a[7] * b[0],
a[1] * b[4] + a[8] * b[0],
a[2] * b[4] + a[9] * b[0],
a[3] * b[4] + a[10] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[8] * b[3] + a[9] * b[2] - a[10] * b[1] + a[11] * b[0] + a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tvd*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Tsd& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[7] * b[4],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[8] * b[4] + a[11] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] + a[9] * b[4] - a[11] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[10] * b[4] + a[11] * b[1],
a[4] * b[0] + a[4] * b[4],
a[5] * b[0] + a[5] * b[4],
a[6] * b[0] + a[6] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[7] * b[2] - a[8] * b[1] + a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[7] * b[3] - a[9] * b[1] - a[10] * b[2],
a[0] * b[4] - a[4] * b[1] - a[5] * b[2] - a[6] * b[3] + a[7] * b[0],
a[1] * b[4] - a[4] * b[2] + a[5] * b[1] + a[8] * b[0] - a[11] * b[3],
a[2] * b[4] - a[4] * b[3] + a[6] * b[1] + a[9] * b[0] + a[11] * b[2],
a[3] * b[4] - a[5] * b[3] + a[6] * b[2] + a[10] * b[0] - a[11] * b[1],
a[11] * b[0] + a[11] * b[4],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[8] * b[3] - a[9] * b[2] + a[10] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] - a[11] * b[3] - a[11] * b[13],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[7] * b[5] + a[8] * b[4] - a[10] * b[6] + a[11] * b[2] + a[11] * b[12],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[6] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1] - a[11] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[8] - a[8] * b[7] + a[10] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[9] - a[9] * b[7] - a[10] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[7],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0] + a[11] * b[10],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Rvd& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[7] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[8] + a[8] * b[7] - a[9] * b[10] + a[10] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[9] + a[8] * b[10] + a[9] * b[7] - a[10] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[10] - a[8] * b[9] + a[9] * b[8] + a[10] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[0] + a[4] * b[7] - a[5] * b[1] - a[5] * b[8] - a[6] * b[2] - a[6] * b[9] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[11] - a[11] * b[3] - a[11] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[1] + a[4] * b[8] + a[5] * b[0] + a[5] * b[7] - a[6] * b[3] - a[6] * b[10] - a[7] * b[5] + a[8] * b[4] - a[9] * b[11] - a[10] * b[6] + a[11] * b[2] + a[11] * b[9],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[9] + a[5] * b[3] + a[5] * b[10] + a[6] * b[0] + a[6] * b[7] - a[7] * b[6] + a[8] * b[11] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1] - a[11] * b[8],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[10] - a[5] * b[2] - a[5] * b[9] + a[6] * b[1] + a[6] * b[8] - a[7] * b[11] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0] + a[11] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[14] - a[11] * b[3] - a[11] * b[13],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[7] * b[5] + a[8] * b[4] - a[9] * b[14] - a[10] * b[6] + a[11] * b[2] + a[11] * b[12],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[6] + a[8] * b[14] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1] - a[11] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[8] - a[8] * b[7] + a[10] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[9] - a[9] * b[7] - a[10] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[6] * b[7] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[7],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[7] * b[14] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0] + a[11] * b[10],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13] - a[11] * b[14],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[6] * b[14] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[5] * b[14] - a[6] * b[7] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[9] - a[6] * b[8] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[5] * b[11] - a[6] * b[2] - a[6] * b[12] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] - a[11] * b[3] - a[11] * b[13],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[4] * b[11] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[6] * b[13] - a[7] * b[5] + a[8] * b[4] - a[10] * b[6] + a[11] * b[2] + a[11] * b[12],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[4] * b[12] + a[5] * b[3] + a[5] * b[13] + a[6] * b[0] + a[6] * b[10] - a[7] * b[6] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1] - a[11] * b[11],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[10] * b[14],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9] + a[7] * b[8] - a[8] * b[7] + a[9] * b[14] + a[10] * b[9],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8] + a[7] * b[9] - a[8] * b[14] - a[9] * b[7] - a[10] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] + a[11] * b[14],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] - a[4] * b[8] + a[5] * b[7] - a[6] * b[14] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[9],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] - a[4] * b[9] + a[5] * b[14] + a[6] * b[7] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[8],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] - a[4] * b[14] - a[5] * b[9] + a[6] * b[8] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[7],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] + a[4] * b[13] - a[5] * b[2] - a[5] * b[12] + a[6] * b[1] + a[6] * b[11] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0] + a[11] * b[10],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[7] * b[14] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Rvd& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] + a[7] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] - a[5] * b[7] + a[8] * b[10] + a[11] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] - a[6] * b[7] + a[9] * b[10] - a[11] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[9] - a[6] * b[8] + a[10] * b[10] + a[11] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] + a[4] * b[0] + a[4] * b[10] - a[5] * b[1] - a[6] * b[2] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] - a[11] * b[3],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] + a[5] * b[10] - a[6] * b[3] - a[7] * b[5] + a[8] * b[4] - a[10] * b[6] + a[11] * b[2],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] + a[6] * b[10] - a[7] * b[6] + a[9] * b[4] + a[10] * b[5] - a[11] * b[1],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[7] * b[8] - a[8] * b[7] + a[10] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[7] * b[9] - a[9] * b[7] - a[10] * b[8],
a[0] * b[10] - a[4] * b[7] - a[5] * b[8] - a[6] * b[9] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[1] * b[10] - a[4] * b[8] + a[5] * b[7] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] - a[11] * b[9],
a[2] * b[10] - a[4] * b[9] + a[6] * b[7] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] + a[11] * b[8],
a[3] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] - a[11] * b[7],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4] + a[11] * b[0] + a[11] * b[10],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rvd, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rvd*)(&a),*(Bst*)(&b));
}			
		 
inline Rvd ip (const Rvd& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[7] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10],
a[0] * b[1] + a[7] * b[8],
a[0] * b[2] + a[7] * b[9],
a[0] * b[3] + a[7] * b[10],
a[0] * b[4] - a[3] * b[11] - a[5] * b[8] - a[6] * b[9],
a[0] * b[5] + a[2] * b[11] + a[4] * b[8] - a[6] * b[10],
a[0] * b[6] - a[1] * b[11] + a[4] * b[9] + a[5] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11]
);
}			
		 
		
template<> inline MVBase ip_gen<Rvd, Rvd> (const MVBase& a, const MVBase& b) { 
	return ip(*(Rvd*)(&a),*(Rvd*)(&b));
}			
		  	
template<>
inline Rvd sp (const Rvd& rvd, const Rot& rot) {					
					
const Rot& t1 = rot;
const Rvd& t2 = rvd;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Mot& mot) {					
					
const Mot& t1 = mot;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5],
t1[4] * t2[0] - t1[4] * t2[7] - t1[5] * t2[1] + t1[5] * t2[8] - t1[6] * t2[2] + t1[6] * t2[9] - t1[7] * t2[3] + t1[7] * t2[10],
t1[4] * t2[1] - t1[4] * t2[8] + t1[5] * t2[0] - t1[5] * t2[7] - t1[6] * t2[3] + t1[6] * t2[10] + t1[7] * t2[2] - t1[7] * t2[9],
t1[4] * t2[2] - t1[4] * t2[9] + t1[5] * t2[3] - t1[5] * t2[10] + t1[6] * t2[0] - t1[6] * t2[7] - t1[7] * t2[1] + t1[7] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4],
t1[4] * t2[3] - t1[4] * t2[10] - t1[5] * t2[2] + t1[5] * t2[9] + t1[6] * t2[1] - t1[6] * t2[8] + t1[7] * t2[0] - t1[7] * t2[7]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] - t3[14] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[7] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[7] - t3[6] * t5[4] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[7] + t3[5] * t5[6] - t3[6] * t5[5] + t3[14] * t5[4],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[14] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[14] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[14] * t5[1],
 - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[7],
 - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
 - t3[4] * t5[6] + t3[5] * t5[7] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
 - t3[4] * t5[7] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Dil& dil) {					
					
const Dil& t1 = dil;
const Rvd& t2 = rvd;
Rvd t3 (
t1[0] * t2[0] + t1[1] * t2[7],
t1[0] * t2[1] + t1[1] * t2[8],
t1[0] * t2[2] + t1[1] * t2[9],
t1[0] * t2[3] + t1[1] * t2[10],
t1[0] * t2[4] - t1[1] * t2[4],
t1[0] * t2[5] - t1[1] * t2[5],
t1[0] * t2[6] - t1[1] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0],
t1[0] * t2[8] + t1[1] * t2[1],
t1[0] * t2[9] + t1[1] * t2[2],
t1[0] * t2[10] + t1[1] * t2[3],
t1[0] * t2[11] - t1[1] * t2[11]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] + t3[7] * t5[1],
t3[1] * t5[0] + t3[8] * t5[1],
t3[2] * t5[0] + t3[9] * t5[1],
t3[3] * t5[0] + t3[10] * t5[1],
t3[4] * t5[0] + t3[4] * t5[1],
t3[5] * t5[0] + t3[5] * t5[1],
t3[6] * t5[0] + t3[6] * t5[1],
t3[0] * t5[1] + t3[7] * t5[0],
t3[1] * t5[1] + t3[8] * t5[0],
t3[2] * t5[1] + t3[9] * t5[0],
t3[3] * t5[1] + t3[10] * t5[0],
t3[11] * t5[0] + t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Trv& trv) {					
					
const Trv& t1 = trv;
const Rvd& t2 = rvd;
Rvd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] + t1[1] * t2[7] - t1[2] * t2[1] - t1[2] * t2[8] - t1[3] * t2[2] - t1[3] * t2[9],
t1[0] * t2[5] + t1[1] * t2[1] + t1[1] * t2[8] + t1[2] * t2[0] + t1[2] * t2[7] - t1[3] * t2[3] - t1[3] * t2[10],
t1[0] * t2[6] + t1[1] * t2[2] + t1[1] * t2[9] + t1[2] * t2[3] + t1[2] * t2[10] + t1[3] * t2[0] + t1[3] * t2[7],
t1[0] * t2[7],
t1[0] * t2[8],
t1[0] * t2[9],
t1[0] * t2[10],
t1[0] * t2[11] + t1[1] * t2[3] + t1[1] * t2[10] - t1[2] * t2[2] - t1[2] * t2[9] + t1[3] * t2[1] + t1[3] * t2[8]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Rvd (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[7] * t5[1] - t3[8] * t5[2] - t3[9] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[7] * t5[2] + t3[8] * t5[1] - t3[10] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[7] * t5[3] + t3[9] * t5[1] + t3[10] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[10] * t5[0],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] - t3[8] * t5[3] + t3[9] * t5[2] - t3[10] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[7] - t1[8] * t2[8] - t1[9] * t2[9] - t1[10] * t2[10] - t1[11] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[8] + t1[8] * t2[7] - t1[9] * t2[10] + t1[10] * t2[9] + t1[11] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[7] * t2[9] + t1[8] * t2[10] + t1[9] * t2[7] - t1[10] * t2[8] - t1[11] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[10] - t1[8] * t2[9] + t1[9] * t2[8] + t1[10] * t2[7] + t1[11] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] - t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] + t1[10] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] - t1[7] * t2[5] + t1[8] * t2[4] - t1[9] * t2[11] - t1[10] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] - t1[7] * t2[6] + t1[8] * t2[11] + t1[9] * t2[4] + t1[10] * t2[5],
t1[4] * t2[0] - t1[4] * t2[7] - t1[5] * t2[1] + t1[5] * t2[8] - t1[6] * t2[2] + t1[6] * t2[9] - t1[11] * t2[3] + t1[11] * t2[10],
t1[4] * t2[1] - t1[4] * t2[8] + t1[5] * t2[0] - t1[5] * t2[7] - t1[6] * t2[3] + t1[6] * t2[10] + t1[11] * t2[2] - t1[11] * t2[9],
t1[4] * t2[2] - t1[4] * t2[9] + t1[5] * t2[3] - t1[5] * t2[10] + t1[6] * t2[0] - t1[6] * t2[7] - t1[11] * t2[1] + t1[11] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3] - t1[11] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] + t1[11] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] - t1[11] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] + t1[11] * t2[4],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[7] * t2[11] - t1[8] * t2[6] + t1[9] * t2[5] - t1[10] * t2[4],
t1[4] * t2[3] - t1[4] * t2[10] - t1[5] * t2[2] + t1[5] * t2[9] + t1[6] * t2[1] - t1[6] * t2[8] + t1[11] * t2[0] - t1[11] * t2[7]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[4] + t3[5] * t5[5] + t3[6] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[14] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[14] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[6] - t3[5] * t5[11] - t3[6] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[11] + t3[5] * t5[6] - t3[6] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[14] * t5[4],
t3[4] * t5[0] + t3[4] * t5[7] - t3[5] * t5[1] - t3[5] * t5[8] - t3[6] * t5[2] - t3[6] * t5[9] - t3[14] * t5[3] - t3[14] * t5[10],
t3[4] * t5[1] + t3[4] * t5[8] + t3[5] * t5[0] + t3[5] * t5[7] - t3[6] * t5[3] - t3[6] * t5[10] + t3[14] * t5[2] + t3[14] * t5[9],
t3[4] * t5[2] + t3[4] * t5[9] + t3[5] * t5[3] + t3[5] * t5[10] + t3[6] * t5[0] + t3[6] * t5[7] - t3[14] * t5[1] - t3[14] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] - t3[4] * t5[4] - t3[5] * t5[5] - t3[6] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[11],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] - t3[4] * t5[6] + t3[5] * t5[11] + t3[6] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] - t3[4] * t5[11] - t3[5] * t5[6] + t3[6] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[4],
t3[4] * t5[3] + t3[4] * t5[10] - t3[5] * t5[2] - t3[5] * t5[9] + t3[6] * t5[1] + t3[6] * t5[8] + t3[14] * t5[0] + t3[14] * t5[7]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Trs& trs) {					
					
const Trs& t1 = trs;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[11],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[11] - t1[3] * t2[4],
t1[0] * t2[3] + t1[1] * t2[11] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[1] * t2[0] - t1[1] * t2[7] - t1[2] * t2[1] + t1[2] * t2[8] - t1[3] * t2[2] + t1[3] * t2[9],
t1[1] * t2[1] - t1[1] * t2[8] + t1[2] * t2[0] - t1[2] * t2[7] - t1[3] * t2[3] + t1[3] * t2[10],
t1[1] * t2[2] - t1[1] * t2[9] + t1[2] * t2[3] - t1[2] * t2[10] + t1[3] * t2[0] - t1[3] * t2[7],
t1[0] * t2[7] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[8] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[11],
t1[0] * t2[9] + t1[1] * t2[6] - t1[2] * t2[11] - t1[3] * t2[4],
t1[0] * t2[10] + t1[1] * t2[11] + t1[2] * t2[6] - t1[3] * t2[5],
t1[0] * t2[11],
t1[1] * t2[3] - t1[1] * t2[10] - t1[2] * t2[2] + t1[2] * t2[9] + t1[3] * t2[1] - t1[3] * t2[8]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[14] * t5[3],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] - t3[14] * t5[2],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[14] * t5[1],
t3[4] * t5[0],
t3[5] * t5[0],
t3[6] * t5[0],
 - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0],
 - t3[4] * t5[2] + t3[5] * t5[1] + t3[11] * t5[0] - t3[14] * t5[3],
 - t3[4] * t5[3] + t3[6] * t5[1] + t3[12] * t5[0] + t3[14] * t5[2],
 - t3[5] * t5[3] + t3[6] * t5[2] + t3[13] * t5[0] - t3[14] * t5[1],
t3[14] * t5[0]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Rvd& t2 = rvd;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[4] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[11] + t1[11] * t2[7] - t1[12] * t2[8] - t1[13] * t2[9] - t1[14] * t2[3] - t1[15] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[4] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[6] + t1[11] * t2[8] + t1[12] * t2[7] - t1[13] * t2[10] + t1[14] * t2[2] + t1[15] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[4] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[9] + t1[12] * t2[10] + t1[13] * t2[7] - t1[14] * t2[1] - t1[15] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[3] * t2[0] + t1[3] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[7] * t2[3] - t1[7] * t2[10] - t1[11] * t2[4] - t1[12] * t2[5] - t1[13] * t2[6] - t1[14] * t2[11] + t1[15] * t2[11],
t1[4] * t2[0] - t1[4] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] - t1[10] * t2[3] + t1[10] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[1] + t1[3] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[7] * t2[2] + t1[7] * t2[9] - t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[11] + t1[14] * t2[6] - t1[15] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] + t1[3] * t2[2] + t1[3] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[7] * t2[1] - t1[7] * t2[8] - t1[11] * t2[6] + t1[12] * t2[11] + t1[13] * t2[4] - t1[14] * t2[5] + t1[15] * t2[5],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[3] + t1[3] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[7] * t2[0] + t1[7] * t2[7] - t1[11] * t2[11] - t1[12] * t2[6] + t1[13] * t2[5] + t1[14] * t2[4] - t1[15] * t2[4],
t1[4] * t2[1] - t1[4] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[2] - t1[10] * t2[9],
t1[4] * t2[2] - t1[4] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] - t1[10] * t2[1] + t1[10] * t2[8],
t1[4] * t2[3] - t1[4] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[0] - t1[10] * t2[7],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] + t1[4] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[11] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[10] - t1[15] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[4] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[6] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[14] * t2[9] + t1[15] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] + t1[4] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] - t1[10] * t2[5] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[14] * t2[8] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[4] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[10] - t1[12] * t2[9] + t1[13] * t2[8] + t1[14] * t2[0] + t1[15] * t2[7],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[4] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[7] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[3] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[0] - t3[3] * t5[11] - t3[5] * t5[1] - t3[5] * t5[12] - t3[6] * t5[2] - t3[6] * t5[13] + t3[7] * t5[14] + t3[7] * t5[15] - t3[11] * t5[3] + t3[12] * t5[5] + t3[13] * t5[6] - t3[14] * t5[7] + t3[15] * t5[7],
t3[0] * t5[5] + t3[1] * t5[3] - t3[2] * t5[7] - t3[3] * t5[1] - t3[3] * t5[12] + t3[5] * t5[0] + t3[5] * t5[11] - t3[6] * t5[14] - t3[6] * t5[15] - t3[7] * t5[2] - t3[7] * t5[13] - t3[11] * t5[5] - t3[12] * t5[3] + t3[13] * t5[7] + t3[14] * t5[6] - t3[15] * t5[6],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[3] - t3[3] * t5[2] - t3[3] * t5[13] + t3[5] * t5[14] + t3[5] * t5[15] + t3[6] * t5[0] + t3[6] * t5[11] + t3[7] * t5[1] + t3[7] * t5[12] - t3[11] * t5[6] - t3[12] * t5[7] - t3[13] * t5[3] - t3[14] * t5[5] + t3[15] * t5[5],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] - t3[3] * t5[14] - t3[3] * t5[15] - t3[5] * t5[2] - t3[5] * t5[13] + t3[6] * t5[1] + t3[6] * t5[12] - t3[7] * t5[0] - t3[7] * t5[11] - t3[11] * t5[7] + t3[12] * t5[6] - t3[13] * t5[5] + t3[14] * t5[3] - t3[15] * t5[3]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10] - t1[15] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9] + t1[15] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8] - t1[15] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7] + t1[15] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[11] - t1[14] * t2[3] - t1[14] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[11] - t1[13] * t2[6] + t1[14] * t2[2] + t1[14] * t2[9],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[10] * t2[6] + t1[11] * t2[11] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1] - t1[14] * t2[8],
t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] - t1[15] * t2[3] + t1[15] * t2[10],
t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[15] * t2[2] - t1[15] * t2[9],
t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] - t1[15] * t2[1] + t1[15] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] - t1[15] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[15] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] - t1[15] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] + t1[15] * t2[4],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] - t1[10] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0] + t1[14] * t2[7],
t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[15] * t2[0] - t1[15] * t2[7]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Rvd& t2 = rvd;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[7] * t2[3] - t1[7] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[7] * t2[2] + t1[7] * t2[9],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[7] * t2[1] - t1[7] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[7] * t2[0] + t1[7] * t2[7]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] - t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] + t3[10] * t5[5] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] - t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] - t3[10] * t5[4] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Rvd& t2 = rvd;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] - t1[7] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] + t1[5] * t2[7] - t1[6] * t2[10] + t1[7] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] + t1[5] * t2[10] + t1[6] * t2[7] - t1[7] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[7] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] - t1[7] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[7] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4],
t3[4] * t5[0] + t3[4] * t5[4] - t3[5] * t5[1] - t3[5] * t5[5] - t3[6] * t5[2] - t3[6] * t5[6] - t3[11] * t5[3] - t3[11] * t5[7],
t3[4] * t5[1] + t3[4] * t5[5] + t3[5] * t5[0] + t3[5] * t5[4] - t3[6] * t5[3] - t3[6] * t5[7] + t3[11] * t5[2] + t3[11] * t5[6],
t3[4] * t5[2] + t3[4] * t5[6] + t3[5] * t5[3] + t3[5] * t5[7] + t3[6] * t5[0] + t3[6] * t5[4] - t3[11] * t5[1] - t3[11] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[3] + t3[4] * t5[7] - t3[5] * t5[2] - t3[5] * t5[6] + t3[6] * t5[1] + t3[6] * t5[5] + t3[11] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Rvd& t2 = rvd;
Rvd t3 (
t1[0] * t2[0] + t1[4] * t2[7],
t1[0] * t2[1] + t1[4] * t2[8],
t1[0] * t2[2] + t1[4] * t2[9],
t1[0] * t2[3] + t1[4] * t2[10],
t1[0] * t2[4] + t1[1] * t2[0] + t1[1] * t2[7] - t1[2] * t2[1] - t1[2] * t2[8] - t1[3] * t2[2] - t1[3] * t2[9] - t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] + t1[1] * t2[8] + t1[2] * t2[0] + t1[2] * t2[7] - t1[3] * t2[3] - t1[3] * t2[10] - t1[4] * t2[5],
t1[0] * t2[6] + t1[1] * t2[2] + t1[1] * t2[9] + t1[2] * t2[3] + t1[2] * t2[10] + t1[3] * t2[0] + t1[3] * t2[7] - t1[4] * t2[6],
t1[0] * t2[7] + t1[4] * t2[0],
t1[0] * t2[8] + t1[4] * t2[1],
t1[0] * t2[9] + t1[4] * t2[2],
t1[0] * t2[10] + t1[4] * t2[3],
t1[0] * t2[11] + t1[1] * t2[3] + t1[1] * t2[10] - t1[2] * t2[2] - t1[2] * t2[9] + t1[3] * t2[1] + t1[3] * t2[8] - t1[4] * t2[11]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[4] * t5[4] - t3[7] * t5[1] - t3[8] * t5[2] - t3[9] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[5] * t5[4] - t3[7] * t5[2] + t3[8] * t5[1] - t3[10] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[6] * t5[4] - t3[7] * t5[3] + t3[9] * t5[1] + t3[10] * t5[2],
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0],
t3[3] * t5[4] + t3[10] * t5[0],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] - t3[8] * t5[3] + t3[9] * t5[2] - t3[10] * t5[1] + t3[11] * t5[0] + t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[7],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[11] + t1[4] * t2[8],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[11] - t1[3] * t2[4] + t1[4] * t2[9],
t1[0] * t2[3] + t1[1] * t2[11] + t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[10],
t1[0] * t2[4] - t1[4] * t2[4],
t1[0] * t2[5] - t1[4] * t2[5],
t1[0] * t2[6] - t1[4] * t2[6],
t1[1] * t2[0] - t1[1] * t2[7] - t1[2] * t2[1] + t1[2] * t2[8] - t1[3] * t2[2] + t1[3] * t2[9],
t1[1] * t2[1] - t1[1] * t2[8] + t1[2] * t2[0] - t1[2] * t2[7] - t1[3] * t2[3] + t1[3] * t2[10],
t1[1] * t2[2] - t1[1] * t2[9] + t1[2] * t2[3] - t1[2] * t2[10] + t1[3] * t2[0] - t1[3] * t2[7],
t1[0] * t2[7] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[0],
t1[0] * t2[8] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[11] + t1[4] * t2[1],
t1[0] * t2[9] + t1[1] * t2[6] - t1[2] * t2[11] - t1[3] * t2[4] + t1[4] * t2[2],
t1[0] * t2[10] + t1[1] * t2[11] + t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[3],
t1[0] * t2[11] - t1[4] * t2[11],
t1[1] * t2[3] - t1[1] * t2[10] - t1[2] * t2[2] + t1[2] * t2[9] + t1[3] * t2[1] - t1[3] * t2[8]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] + t3[4] * t5[1] + t3[5] * t5[2] + t3[6] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[4] * t5[2] - t3[5] * t5[1] + t3[11] * t5[4] + t3[14] * t5[3],
t3[2] * t5[0] + t3[4] * t5[3] - t3[6] * t5[1] + t3[12] * t5[4] - t3[14] * t5[2],
t3[3] * t5[0] + t3[5] * t5[3] - t3[6] * t5[2] + t3[13] * t5[4] + t3[14] * t5[1],
t3[4] * t5[0] + t3[4] * t5[4],
t3[5] * t5[0] + t3[5] * t5[4],
t3[6] * t5[0] + t3[6] * t5[4],
t3[0] * t5[4] - t3[4] * t5[1] - t3[5] * t5[2] - t3[6] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] - t3[4] * t5[2] + t3[5] * t5[1] + t3[11] * t5[0] - t3[14] * t5[3],
t3[2] * t5[4] - t3[4] * t5[3] + t3[6] * t5[1] + t3[12] * t5[0] + t3[14] * t5[2],
t3[3] * t5[4] - t3[5] * t5[3] + t3[6] * t5[2] + t3[13] * t5[0] - t3[14] * t5[1],
t3[14] * t5[0] + t3[14] * t5[4]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Trt& trt) {					
					
const Trt& t1 = trt;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[11] - t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[10] * t2[6] + t1[11] * t2[11] + t1[12] * t2[4] + t1[13] * t2[5],
t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9],
t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10],
t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] - t1[10] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Tst& tst) {					
					
const Tst& t1 = tst;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[11] - t1[14] * t2[3] - t1[14] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[11] - t1[13] * t2[6] + t1[14] * t2[2] + t1[14] * t2[9],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[10] * t2[6] + t1[11] * t2[11] + t1[12] * t2[4] + t1[13] * t2[5] - t1[14] * t2[1] - t1[14] * t2[8],
t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9],
t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10],
t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] - t1[10] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4] + t1[14] * t2[0] + t1[14] * t2[7],
t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[14] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] + t3[13] * t5[14] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[14] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[12] * t5[14] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[1] * t5[14] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[11] * t5[14] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[10] * t5[14] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10] - t1[14] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7] + t1[14] * t2[4],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] + t1[13] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] - t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[11] - t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[10] * t2[6] + t1[11] * t2[11] + t1[12] * t2[4] + t1[13] * t2[5],
t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] - t1[14] * t2[3] + t1[14] * t2[10],
t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[14] * t2[2] - t1[14] * t2[9],
t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] - t1[14] * t2[1] + t1[14] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] - t1[14] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] + t1[14] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] - t1[14] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] + t1[14] * t2[4],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] - t1[10] * t2[11] - t1[11] * t2[6] + t1[12] * t2[5] - t1[13] * t2[4],
t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[14] * t2[0] - t1[14] * t2[7]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[5] * t5[11] - t3[6] * t5[2] - t3[6] * t5[12] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3] - t3[14] * t5[13],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[4] * t5[11] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[6] * t5[13] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2] + t3[14] * t5[12],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[4] * t5[12] + t3[5] * t5[3] + t3[5] * t5[13] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1] - t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] + t3[4] * t5[13] - t3[5] * t5[2] - t3[5] * t5[12] + t3[6] * t5[1] + t3[6] * t5[11] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rvd sp (const Rvd& rvd, const Bst& bst) {					
					
const Bst& t1 = bst;
const Rvd& t2 = rvd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[8],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[9],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[10],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[10] * t2[4],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] - t1[10] * t2[5],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[10] * t2[6],
t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9],
t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10],
t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] + t1[10] * t2[0],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[1],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] + t1[10] * t2[2],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[3],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] - t1[10] * t2[11],
t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Rvd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] + t3[4] * t5[0] + t3[4] * t5[10] - t3[5] * t5[1] - t3[6] * t5[2] - t3[10] * t5[4] - t3[11] * t5[5] - t3[12] * t5[6] - t3[14] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] + t3[5] * t5[10] - t3[6] * t5[3] - t3[10] * t5[5] + t3[11] * t5[4] - t3[13] * t5[6] + t3[14] * t5[2],
t3[0] * t5[6] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[6] * t5[10] - t3[10] * t5[6] + t3[12] * t5[4] + t3[13] * t5[5] - t3[14] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[1] * t5[10] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[2] * t5[10] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] - t3[11] * t5[6] + t3[12] * t5[5] - t3[13] * t5[4] + t3[14] * t5[0] + t3[14] * t5[10]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Vec& vec) {					
					
const Vec& t1 = vec;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Par_Tnb t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[11],
t1[0] * t3[6] - t1[1] * t3[11] - t1[2] * t3[4],
t1[0] * t3[11] + t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[7] - t1[1] * t3[8] - t1[2] * t3[9],
t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[10],
t1[0] * t3[9] + t1[1] * t3[10] + t1[2] * t3[7],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[10] - t1[1] * t3[9] + t1[2] * t3[8]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Rvd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[10] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[10] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[10] * t6[0],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2],
t4[7] * t6[1] - t4[8] * t6[0] + t4[11] * t6[2],
t4[7] * t6[2] - t4[9] * t6[0] - t4[11] * t6[1],
t4[8] * t6[2] - t4[9] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[3] * t3[0] - t1[3] * t3[7],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[11],
t1[0] * t3[6] - t1[1] * t3[11] - t1[2] * t3[4],
t1[0] * t3[11] + t1[1] * t3[6] - t1[2] * t3[5],
t1[3] * t3[1] - t1[3] * t3[8],
t1[3] * t3[2] - t1[3] * t3[9],
t1[3] * t3[3] - t1[3] * t3[10],
t1[0] * t3[7] - t1[1] * t3[8] - t1[2] * t3[9] + t1[3] * t3[4],
t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[10] + t1[3] * t3[5],
t1[0] * t3[9] + t1[1] * t3[10] + t1[2] * t3[7] + t1[3] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[11],
t1[0] * t3[10] - t1[1] * t3[9] + t1[2] * t3[8] + t1[3] * t3[11]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Rvd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[3] + t4[14] * t6[0],
 - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2],
 - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2],
 - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1],
t4[3] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[5] * t6[3] + t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[6] * t6[3] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[7] * t6[3] + t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0],
 - t4[5] * t6[2] + t4[6] * t6[1] - t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Pln& pln) {					
					
const Pln& t1 = pln;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10] - t1[3] * t3[11],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9] + t1[3] * t3[6],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8] - t1[3] * t3[5],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] + t1[2] * t3[11],
t1[0] * t3[4] - t1[1] * t3[11] - t1[2] * t3[6],
t1[0] * t3[11] + t1[1] * t3[4] + t1[2] * t3[5],
 - t1[3] * t3[3] + t1[3] * t3[10],
t1[3] * t3[2] - t1[3] * t3[9],
 - t1[3] * t3[1] + t1[3] * t3[8],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] - t1[3] * t3[11],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[3] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4],
t1[3] * t3[0] - t1[3] * t3[7]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Rvd (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[3],
t4[6] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[14] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[3],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Dll& dll) {					
					
const Dll& t1 = dll;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[11],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[4] * t3[11] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[11] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5],
t1[3] * t3[0] - t1[3] * t3[7] - t1[4] * t3[1] + t1[4] * t3[8] - t1[5] * t3[2] + t1[5] * t3[9],
t1[3] * t3[1] - t1[3] * t3[8] + t1[4] * t3[0] - t1[4] * t3[7] - t1[5] * t3[3] + t1[5] * t3[10],
t1[3] * t3[2] - t1[3] * t3[9] + t1[4] * t3[3] - t1[4] * t3[10] + t1[5] * t3[0] - t1[5] * t3[7],
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[11],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8] + t1[3] * t3[6] - t1[4] * t3[11] - t1[5] * t3[4],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[11] + t1[4] * t3[6] - t1[5] * t3[5],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4],
t1[3] * t3[3] - t1[3] * t3[10] - t1[4] * t3[2] + t1[4] * t3[9] + t1[5] * t3[1] - t1[5] * t3[8]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Rvd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[4] - t4[5] * t6[3] + t4[14] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[5] - t4[6] * t6[3] - t4[14] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[5] - t4[6] * t6[4] + t4[14] * t6[3],
 - t4[5] * t6[0] - t4[6] * t6[1] - t4[14] * t6[2],
t4[4] * t6[0] - t4[6] * t6[2] + t4[14] * t6[1],
t4[4] * t6[1] + t4[5] * t6[2] - t4[14] * t6[0],
 - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2],
 - t4[4] * t6[4] + t4[5] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[5],
 - t4[4] * t6[5] + t4[6] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[4],
 - t4[5] * t6[5] + t4[6] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] - t4[14] * t6[3],
t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Lin& lin) {					
					
const Lin& t1 = lin;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Rtc t4 (
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] + t1[3] * t3[7] - t1[4] * t3[8] - t1[5] * t3[9],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[3] * t3[8] + t1[4] * t3[7] - t1[5] * t3[10],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[9] + t1[4] * t3[10] + t1[5] * t3[7],
 - t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6],
 - t1[0] * t3[1] + t1[0] * t3[8] - t1[1] * t3[2] + t1[1] * t3[9] - t1[2] * t3[3] + t1[2] * t3[10],
 - t1[3] * t3[5] + t1[4] * t3[4] - t1[5] * t3[11],
 - t1[3] * t3[6] + t1[4] * t3[11] + t1[5] * t3[4],
 - t1[3] * t3[11] - t1[4] * t3[6] + t1[5] * t3[5],
t1[0] * t3[0] - t1[0] * t3[7] - t1[1] * t3[3] + t1[1] * t3[10] + t1[2] * t3[2] - t1[2] * t3[9],
t1[0] * t3[3] - t1[0] * t3[10] + t1[1] * t3[0] - t1[1] * t3[7] - t1[2] * t3[1] + t1[2] * t3[8],
 - t1[0] * t3[2] + t1[0] * t3[9] + t1[1] * t3[1] - t1[1] * t3[8] + t1[2] * t3[0] - t1[2] * t3[7],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] + t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[10] - t1[4] * t3[9] + t1[5] * t3[8],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Rvd (
t4[5] * t6[0] + t4[6] * t6[1] + t4[7] * t6[2] + t4[11] * t6[3] + t4[12] * t6[4] + t4[13] * t6[5],
 - t4[3] * t6[0] + t4[6] * t6[2] - t4[7] * t6[1] + t4[11] * t6[4] - t4[12] * t6[3] + t4[15] * t6[5],
 - t4[3] * t6[1] - t4[5] * t6[2] + t4[7] * t6[0] + t4[11] * t6[5] - t4[13] * t6[3] - t4[15] * t6[4],
 - t4[3] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[12] * t6[5] - t4[13] * t6[4] + t4[15] * t6[3],
 - t4[3] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5],
 - t4[3] * t6[4] + t4[5] * t6[3] - t4[7] * t6[5],
 - t4[3] * t6[5] + t4[6] * t6[3] + t4[7] * t6[4],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] - t4[7] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[0] - t4[6] * t6[2] + t4[7] * t6[1] + t4[14] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] + t4[3] * t6[1] + t4[5] * t6[2] - t4[7] * t6[0] - t4[14] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] + t4[14] * t6[3],
 - t4[5] * t6[5] + t4[6] * t6[4] - t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[4] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[4] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[4] * t3[6],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[3] * t3[0] + t1[3] * t3[7],
t1[4] * t3[0] - t1[4] * t3[7],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[11] + t1[3] * t3[1] + t1[3] * t3[8],
t1[0] * t3[6] - t1[1] * t3[11] - t1[2] * t3[4] + t1[3] * t3[2] + t1[3] * t3[9],
t1[0] * t3[11] + t1[1] * t3[6] - t1[2] * t3[5] + t1[3] * t3[3] + t1[3] * t3[10],
t1[4] * t3[1] - t1[4] * t3[8],
t1[4] * t3[2] - t1[4] * t3[9],
t1[4] * t3[3] - t1[4] * t3[10],
t1[0] * t3[7] - t1[1] * t3[8] - t1[2] * t3[9] + t1[4] * t3[4],
t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[10] + t1[4] * t3[5],
t1[0] * t3[9] + t1[1] * t3[10] + t1[2] * t3[7] + t1[4] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[4] * t3[11],
t1[0] * t3[10] - t1[1] * t3[9] + t1[2] * t3[8] + t1[4] * t3[11]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Rvd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] - t4[11] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] - t4[12] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] - t4[13] * t6[3],
t4[3] * t6[4] - t4[4] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[5] * t6[4] - t4[8] * t6[3] + t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[6] * t6[4] - t4[9] * t6[3] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[7] * t6[4] - t4[10] * t6[3] + t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0],
 - t4[5] * t6[2] + t4[6] * t6[1] - t4[7] * t6[0] + t4[14] * t6[3] - t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Par& par) {					
					
const Par& t1 = par;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[7],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[6] * t3[5] - t1[7] * t3[4] + t1[8] * t3[11] + t1[9] * t3[8],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[6] * t3[6] - t1[7] * t3[11] - t1[8] * t3[4] + t1[9] * t3[9],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[6] * t3[11] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[10],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] + t1[3] * t3[0] + t1[3] * t3[7] - t1[4] * t3[1] - t1[4] * t3[8] - t1[5] * t3[2] - t1[5] * t3[9] - t1[9] * t3[4],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[3] * t3[1] + t1[3] * t3[8] + t1[4] * t3[0] + t1[4] * t3[7] - t1[5] * t3[3] - t1[5] * t3[10] - t1[9] * t3[5],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] + t1[3] * t3[9] + t1[4] * t3[3] + t1[4] * t3[10] + t1[5] * t3[0] + t1[5] * t3[7] - t1[9] * t3[6],
t1[6] * t3[0] - t1[6] * t3[7] - t1[7] * t3[1] + t1[7] * t3[8] - t1[8] * t3[2] + t1[8] * t3[9],
t1[6] * t3[1] - t1[6] * t3[8] + t1[7] * t3[0] - t1[7] * t3[7] - t1[8] * t3[3] + t1[8] * t3[10],
t1[6] * t3[2] - t1[6] * t3[9] + t1[7] * t3[3] - t1[7] * t3[10] + t1[8] * t3[0] - t1[8] * t3[7],
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] + t1[9] * t3[0],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9] + t1[6] * t3[5] - t1[7] * t3[4] + t1[8] * t3[11] + t1[9] * t3[1],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8] + t1[6] * t3[6] - t1[7] * t3[11] - t1[8] * t3[4] + t1[9] * t3[2],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7] + t1[6] * t3[11] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[3],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] + t1[3] * t3[10] - t1[4] * t3[2] - t1[4] * t3[9] + t1[5] * t3[1] + t1[5] * t3[8] - t1[9] * t3[11],
t1[6] * t3[3] - t1[6] * t3[10] - t1[7] * t3[2] + t1[7] * t3[9] + t1[8] * t3[1] - t1[8] * t3[8]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Rvd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] + t4[4] * t6[9] - t4[5] * t6[0] - t4[6] * t6[1] - t4[10] * t6[3] - t4[11] * t6[4] - t4[12] * t6[5] - t4[14] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] + t4[5] * t6[9] - t4[6] * t6[2] - t4[10] * t6[4] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[6] * t6[9] - t4[10] * t6[5] + t4[12] * t6[3] + t4[13] * t6[4] - t4[14] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2],
t4[1] * t6[9] - t4[4] * t6[7] + t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[8] + t4[15] * t6[5],
t4[2] * t6[9] - t4[4] * t6[8] + t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[7] - t4[15] * t6[4],
t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] - t4[14] * t6[6] + t4[15] * t6[3],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[11] * t6[5] + t4[12] * t6[4] - t4[13] * t6[3] + t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Cir& cir) {					
					
const Cir& t1 = cir;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Rtc t4 (
t1[3] * t3[5] + t1[4] * t3[6] - t1[5] * t3[11] + t1[6] * t3[7] - t1[7] * t3[8] - t1[8] * t3[9] - t1[9] * t3[3],
 - t1[3] * t3[4] + t1[4] * t3[11] + t1[5] * t3[6] + t1[6] * t3[8] + t1[7] * t3[7] - t1[8] * t3[10] + t1[9] * t3[2],
 - t1[3] * t3[11] - t1[4] * t3[4] - t1[5] * t3[5] + t1[6] * t3[9] + t1[7] * t3[10] + t1[8] * t3[7] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[0] * t3[8] - t1[1] * t3[2] - t1[1] * t3[9] - t1[2] * t3[3] - t1[2] * t3[10] - t1[6] * t3[4] - t1[7] * t3[5] - t1[8] * t3[6] - t1[9] * t3[11],
 - t1[3] * t3[1] + t1[3] * t3[8] - t1[4] * t3[2] + t1[4] * t3[9] - t1[5] * t3[3] + t1[5] * t3[10],
t1[0] * t3[0] + t1[0] * t3[7] - t1[1] * t3[3] - t1[1] * t3[10] + t1[2] * t3[2] + t1[2] * t3[9] - t1[6] * t3[5] + t1[7] * t3[4] - t1[8] * t3[11] + t1[9] * t3[6],
t1[0] * t3[3] + t1[0] * t3[10] + t1[1] * t3[0] + t1[1] * t3[7] - t1[2] * t3[1] - t1[2] * t3[8] - t1[6] * t3[6] + t1[7] * t3[11] + t1[8] * t3[4] - t1[9] * t3[5],
 - t1[0] * t3[2] - t1[0] * t3[9] + t1[1] * t3[1] + t1[1] * t3[8] + t1[2] * t3[0] + t1[2] * t3[7] - t1[6] * t3[11] - t1[7] * t3[6] + t1[8] * t3[5] + t1[9] * t3[4],
t1[3] * t3[0] - t1[3] * t3[7] - t1[4] * t3[3] + t1[4] * t3[10] + t1[5] * t3[2] - t1[5] * t3[9],
t1[3] * t3[3] - t1[3] * t3[10] + t1[4] * t3[0] - t1[4] * t3[7] - t1[5] * t3[1] + t1[5] * t3[8],
 - t1[3] * t3[2] + t1[3] * t3[9] + t1[4] * t3[1] - t1[4] * t3[8] + t1[5] * t3[0] - t1[5] * t3[7],
t1[3] * t3[5] + t1[4] * t3[6] - t1[5] * t3[11] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] - t1[9] * t3[10],
 - t1[3] * t3[4] + t1[4] * t3[11] + t1[5] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3] + t1[9] * t3[9],
 - t1[3] * t3[11] - t1[4] * t3[4] - t1[5] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0] - t1[9] * t3[8],
t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[6] * t3[10] - t1[7] * t3[9] + t1[8] * t3[8] + t1[9] * t3[0],
t1[3] * t3[6] - t1[4] * t3[5] + t1[5] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[7]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Rvd (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[9] + t4[12] * t6[0] + t4[13] * t6[1] - t4[14] * t6[2] + t4[15] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] - t4[3] * t6[7] + t4[5] * t6[6] - t4[6] * t6[9] - t4[7] * t6[8] - t4[11] * t6[0] + t4[13] * t6[2] + t4[14] * t6[1] - t4[15] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[8] + t4[5] * t6[9] + t4[6] * t6[6] + t4[7] * t6[7] - t4[11] * t6[1] - t4[12] * t6[2] - t4[14] * t6[0] + t4[15] * t6[0],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] - t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] - t4[15] * t6[9],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] - t4[7] * t6[6] - t4[11] * t6[2] + t4[12] * t6[1] - t4[13] * t6[0]
);

}
		
	
	  	
template<>
inline Rvd re (const Rvd& rvd, const Sph& sph) {					
					
const Sph& t1 = sph;
const Rvd& t2 = rvd;
Rvd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10] - t1[4] * t3[11],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9] + t1[4] * t3[6],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8] - t1[4] * t3[5],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7] + t1[4] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] + t1[2] * t3[11] - t1[3] * t3[3] - t1[3] * t3[10],
t1[0] * t3[4] - t1[1] * t3[11] - t1[2] * t3[6] + t1[3] * t3[2] + t1[3] * t3[9],
t1[0] * t3[11] + t1[1] * t3[4] + t1[2] * t3[5] - t1[3] * t3[1] - t1[3] * t3[8],
 - t1[4] * t3[3] + t1[4] * t3[10],
t1[4] * t3[2] - t1[4] * t3[9],
 - t1[4] * t3[1] + t1[4] * t3[8],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] - t1[4] * t3[11],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[4] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] - t1[4] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[4] * t3[4],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4] + t1[3] * t3[0] + t1[3] * t3[7],
t1[4] * t3[0] - t1[4] * t3[7]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Rvd (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[4] - t4[15] * t6[3],
t4[6] * t6[4] + t4[9] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[4] - t4[8] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[4] + t4[7] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[3] * t6[3] - t4[5] * t6[0] - t4[6] * t6[1] + t4[13] * t6[3] - t4[14] * t6[2],
t4[2] * t6[3] + t4[4] * t6[0] - t4[6] * t6[2] - t4[12] * t6[3] + t4[14] * t6[1],
 - t4[1] * t6[3] + t4[4] * t6[1] + t4[5] * t6[2] + t4[11] * t6[3] - t4[14] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[14] * t6[4] - t4[15] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[4] + t4[9] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[4] + t4[7] * t6[3],
t4[0] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] - t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	