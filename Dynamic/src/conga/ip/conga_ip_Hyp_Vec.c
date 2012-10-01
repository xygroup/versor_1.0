
#include "conga_ip_Hyp_Vec.h"


double * conga_ip_122_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_6(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[0] ;
	
	
	//_e23no
	r[2] = a[0] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[5] * b[0] ;
	
	
	//_e13ni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e23ni
	r[5] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_122_7(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_8(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_9(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_122_10(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_11(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_12(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_13(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_14(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_122_15(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_16(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_17(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_122_18(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_19(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_20(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_21(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_22(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_26(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_27(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_28(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_30(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_32(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_33(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_34(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_35(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[3] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2ni
	r[4] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[5] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_36(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_37(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_38(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[4] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[5] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[6] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_39(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_40(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[15]  + a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[15]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[15]  + a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_41(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_42(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_43(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[3] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_44(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_45(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12no
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[3] = a[1] * b[3] ;
	
	
	//_e23no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[3] ;
	
	
	//_e13ni
	r[6] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_46(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_47(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[15]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[15] ;
	
	
	//_e23no
	r[7] = a[0] * b[15]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[15] ;
	
	
	//_e13ni
	r[9] = a[4] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_122_48(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[7] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[8] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_49(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[5] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_50(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_51(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[3] ;
	
	
	//_e13
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_52(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_53(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_54(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_122_56(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_57(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_58(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_59(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[3] ;
	
	
	//_e13ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_60(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_61(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_62(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_122_63(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_64(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_65(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_66(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[6] ;
	
	
	//_e13
	r[1] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[6] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_67(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  * -1  + a[2] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_68(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_69(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_70(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_71(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_72(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_122_73(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[1]  * -1 ;
	
	
	//_e13no
	r[1] = a[1] * b[1] ;
	
	
	//_e23no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[5] * b[1] ;
	
	
	//_e13ni
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e23ni
	r[5] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_122_74(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[7]  + a[5] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_75(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e1ni
	r[4] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[5] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[6] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_76(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_122_77(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[6] ;
	
	
	//_e13
	r[1] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[6] ;
	
	
	//_e1no
	r[3] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[6] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[7] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[8] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_78(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_79(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_80(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_81(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[3] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[4] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[5] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_82(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_83(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[4] ;
	
	
	//_e13ni
	r[7] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_122_84(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_122_85(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[11] ;
	
	
	//_e13
	r[2] = a[4] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[7] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_86(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_87(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[3] ;
	
	
	//_e23no
	r[5] = a[0] * b[3]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[3] ;
	
	
	//_e13ni
	r[7] = a[4] * b[3]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_88(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_89(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[14] ;
	
	
	//_e13
	r[2] = a[4] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e1ni
	r[7] = a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e2ni
	r[8] = a[3] * b[11]  * -1  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_90(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_122_91(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_92(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_93(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_94(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_95(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_96(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_122_97(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_122_98(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[9] ;
	
	
	//_e13
	r[2] = a[4] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_99(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_122_100(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  * -1  + a[2] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9] ;
	
	
	return r;
}

double * conga_ip_122_101(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[7] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_102(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[4]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[4] ;
	
	
	//_e23no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[4] ;
	
	
	//_e13ni
	r[7] = a[4] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_122_103(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[2]  * -1  + a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[2]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	return r;
}

double * conga_ip_122_104(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[4] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[5] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_105(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[9] ;
	
	
	//_e23no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[9] ;
	
	
	//_e13ni
	r[7] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_122_106(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[4]  + a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[4]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[4]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_107(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e1ni
	r[4] = a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e2ni
	r[5] = a[3] * b[6]  * -1  + a[5] * b[8] ;
	
	
	//_e3ni
	r[6] = a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_108(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_109(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_110(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_111(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_112(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  * -1  + a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_113(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[3] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[4] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[5] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_114(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_115(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[5] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[6] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_116(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[1]  + a[5] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[1]  + a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_122_117(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_118(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_122_119(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[5] * b[12] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[12] ;
	
	
	//_e1no
	r[4] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e1ni
	r[7] = a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e2ni
	r[8] = a[3] * b[9]  * -1  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_120(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[7] ;
	
	
	//_e23no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[7] ;
	
	
	//_e13ni
	r[7] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_121(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	return r;
}

double * conga_ip_122_122(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_123(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_124(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	return r;
}

double * conga_ip_122_125(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[6] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2ni
	r[7] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3ni
	r[8] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_126(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	return r;
}

double * conga_ip_122_127(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_128(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	return r;
}

double * conga_ip_122_129(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_130(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[10] ;
	
	
	//_e13ni
	r[9] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_131(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_132(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_122_133(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_134(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_135(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	return r;
}

double * conga_ip_122_136(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_137(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[8]  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  * -1  + a[2] * b[10]  + a[3] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  * -1  + a[1] * b[10]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[11]  * -1  + a[1] * b[12]  * -1  + a[2] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[11]  + a[4] * b[12]  + a[5] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[14] ;
	
	
	//_e23no
	r[7] = a[0] * b[14]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[14] ;
	
	
	//_e13ni
	r[9] = a[4] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_122_138(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[9]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[9] ;
	
	
	//_e13ni
	r[9] = a[4] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_122_139(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e1ni
	r[4] = a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e2ni
	r[5] = a[3] * b[7]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[6] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_140(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_141(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_142(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[1] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12no
	r[2] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[3] = a[1] * b[7] ;
	
	
	//_e23no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[5] = a[5] * b[7] ;
	
	
	//_e13ni
	r[6] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_143(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_144(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[2] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  * -1  + a[2] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[6] ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_145(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_146(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_147(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_148(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_149(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[5] * b[3] ;
	
	
	//_e13
	r[1] = a[4] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_122_150(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_151(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[7] ;
	
	
	//_e13
	r[2] = a[4] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_152(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[7]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[7] ;
	
	
	//_e13ni
	r[9] = a[4] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_122_153(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[5]  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  * -1  + a[2] * b[7]  + a[3] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  * -1  + a[1] * b[7]  * -1  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e12no
	r[5] = a[2] * b[11]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[11]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[11] ;
	
	
	//_e13ni
	r[9] = a[4] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_122_154(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_155(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e2
	r[1] = a[3] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_156(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[5] * b[6] ;
	
	
	//_e13
	r[2] = a[4] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_157(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1no
	r[1] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e1ni
	r[4] = a[4] * b[8]  + a[5] * b[9] ;
	
	
	//_e2ni
	r[5] = a[3] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_158(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[6]  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[6]  * -1  + a[2] * b[8]  + a[3] * b[3]  * -1  + a[5] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[7]  * -1  + a[1] * b[8]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[10]  * -1 ;
	
	
	//_e13no
	r[4] = a[1] * b[10] ;
	
	
	//_e23no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e12ni
	r[6] = a[5] * b[10] ;
	
	
	//_e13ni
	r[7] = a[4] * b[10]  * -1 ;
	
	
	//_e23ni
	r[8] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_122_159(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_160(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_122_161(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[7]  + a[2] * b[8]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  * -1  + a[2] * b[9]  + a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  * -1  + a[1] * b[9]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[10]  * -1  + a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[10]  + a[4] * b[11]  + a[5] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[13] ;
	
	
	//_e23no
	r[7] = a[0] * b[13]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[13] ;
	
	
	//_e13ni
	r[9] = a[4] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_122_162(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[5] * b[13] ;
	
	
	//_e13
	r[2] = a[4] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e1ni
	r[7] = a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e2ni
	r[8] = a[3] * b[10]  * -1  + a[5] * b[12] ;
	
	
	//_e3ni
	r[9] = a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_163(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[4] = a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  * -1  + a[5] * b[6] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_164(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  * -1  + a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6]  * -1 ;
	
	
	//_e13no
	r[6] = a[1] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[6]  * -1 ;
	
	
	//_e12ni
	r[8] = a[5] * b[6] ;
	
	
	//_e13ni
	r[9] = a[4] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_122_165(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[2] * b[4]  + a[4] * b[0]  + a[5] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[0]  * -1  + a[5] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[4]  * -1  + a[1] * b[5]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_122_166(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	return r;
}

double * conga_ip_122_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[11] ;
	
	
	//_e1
	r[1] = a[1] * b[19]  + a[2] * b[20]  + a[4] * b[16]  + a[5] * b[17] ;
	
	
	//_e2
	r[2] = a[0] * b[19]  * -1  + a[2] * b[21]  + a[3] * b[16]  * -1  + a[5] * b[18] ;
	
	
	//_e3
	r[3] = a[0] * b[20]  * -1  + a[1] * b[21]  * -1  + a[3] * b[17]  * -1  + a[4] * b[18]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[22]  * -1  + a[1] * b[23]  * -1  + a[2] * b[24]  * -1 ;
	
	
	//_ni
	r[5] = a[3] * b[22]  + a[4] * b[23]  + a[5] * b[24] ;
	
	
	//_e12
	r[6] = a[2] * b[30]  + a[5] * b[29] ;
	
	
	//_e13
	r[7] = a[1] * b[30]  * -1  + a[4] * b[29]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[30]  + a[3] * b[29] ;
	
	
	//_e1no
	r[9] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e1ni
	r[12] = a[4] * b[26]  + a[5] * b[27] ;
	
	
	//_e2ni
	r[13] = a[3] * b[26]  * -1  + a[5] * b[28] ;
	
	
	//_e3ni
	r[14] = a[3] * b[27]  * -1  + a[4] * b[28]  * -1 ;
	
	
	//_e12no
	r[15] = a[2] * b[31]  * -1 ;
	
	
	//_e13no
	r[16] = a[1] * b[31] ;
	
	
	//_e23no
	r[17] = a[0] * b[31]  * -1 ;
	
	
	//_e12ni
	r[18] = a[5] * b[31] ;
	
	
	//_e13ni
	r[19] = a[4] * b[31]  * -1 ;
	
	
	//_e23ni
	r[20] = a[3] * b[31] ;
	
	
	return r;
}

