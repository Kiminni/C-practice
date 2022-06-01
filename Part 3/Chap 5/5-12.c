/*  5-12.c  
#include <stdio.h>
	
#define CODE 2
	
int main(void)
{
		double num1=0, num2=0, result=0;
		
		printf("½Ç¼ö µÎ °³¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
		scanf("%lf %lf", &num1, &num2);
		
		#if(CODE==1)
			result=num1 / num2;
			printf("³ª´°¼À °á°ú : %lf \n", result);
		#endif
		
		#if(CODE==2)
			result=num1 + num2;
			printf("µ¡¼À °á°ú : %lf \n", result);
		#endif
		
		#if(CODE==3)
			result=num1 * num2;
			printf("°ö¼À °á°ú : %lf \n", result);
		#endif
		
		#if(CODE==4)
			result=num1 - num2;
			printf("»¬¼À °á°ú : %lf \n", result);
		#endif
		
		return 0;
}*/
