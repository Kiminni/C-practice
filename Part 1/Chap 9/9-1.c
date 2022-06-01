// 9-1.c 
#include <stdio.h>
int sum(int x, int y)
{
	int result=0;
	result=x+y;
	return result;
}
int sum2()
{
	int result=0; //return 값 있어야 함 -> 변수에 할당해야함
	return result;
}
void sum3(int a, int b)
{
	int result = 0;
}
void sumv()
{
	printf("open"); //return 값 x -> 변수 할당 필요 x(하면 에러)
	return;
}
	
int main(void)
{
	int answer= 0;
	sum(3,4);
	sum2();
	sum3(3,2);
	printf("%d \n", answer);
	sumv();
	return 0;
}
