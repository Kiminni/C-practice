/* 4-22.c 
#include <stdio.h>
int main(void)
{
		char array[ ]={'A', 'B', 'C', 'D'};	// ���� �迭 ����
		
		// ���� ���
		printf("���� ��� : %c %c %c %c \n",'A', 'B', 'C', 'D');
			
		// ���� �迭
		printf("���� �迭 ���� �� : %c %c %c %c\n", array[0], array[1], array[2], array[3]);
			
		array[0]='D';
		array[1]='C';
		array[2]='B';
		array[3]='A';
			
		printf("���� �迭 ���� �� : %c %c %c %c\n", array[0], array[1], array[2], array[3]);
		printf("���� �迭 array�� ũ�� : %d \n", sizeof(array));	// ���� �迭�� ũ�� 4
			
		return 0;
}*/