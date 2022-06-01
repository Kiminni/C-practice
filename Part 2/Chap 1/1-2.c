// 1-2.c 
#include <stdio.h>
int main(void)
{
    int array1[5] = {90,80,70,60,50};        // 배열 선언 과 동시에 저장(초기화) 
	int array2[ ]  = {90,80,70,60,50}; 
    int array3[5] = {90,80,70};  

 	printf("%d %d %d %d %d \n",array1[0],array1[1],array1[2],array1[3],array1[4]);
	printf("%d %d %d %d %d \n",array2[0],array2[1],array2[2],array2[3],array2[4]);
	printf("%d %d %d %d %d \n",array3[0],array3[1],array3[2],array3[3],array3[4]);

	return 0;
} 