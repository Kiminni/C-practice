//  2-12.c 
#include <stdio.h>
int main(void)
{
	int a, b, c; //a,b,c 정수형 선언 integer
	
	printf("10진수 정수 1개 입력 : "); 
	scanf("%d", &a); //a의 변수의 주소에 데이터 저장
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", a, a, a); //각 서식 문자에 따른 8,10,16진수 출력
		
	printf("16진수 정수 1개 입력 : ");
	scanf("%x", &b);//b의 변수의 주소에 데이터 저장
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", b, b, b);
		
	printf("8진수 정수 1개 입력 : ");
	scanf("%o", &c); 
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", c, c, c);
		
	return 0;
}