
#include "conga_op_Trv_Vec.h"


double * conga_op_94_1(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_94_2(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_3(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_94_4(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_5(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_94_6(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_94_7(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_8(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_9(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_10(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_11(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_12(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_13(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_14(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_15(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_16(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_17(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_op_94_18(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_19(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_20(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_21(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_22(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_23(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_24(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_25(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_26(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_27(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_28(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[1]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[2]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_31(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[1] ;
	
	
	//_e2noni
	r[8] = a[1] * b[1] ;
	
	
	//_e3noni
	r[9] = a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[7]  * -1  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_94_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[3] * b[11]  * -1  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_94_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e123noni
	r[13] = a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[4] ;
	
	
	//_e2noni
	r[8] = a[1] * b[4] ;
	
	
	//_e3noni
	r[9] = a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[15]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e123no
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_43(double * a, double * b, double *r) { 
	
	//_e1noni
	r[0] = a[0] * b[0] ;
	
	
	//_e2noni
	r[1] = a[1] * b[0] ;
	
	
	//_e3noni
	r[2] = a[2] * b[0] ;
	
	
	//_e123noni
	r[3] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_44(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[3] * b[5]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[3] * b[6]  + a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[3] * b[7]  + a[6] * b[1] ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_94_45(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_46(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[3] * b[8]  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[3] * b[9]  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[3] * b[10]  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[11]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_47(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_48(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[3] * b[11]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[3] * b[11]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_50(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[3] * b[3]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_51(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_53(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_54(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_55(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[3] * b[3]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_56(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[7]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_57(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_58(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[7]  + a[2] * b[5]  * -1  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[7]  + a[2] * b[6]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_59(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_60(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_94_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[3] * b[14]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_62(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_94_63(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_65(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_66(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123ni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_68(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_69(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[3] * b[6]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_70(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[3] * b[4]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[3] * b[5]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[3] * b[6]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_71(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_72(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[12]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_73(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_74(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_75(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_76(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_77(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_78(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_79(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_80(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_81(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_82(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_83(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_84(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e1noni
	r[7] = a[0] * b[7] ;
	
	
	//_e2noni
	r[8] = a[1] * b[7] ;
	
	
	//_e3noni
	r[9] = a[2] * b[7] ;
	
	
	//_e123
	r[10] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[11] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_86(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_87(double * a, double * b, double *r) { 
	
	//_e123no
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_88(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[13]  + a[1] * b[12]  * -1  + a[2] * b[11]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_90(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_94_91(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_op_94_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_93(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[9] = a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_94(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_95(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_96(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[3] * b[10]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_97(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_98(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_99(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_100(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[3] * b[4]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[9]  + a[2] * b[7]  * -1  + a[3] * b[5]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[1] * b[9]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_101(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[3] * b[9]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_102(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[3] * b[2] ;
	
	
	//_e123no
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_103(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[0] * b[4]  + a[2] * b[2]  * -1  + a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[1] * b[4]  + a[2] * b[3]  * -1  + a[6] * b[1] ;
	
	
	return r;
}

double * conga_op_94_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_105(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6] ;
	
	
	//_e13noni
	r[7] = a[3] * b[7] ;
	
	
	//_e23noni
	r[8] = a[3] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_106(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_107(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_108(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[3] * b[4] ;
	
	
	//_e23noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123no
	r[9] = a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_109(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_110(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[0] * b[0] ;
	
	
	//_e2ni
	r[1] = a[1] * b[0] ;
	
	
	//_e3ni
	r[2] = a[2] * b[0] ;
	
	
	//_noni
	r[3] = a[3] * b[0] ;
	
	
	//_e12noni
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13noni
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23noni
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	return r;
}

double * conga_op_94_112(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_113(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_114(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_op_94_115(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_116(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_op_94_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e123noni
	r[13] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_118(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_119(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[2] * b[9]  + a[3] * b[13]  * -1  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_120(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_121(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6] ;
	
	
	//_e13noni
	r[7] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7] ;
	
	
	//_e23noni
	r[8] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_122(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_123(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_124(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_125(double * a, double * b, double *r) { 
	
	//_e123noni
	r[0] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_126(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[10]  + a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[10]  + a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_128(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[3] * b[14]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_129(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[14]  * -1  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_130(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[9]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_131(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  * -1  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_132(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_94_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_134(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6] ;
	
	
	//_e13noni
	r[7] = a[3] * b[7] ;
	
	
	//_e23noni
	r[8] = a[3] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_135(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[3] * b[13]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_94_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[14]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_137(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[4] ;
	
	
	//_e2ni
	r[7] = a[1] * b[4] ;
	
	
	//_e3ni
	r[8] = a[2] * b[4] ;
	
	
	//_noni
	r[9] = a[3] * b[4] ;
	
	
	//_e12noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[3] * b[8]  + a[4] * b[4] ;
	
	
	//_e13noni
	r[11] = a[0] * b[13]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[5] * b[4] ;
	
	
	//_e23noni
	r[12] = a[1] * b[13]  + a[2] * b[12]  * -1  + a[3] * b[10]  + a[6] * b[4] ;
	
	
	//_e123no
	r[13] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_op_94_138(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[0] * b[8]  + a[2] * b[6]  * -1  + a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[1] * b[8]  + a[2] * b[7]  * -1  + a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_139(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7]  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_140(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e12ni
	r[3] = a[0] * b[7]  + a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[4] = a[0] * b[8]  + a[2] * b[6]  * -1 ;
	
	
	//_e23ni
	r[5] = a[1] * b[8]  + a[2] * b[7]  * -1 ;
	
	
	//_e1noni
	r[6] = a[0] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[9]  + a[3] * b[7]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e123
	r[9] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	//_e123noni
	r[10] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[8]  * -1  + a[5] * b[7]  + a[6] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_op_94_141(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6] ;
	
	
	//_e13noni
	r[7] = a[3] * b[7] ;
	
	
	//_e23noni
	r[8] = a[3] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_142(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[7] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[9] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[6]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_144(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[3] * b[0] ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1  + a[3] * b[1] ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1  + a[3] * b[2] ;
	
	
	//_e123ni
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_145(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2noni
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3noni
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_146(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[3] ;
	
	
	//_e13noni
	r[7] = a[3] * b[4] ;
	
	
	//_e23noni
	r[8] = a[3] * b[5] ;
	
	
	//_e123no
	r[9] = a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e123
	r[7] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_148(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[6]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_149(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[3] * b[0] ;
	
	
	//_e13no
	r[1] = a[3] * b[1] ;
	
	
	//_e23no
	r[2] = a[3] * b[2] ;
	
	
	//_e123
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_150(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_op_94_151(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_152(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_153(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[1] ;
	
	
	//_e12noni
	r[7] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[3] * b[5]  + a[4] * b[1] ;
	
	
	//_e13noni
	r[8] = a[0] * b[10]  + a[2] * b[8]  * -1  + a[3] * b[6]  + a[5] * b[1] ;
	
	
	//_e23noni
	r[9] = a[1] * b[10]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[6] * b[1] ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  + a[1] * b[3]  * -1  + a[2] * b[2] ;
	
	
	//_e123ni
	r[11] = a[0] * b[7]  + a[1] * b[6]  * -1  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_op_94_154(double * a, double * b, double *r) { 
	
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
	r[6] = a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[3] * b[7]  * -1  + a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_155(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[0] * b[0] ;
	
	
	//_e2no
	r[1] = a[1] * b[0] ;
	
	
	//_e3no
	r[2] = a[2] * b[0] ;
	
	
	//_e12noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13noni
	r[4] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23noni
	r[5] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e123no
	r[6] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	return r;
}

double * conga_op_94_156(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e123noni
	r[3] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[5]  + a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[6]  + a[2] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[6]  + a[2] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[0] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[1] * b[7]  + a[3] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[2] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e123noni
	r[13] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[2] * b[8]  + a[4] * b[6]  * -1  + a[5] * b[5]  + a[6] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_op_94_158(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[3] * b[6] ;
	
	
	//_e13noni
	r[7] = a[3] * b[7] ;
	
	
	//_e23noni
	r[8] = a[3] * b[8] ;
	
	
	//_e123no
	r[9] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3]  + a[3] * b[9]  * -1  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_op_94_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[3] * b[13]  * -1  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_160(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[2]  * -1 ;
	
	
	//_e1ni
	r[6] = a[0] * b[3] ;
	
	
	//_e2ni
	r[7] = a[1] * b[3] ;
	
	
	//_e3ni
	r[8] = a[2] * b[3] ;
	
	
	//_noni
	r[9] = a[3] * b[3] ;
	
	
	//_e12noni
	r[10] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7]  + a[4] * b[3] ;
	
	
	//_e13noni
	r[11] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[5] * b[3] ;
	
	
	//_e23noni
	r[12] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9]  + a[6] * b[3] ;
	
	
	//_e123no
	r[13] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[14] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_94_161(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1no
	r[3] = a[0] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e2no
	r[4] = a[1] * b[3]  + a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[2] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e12noni
	r[6] = a[0] * b[11]  + a[1] * b[10]  * -1  + a[3] * b[7] ;
	
	
	//_e13noni
	r[7] = a[0] * b[12]  + a[2] * b[10]  * -1  + a[3] * b[8] ;
	
	
	//_e23noni
	r[8] = a[1] * b[12]  + a[2] * b[11]  * -1  + a[3] * b[9] ;
	
	
	//_e123no
	r[9] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4]  + a[4] * b[2]  * -1  + a[5] * b[1]  + a[6] * b[0]  * -1 ;
	
	
	//_e123ni
	r[10] = a[0] * b[9]  + a[1] * b[8]  * -1  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_op_94_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12no
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[3] * b[1]  + a[4] * b[0] ;
	
	
	//_e13no
	r[5] = a[0] * b[6]  + a[2] * b[4]  * -1  + a[3] * b[2]  + a[5] * b[0] ;
	
	
	//_e23no
	r[6] = a[1] * b[6]  + a[2] * b[5]  * -1  + a[3] * b[3]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[7] = a[0] * b[8]  + a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[8] = a[0] * b[9]  + a[2] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[1] * b[9]  + a[2] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[3] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[3] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[3] * b[9]  * -1 ;
	
	
	//_e123
	r[13] = a[0] * b[3]  + a[1] * b[2]  * -1  + a[2] * b[1] ;
	
	
	//_e123noni
	r[14] = a[0] * b[12]  + a[1] * b[11]  * -1  + a[2] * b[10]  + a[4] * b[9]  * -1  + a[5] * b[8]  + a[6] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_op_94_163(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[0] * b[1]  + a[1] * b[0]  * -1 ;
	
	
	//_e13no
	r[1] = a[0] * b[2]  + a[2] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[1] * b[2]  + a[2] * b[1]  * -1 ;
	
	
	//_e1noni
	r[3] = a[0] * b[3] ;
	
	
	//_e2noni
	r[4] = a[1] * b[3] ;
	
	
	//_e3noni
	r[5] = a[2] * b[3] ;
	
	
	//_e123noni
	r[6] = a[0] * b[6]  + a[1] * b[5]  * -1  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_op_94_164(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[0] * b[4]  + a[1] * b[3]  * -1 ;
	
	
	//_e13noni
	r[1] = a[0] * b[5]  + a[2] * b[3]  * -1 ;
	
	
	//_e23noni
	r[2] = a[1] * b[5]  + a[2] * b[4]  * -1 ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0] ;
	
	
	return r;
}

double * conga_op_94_165(double * a, double * b, double *r) { 
	
	//_e12noni
	r[0] = a[3] * b[3] ;
	
	
	//_e13noni
	r[1] = a[3] * b[4] ;
	
	
	//_e23noni
	r[2] = a[3] * b[5] ;
	
	
	//_e123no
	r[3] = a[0] * b[2]  + a[1] * b[1]  * -1  + a[2] * b[0]  + a[3] * b[6]  * -1 ;
	
	
	//_e123ni
	r[4] = a[0] * b[5]  + a[1] * b[4]  * -1  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_op_94_166(double * a, double * b, double *r) { 
	
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
	r[6] = a[0] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e2noni
	r[7] = a[1] * b[6]  + a[3] * b[4]  * -1 ;
	
	
	//_e3noni
	r[8] = a[2] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e123noni
	r[9] = a[4] * b[5]  * -1  + a[5] * b[4]  + a[6] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_op_94_167(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0] ;
	
	
	//_no
	r[3] = a[3] * b[0] ;
	
	
	//_e12
	r[4] = a[0] * b[2]  + a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[5] = a[0] * b[3]  + a[2] * b[1]  * -1 ;
	
	
	//_e23
	r[6] = a[1] * b[3]  + a[2] * b[2]  * -1 ;
	
	
	//_e1no
	r[7] = a[0] * b[4]  + a[3] * b[1]  * -1 ;
	
	
	//_e2no
	r[8] = a[1] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_e3no
	r[9] = a[2] * b[4]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[10] = a[0] * b[5] ;
	
	
	//_e2ni
	r[11] = a[1] * b[5] ;
	
	
	//_e3ni
	r[12] = a[2] * b[5] ;
	
	
	//_noni
	r[13] = a[3] * b[5] ;
	
	
	//_e12no
	r[14] = a[0] * b[10]  + a[1] * b[9]  * -1  + a[3] * b[6]  + a[4] * b[0] ;
	
	
	//_e13no
	r[15] = a[0] * b[11]  + a[2] * b[9]  * -1  + a[3] * b[7]  + a[5] * b[0] ;
	
	
	//_e23no
	r[16] = a[1] * b[11]  + a[2] * b[10]  * -1  + a[3] * b[8]  + a[6] * b[0] ;
	
	
	//_e12ni
	r[17] = a[0] * b[13]  + a[1] * b[12]  * -1 ;
	
	
	//_e13ni
	r[18] = a[0] * b[14]  + a[2] * b[12]  * -1 ;
	
	
	//_e23ni
	r[19] = a[1] * b[14]  + a[2] * b[13]  * -1 ;
	
	
	//_e1noni
	r[20] = a[0] * b[15]  + a[3] * b[12]  * -1 ;
	
	
	//_e2noni
	r[21] = a[1] * b[15]  + a[3] * b[13]  * -1 ;
	
	
	//_e3noni
	r[22] = a[2] * b[15]  + a[3] * b[14]  * -1 ;
	
	
	//_e123
	r[23] = a[0] * b[8]  + a[1] * b[7]  * -1  + a[2] * b[6] ;
	
	
	//_e12noni
	r[24] = a[0] * b[23]  + a[1] * b[22]  * -1  + a[3] * b[19]  + a[4] * b[5] ;
	
	
	//_e13noni
	r[25] = a[0] * b[24]  + a[2] * b[22]  * -1  + a[3] * b[20]  + a[5] * b[5] ;
	
	
	//_e23noni
	r[26] = a[1] * b[24]  + a[2] * b[23]  * -1  + a[3] * b[21]  + a[6] * b[5] ;
	
	
	//_e123no
	r[27] = a[0] * b[18]  + a[1] * b[17]  * -1  + a[2] * b[16]  + a[3] * b[25]  * -1  + a[4] * b[3]  * -1  + a[5] * b[2]  + a[6] * b[1]  * -1 ;
	
	
	//_e123ni
	r[28] = a[0] * b[21]  + a[1] * b[20]  * -1  + a[2] * b[19] ;
	
	
	//_e123noni
	r[29] = a[0] * b[28]  + a[1] * b[27]  * -1  + a[2] * b[26]  + a[3] * b[30]  * -1  + a[4] * b[14]  * -1  + a[5] * b[13]  + a[6] * b[12]  * -1 ;
	
	
	return r;
}

