/* 2-4.c 
#include<stdio.h>
#include<string.h>

int main(void)
{
    char array1[12] = "Hello world";
	char array2[12];
	char array3[12];

     strcpy(array2, array1);
	strncpy(array3, array1, 12 );
    //strncpy(array3, array1, strlen(array1)+1 );

	puts(array2);
	puts(array3);

	return 0;
} */