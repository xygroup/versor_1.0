
#include "conga_op_Mtd_Pss.h"


double * conga_op_96_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_5(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[10] * b[1] ;
	
	
	return r;
}

double * conga_op_96_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_96_7(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[9] ;
	
	
	return r;
}

double * conga_op_96_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_96_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_96_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_96_13(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_14(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_96_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_16(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_17(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_96_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_21(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_24(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_25(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_26(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_28(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_96_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[1]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[1]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[10] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[2]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[7]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[4]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[3] * b[7]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[10] * b[4]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[10]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[3] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[4]  + a[3] * b[2]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[4]  + a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[10] * b[4]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[10]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e123ni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_43(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_44(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[3] * b[2]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[3] * b[3]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[3] * b[4]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[1] ;
	
	
	return r;
}

double * conga_op_96_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_96_46(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[7]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_47(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_48(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[10]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[10] * b[6] ;
	
	
	return r;
}

double * conga_op_96_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[3] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_96_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_53(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_54(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[3] * b[3]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_56(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[7]  + a[2] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_59(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[10]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_63(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[7]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_66(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123ni
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_68(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_96_69(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_71(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_96_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[12]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_73(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_74(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_77(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_78(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_81(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_83(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_96_84(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[7]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_87(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[10]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_90(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7]  + a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[7]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_94(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_96(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_101(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_102(double * a, double * b, double *r) { 
	
	//_e123ni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_96_103(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[4]  + a[2] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[10] * b[1] ;
	
	
	return r;
}

double * conga_op_96_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[2]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_106(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_107(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_109(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_96_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e123ni
	r[6] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_96_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_op_96_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[2]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[10] * b[7]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[12]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_96_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_122(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_96_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_96_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3] ;
	
	
	return r;
}

double * conga_op_96_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[10] * b[10]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_128(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[9] ;
	
	
	return r;
}

double * conga_op_96_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_op_96_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[9] ;
	
	
	return r;
}

double * conga_op_96_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_135(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_137(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[0] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[1] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[2] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[5]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[7]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[4] ;
	
	
	return r;
}

double * conga_op_96_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_96_139(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[10] * b[6] ;
	
	
	return r;
}

double * conga_op_96_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[0] ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[1] ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[2] ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[3] ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[4] ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[5] ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[5]  + a[5] * b[4]  * -1  + a[6] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0]  + a[10] * b[9] ;
	
	
	return r;
}

double * conga_op_96_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[7] * b[0] ;
	
	
	//_e2noni
	r[8] = a[8] * b[0] ;
	
	
	//_e3noni
	r[9] = a[9] * b[0] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[11] = a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_145(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123ni
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_149(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[3] * b[0] ;
	
	
	//_e13ni
	r[1] = a[3] * b[1] ;
	
	
	//_e23ni
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3]  + a[7] * b[2]  + a[8] * b[1]  * -1  + a[9] * b[0] ;
	
	
	return r;
}

double * conga_op_96_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_151(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_153(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e1ni
	r[3] = a[0] * b[1] ;
	
	
	//_e2ni
	r[4] = a[1] * b[1] ;
	
	
	//_e3ni
	r[5] = a[2] * b[1] ;
	
	
	//_noni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[2]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[8] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[3]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[9] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[4]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2]  + a[10] * b[0] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[10] * b[1] ;
	
	
	return r;
}

double * conga_op_96_154(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  * -1  + a[4] * b[0]  * -1 ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  * -1  + a[6] * b[0]  * -1 ;
	
	
	//_e123no
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	return r;
}

double * conga_op_96_156(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_96_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[1]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[2]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[3]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[3]  + a[5] * b[2]  * -1  + a[6] * b[1]  + a[10] * b[7]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[3] * b[4]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[3] * b[5]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1ni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_161(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3] ;
	
	
	//_e2no
	r[4] = a[1] * b[3] ;
	
	
	//_e3no
	r[5] = a[2] * b[3] ;
	
	
	//_e1ni
	r[6] = a[3] * b[0]  * -1 ;
	
	
	//_e2ni
	r[7] = a[3] * b[1]  * -1 ;
	
	
	//_e3ni
	r[8] = a[3] * b[2]  * -1 ;
	
	
	//_noni
	r[9] = a[3] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[4]  * -1  + a[4] * b[3]  * -1  + a[7] * b[1]  + a[8] * b[0]  * -1 ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[5]  * -1  + a[5] * b[3]  * -1  + a[7] * b[2]  + a[9] * b[0]  * -1 ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[6]  * -1  + a[6] * b[3]  * -1  + a[8] * b[2]  + a[9] * b[1]  * -1 ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[10] * b[3] ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_96_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  + a[9] * b[0] ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1]  + a[10] * b[0] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  + a[4] * b[6]  + a[5] * b[5]  * -1  + a[6] * b[4]  + a[7] * b[3]  + a[8] * b[2]  * -1  + a[9] * b[1]  + a[11] * b[0] ;
	
	
	return r;
}

double * conga_op_96_163(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[10] * b[3] ;
	
	
	return r;
}

double * conga_op_96_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_96_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e23noni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_96_166(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[6]  + a[3] * b[0] ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[1] ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[2] ;
	
	
	//_e123noni
	r[9] = a[4] * b[2]  + a[5] * b[1]  * -1  + a[6] * b[0]  + a[10] * b[6] ;
	
	
	return r;
}

double * conga_op_96_167(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_ni
	r[3] = a[3] * b[0] ;
	
	
	//_e12
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[7] = a[0] * b[4] ;
	
	
	//_e2no
	r[8] = a[1] * b[4] ;
	
	
	//_e3no
	r[9] = a[2] * b[4] ;
	
	
	//_e1ni
	r[10] = a[0] * b[5]  + a[3] * b[1]  * -1 ;
	
	
	//_e2ni
	r[11] = a[1] * b[5]  + a[3] * b[2]  * -1 ;
	
	
	//_e3ni
	r[12] = a[2] * b[5]  + a[3] * b[3]  * -1 ;
	
	
	//_noni
	r[13] = a[3] * b[4]  * -1 ;
	
	
	//_e12no
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1 ;
	
	
	//_e13no
	r[15] = a[0] * b[11]  + a[2] * b[9]  * -1 ;
	
	
	//_e23no
	r[16] = a[1] * b[11]  + a[2] * b[10]  * -1 ;
	
	
	//_e12ni
	r[17] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[3] * b[6]  + a[4] * b[0] ;
	
	
	//_e13ni
	r[18] = a[0] * b[14]  + a[2] * b[12]  * -1  + a[3] * b[7]  + a[5] * b[0] ;
	
	
	//_e23ni
	r[19] = a[1] * b[14]  + a[2] * b[13]  * -1  + a[3] * b[8]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[20] = a[0] * b[15]  + a[3] * b[9]  + a[7] * b[0] ;
	
	
	//_e2noni
	r[21] = a[1] * b[15]  + a[3] * b[10]  + a[8] * b[0] ;
	
	
	//_e3noni
	r[22] = a[2] * b[15]  + a[3] * b[11]  + a[9] * b[0] ;
	
	
	//_e123
	r[23] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[10] * b[0] ;
	
	
	//_e12noni
	r[24] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[16]  * -1  + a[4] * b[4]  * -1  + a[7] * b[2]  + a[8] * b[1]  * -1 ;
	
	
	//_e13noni
	r[25] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[3] * b[17]  * -1  + a[5] * b[4]  * -1  + a[7] * b[3]  + a[9] * b[1]  * -1 ;
	
	
	//_e23noni
	r[26] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[18]  * -1  + a[6] * b[4]  * -1  + a[8] * b[3]  + a[9] * b[2]  * -1 ;
	
	
	//_e123no
	r[27] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16]  + a[10] * b[4] ;
	
	
	//_e123ni
	r[28] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19]  + a[3] * b[25]  * -1  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1  + a[10] * b[5] ;
	
	
	//_e123noni
	r[29] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[29]  + a[4] * b[11]  + a[5] * b[10]  * -1  + a[6] * b[9]  + a[7] * b[8]  + a[8] * b[7]  * -1  + a[9] * b[6]  + a[10] * b[15]  + a[11] * b[0] ;
	
	
	return r;
}

