#include <stdio.h>
#include <string.h>

struct student
{
    char no[10];
    char name[20];
    int english;
    int korean;
};

int main()
{   
    char *p1 = NULL;
    struct student stu1;
    scanf("%s %s %d %d",stu1.no,stu1.name,&stu1.english,&stu1.korean);
    
    p1 = strstr(stu1.no,"2010");
    
    if(p1)
    {
        printf("%s %s %d %d",stu1.no,stu1.name,stu1.english,stu1.korean);
    }
    else
        printf("error");

    return 0;

}