// 4-30.c 
#include <stdio.h>
int main(void)
{
		char array[ ]="ABCD";	
		char* p="ABCD";			// ���ڿ� ����� ���� �ּҸ� p�� ����
		
		//p[0]='X';							// ����, ���ڿ� ABCD�� ���ڿ� ���(���� �Ұ�)
		array[0]='X';					// ���� ����
		
		p=array;				// ���� ����, p�� ������ ����
		//array=array+1;		// ����, �迭 �̸��� ���(���� �Ұ�)
		printf("%s \n", p);
		p = array+1;
		printf("%s \n", array);
		printf("%s \n", p);
		
		return 0;
}