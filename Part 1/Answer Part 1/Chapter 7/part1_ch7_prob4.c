#include <stdio.h>
int main(void)
{
	int num, i;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num); 

	for (i = 1; i < 10; i++)
		printf("%d * %d = %d입니다. \n", num, i, num*i);
	
	return 0;

}