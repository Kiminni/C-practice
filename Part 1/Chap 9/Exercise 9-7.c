#include <stdio.h>
int Alpha(char n);

int main(void)
{   
    int result;
    char num;

    scanf("%c",&num);
    result = Alpha(num);
    printf("%d\n",result);
    return 0;
}

int Alpha(char n)
{
    int num;
    if((n>64) && (n<91))
        {
            num = n-64;
            return num;
        }

    else if((n>96) && (n<123))
        {
            num = n-96;
            return num;
        }

    else 
        return 0;
}