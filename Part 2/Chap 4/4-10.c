// 4-10.c 
#include <stdio.h>
int main(void)
{
		int array[3];
		int* p=NULL;
		char a = 'a';
		printf("%d\n",sizeof(&a));
		p=array;	
		printf("%p %p\n",p,array);
		*p = 10;	
		printf("%d %d %d \n", p[0], p[1], p[2]); 
		printf("--------------\n");
		
		*(p+1)=20;
		printf("%d %d %d \n", p[0], p[1], p[2]); 
		printf("--------------\n");
		
		*(p+2)=30;
		printf("%d %d %d \n", p[0], p[1], p[2]); 
		printf("--------------\n");
		
		printf("%d %d %d \n", *p, *(p+1), *(p+2));
		printf("%d %d %d \n", p[0], p[1], p[2]);	
		printf("--------------\n");
		
		return 0;
}

