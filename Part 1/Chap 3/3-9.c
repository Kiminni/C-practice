// 3-9.c 
#include <stdio.h>
int main(void)
{
		int a=3;
		int b=4;
		int c=5;

		printf("a의 값 : %d \n", a);	
		printf("b의 값 : %d \n", b);
		printf("c의 값 : %d \n", c);
		
		printf("변수 a의 시작 주소 : %x \n", &a); //a가 먼저 선언 된 상태이므로 더 큰 주소값을 갖고 있음. (벽돌!)
		printf("변수 b의 시작 주소 : %x \n", &b);		
		printf("변수 c의 시작 주소 : %x \n", &c);	
		return 0;
}

