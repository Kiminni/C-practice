// 2-11.c 
#include <stdio.h>
int main(void)
{
	int age; //변수의 이름 선언 

	printf("What is your age?: ");
	scanf("%d", &age); //age라는 변수의 주소에 10진수 입력
	
	printf("Wow! Really? Are you %d years old?\n", age);

	return 0;
}