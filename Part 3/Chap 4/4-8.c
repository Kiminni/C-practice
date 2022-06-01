// 4-8.c 
#include <stdio.h>
	
void add (int num, ...);		// 가변 인자 함수 선언
	
int main(void)
{
	int a=10, b=20, c=30;
			
	add(1, a);				    // 가변 인자 함수 호출 1
	add(2, a, b);				// 가변 인자 함수 호출 2
	add(3, a, b, c);			// 가변 인자 함수 호출 3		
	return 0;
}
	
void add(int num, ...)			// 가변 인자 함수 정의
{
	int* p=NULL;
	p = &num+1;
	
	if(num==1)		
		printf("%d %d %d \n", p[1],p[3],p[5]);	// 10 출력	
	else if (num==2)
		printf("%d %d %d \n", p[1],p[3],p[5]);	// 30 출력
	else
		printf("%d %d %d \n", p[1],p[3],p[5]);	// 60 출력

}
