// 2-5.c  
#include<stdio.h>
#include<string.h>

int main(void)
{
    char array1[10] = "Good Luck";
	char array2[10];

    strncpy(array2, array1, 5);
	array2[4] = '\0';    // 종료 문자 삽입 	
	
	puts(array2);

	return 0;
}