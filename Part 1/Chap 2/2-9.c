// 2-9.c
#include <stdio.h>
int main(void)
{
	printf("%f \n", 0.000123);  // 소수점 이하 6자리 
	printf("%f \n", 0.0001236); // 소수점 이하 6자리 초과니 반올림

	printf("%e \n", 0.000123); // 소수점 이하 6자리  
    printf("%E \n", 0.0001236); // 소수점 이하 6자리 초과  

    printf("%g \n", 0.000123); // 소수점 이하 6자리 -> %f 
    printf("%G \n", 0.0000123456); // 소수점 이하 6자리 초과 -> %e 

	printf("올해 우리나라 경제 성장률은 5%% 다. \n");

	return 0; 
}
 