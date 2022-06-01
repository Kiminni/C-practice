#include <stdio.h>
#include <stdlib.h>

void allocate(int i);

void main () 
{
	int i;
	printf("필요한 메모리 공간 : ");
	scanf("%d", &i);
	allocate(i);
}

void allocate(int i) 
{
	//int a[i];
	int* a = (int*)malloc(i);
	printf("%d의 공간을 할당하였습니다. \n", i);
}