// 6-4.c 
#include <stdio.h>
int main(void)
{
		char num1=-129;		// �ּڰ����� -1��ŭ ���� �� ����(����÷ο�)
		char num2=128;		// �ִ񰪺��� +1��ŭ ū �� ����(�����÷ο�)
		
		printf("%d \n", num1);	// 127 ���
		printf("%d \n", num2);	// -128���
		
		num1=-130;	// �ּڰ�(-128)���� -2��ŭ ���� �� ����(����÷ο�)
		num2=129;		// �ִ�(127)���� +2��ŭ ū �� ����(�����÷ο�)
		
		printf("%d \n", num1);	// 126 ���
		printf("%d \n", num2);	// -127���
		
		return 0;
}