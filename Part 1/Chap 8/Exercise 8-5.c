#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
/*
    if (a>b)
        {
            if(a>c)
                printf("%d",a);
            else   
                printf("%d",c);
        }
    
    if (b>c)
        {
            if(b>a)
                printf("%d",b);
            else   
                printf("%d",a);
        }
    
    if (c>a)
        {
            if(c>b)
                printf("%d",c);
            else   
                printf("%d",b);
        }
    
    if(a=b=c)
    1    printf("a = b = c",a,b,c);    
        
    else if(a=b)
        printf("a = b",a,b);

    else if(b=c)
        printf("b = c",b,c);
    
    else if(a=c)
        printf("c = a",a,c);
*/
/*    if(a>=b)
		if(a>=c)
			printf("result : %d\n", a);
		else
			printf("result : %d\n", c);
	else
		if(b>=c)
			printf("result : %d\n", b);
		else
			printf("result : %d\n", c);

*/
    if(a>=b)
        {
            if(a>=c)
                printf("%d",a);
            else
                printf("%d",c);
        
        }
    else
        if(b>=c)
            printf("%d",b);
        else
            printf("%d",c);
            
    
    return 0;
}