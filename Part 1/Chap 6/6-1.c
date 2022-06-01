// 6-1.c
#include <stdio.h>
int main(void)
{
		// 정수형
		char num1=10;
		short num2=20;
		int num3=30;
		long num4=40;
	
		// 실수형
		float num5=3.14;
		double num6=3.15;
		long double num7=3.17;
		
		printf("\n--------정수형 자료형과 변수의 메모리 크기--------\n");
		printf("char형의 크기 %d바이트, %d바이트 \n", sizeof(char), sizeof(num1));
		printf("short형의 크기 %d바이트, %d바이트 \n", sizeof(short), sizeof(num2));
		printf("int형의 크기 %d바이트, %d바이트 \n", sizeof(int), sizeof(num3));
		printf("long형의 크기 %d바이트, %d바이트 \n", sizeof(long), sizeof(num4));
		
		printf("\n--------실수형 자료형과 변수의 메모리 크기--------\n");
		printf("float형의 크기 %d바이트, %d바이트 \n", sizeof(float), sizeof(num5));
		printf("double형의 크기 %d바이트, %d바이트 \n", sizeof(double), sizeof(num6));
		printf("long double형의 크기 %d바이트, %d바이트 \n", sizeof(long double), sizeof(num7));
		
		return 0;
} 