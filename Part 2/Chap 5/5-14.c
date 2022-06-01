// 5-14.c 
#include <stdio.h>
int main(void)
{
		char c=3;
		double d=3.1;
			
		void* vx;
			
		vx=&c;   // char형 변수 c의 주소를 저장
		printf("vx의 주소 값 : %x\n", vx);
		// printf("vx의 값 : %d\n",*vx);   // 에러
			
		vx=&d;    // double형 변수 d의 주소를 저장
		printf("vx의 주소 값 : %x\n", vx);
		// printf("vx의 값 : %lf\n", *vx);   // 에러
			
		return 0;
}

