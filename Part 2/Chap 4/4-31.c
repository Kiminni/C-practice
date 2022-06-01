// 4-31.c
#include <stdio.h>
int main(void)
{
		char* p= &"ABCD";  // char* p="ABCD";
		char str[5]="asdf";
		printf("%d %d\n",sizeof(p),sizeof(str));
		printf("%x \n", p);
		printf("%x \n", p+1);
		printf("%x \n", p+2);
		printf("%x \n", p+3);
		printf("%x \n", p+4);
		printf("---------\n");
		printf("%s\n",p+2);
		printf("%x  %x \n", &"ABCD", p);

		
		return 0;
}
 