/* 6-13.c 
#include <stdio.h>
int main(void)
{
		int num1=10;
		int num2=3;
		
		double result;
		
		result=num1/num2;
		printf("��� : %lf \n", result);				// ������ �ս� �߻�
			
		result=(double)num1/num2;					// ���� ����ȯ, �Ǽ���/������
		printf("��� : %lf \n", result);
			
		result=num1/(double)num2;					// ���� ����ȯ, ������/�Ǽ���
		printf("��� : %lf \n", result);
			
		result=(double)num1/(double)num2;	// ���� ����ȯ, �Ǽ���/�Ǽ���
		printf("��� : %lf \n", result); 
			
		return 0;
}*/