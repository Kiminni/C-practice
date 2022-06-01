#include <stdio.h>
#include <string.h>

void shift(char *p);
int main()
{
    int i,flag;
    char string[500]; //500이하 문자열
    
    flag = scanf("%s",string);
    
    if (flag < 500)
        shift(string);
    else
        printf("Error");
    
    return 0;
}

void shift(char *p)
{
    int n,i, temp;

    for(n = 0; n < strlen(p) - 1;n++)
    {
	    temp = p[strlen(p)-1];								

	    for (i = strlen(p)-1; i > 0; i--) 								
		    p[i] = p[i-1];
	
	    p[0] = temp;
        printf("%s \n",p);
    }
}