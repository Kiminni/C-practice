/*  5-14.c 
# include <stdio.h>
	
#define CODE 3
	
int main(void)
{
		double num1=3.3, num2=1.1;
		double result=0.0;
		
		#if(CODE<0)
			result=num1+num2;
			printf("µ¡¼À °á°ú : %lf \n", result);
			
		#elif(CODE==1)
			result=num1 / num2;
			printf("³ª´°¼À °á°ú : %lf \n", result);
			
		#elif(CODE==2)
			result=num1 * num2;
			printf("°ö¼À °á°ú : %lf \n", result);
			
		#elif(CODE==3)
			result=num1 - num2;
			printf("»¬¼À °á°ú : %lf \n", result);
			
		#else
			printf("ÇÁ·Î±×·¥ Á¾·á \n");
			
		#endif
		
		return 0;
}
*/

