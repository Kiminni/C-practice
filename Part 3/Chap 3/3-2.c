// 3-2.c 
#include<stdio.h>
#include<conio.h>

int main(void)
{
	char ch=0;	
	printf("키 입력");
	
	while(ch != 'q')  
	{
		if(kbhit())
		{
			ch = getche();   // ch = getch();
			putch(ch);
		}	
	}

	return 0;
}
