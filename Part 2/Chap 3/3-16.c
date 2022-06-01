/* 3-16.c 
#include <stdio.h>
void add(int num1, int num2);
void subtract(int num1, int num2);
	
int main( )
{
		int x, z;
		char c;
		void (*pointer)(int, int);		// 함수 포인터 선언
		
		printf("add 함수의 주소 : %d \n", add);			// add 함수의 주소
		printf("subtract 함수의 주소 : %d \n", subtract);	// subtract 함수의 주소
		printf("입력: ");
		
		scanf("%d %c %d", &x, &c, &z);
		
		if(c=='+')
			pointer=add;
		
		else if(c=='-')
			pointer=subtract;
		
		else
			printf("두 번째 연산자는 '+' 또는 '-'를 입력하세요.\n");
		
		pointer(x, z);
		
		return 0;
}
	
void add(int num1, int num2)
{
		int result;
		result=num1+num2;
		printf("%d + %d = %d입니다.\n", num1, num2, result);
}
	
void subtract(int num1, int num2)
{
		int result;
		result=num1-num2;
		printf("%d - %d = %d입니다.\n", num1, num2, result);
} 
*/