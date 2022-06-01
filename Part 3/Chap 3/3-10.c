/* 3-10.c
#include<stdio.h>
int main(void)
{
	int age;
	char name[20];
	
	printf("나이 입력: ");
	scanf("%d",&age);

	fflush(stdin);  // 입력 버퍼를 비운다.
	
	printf("이름를 입력: ");
	fgets(name, sizeof(name), stdin);

	printf("%d\n",age);
	printf("%s\n",name);
	
	return 0;
}
 */