// 5-16.c 
#include <stdio.h>
	
#ifndef ADD
	#define ADD
#endif
	
#ifndef MUL
	#define MUL
#endif
	
int main(void)
{
		double num1=3.3, num2=1.1;
		double result=0.0;
		
		#ifdef ADD
			result=num1 + num2;
			printf("ADD(µ¡¼À) °á°ú : %lf \n", result);
		#endif
		
		#ifdef MUL
			result=num1 * num2;
			printf("MUL(°ö¼À) °á°ú : %lf \n", result);
		#endif
		
		return 0;
}
