/* 3-9.c 
#include<stdio.h>
int main(void)
{
	FILE* stream1;
	FILE* stream2;
	char buffer[50];                   
	
	stream1 = fopen("data1.txt","r");
	stream2 = fopen("data2.txt","w");

	while(!feof(stream1))     // while(feof(stream)==0)
	{
		fgets(buffer,sizeof(buffer),stream1);
		fputs(buffer,stream2);
	}

	fclose(stream1);
	fclose(stream2);

	return 0;
}*/
