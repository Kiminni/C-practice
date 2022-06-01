// 5-15.c 
#include <stdio.h>
void main( )
{
		char c=3;
		double d=3.1;		

		void* vx=NULL;
		
		vx=&c;
		printf("vx가 저장한 값 : %x\n", vx);
		printf("*vx의 값 : %d\n", *(char*)vx);		// 강제 형변환(char *)
		
		vx=&d;
		printf("vx가 저장한 값 : %x\n", vx);
		printf("*vx의 값 : %lf\n", *(double*)vx);		// 강제 형변환(double *)
		
}
