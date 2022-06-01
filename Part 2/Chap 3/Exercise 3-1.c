#include <stdio.h>

int main()
{
    char c = 'B';
    int num = 10;

    char* cp = NULL;
    char* ip = NULL;
    printf("%d %d\n",sizeof(num),sizeof(&num));
    cp = &c;
    ip = &num;

    *cp = 'A';
    *ip = 20;

    printf("%x %d \n",&num,num);
    printf("%x %d \n",ip,*ip);
    printf("%x %c \n",&c,c);
    printf("%x %c \n",cp,*cp);


    return 0;
}
