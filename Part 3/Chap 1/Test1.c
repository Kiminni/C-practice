#include <stdio.h>

struct student
{
    char no[10];
    char name[20];
    double total;
};

int main()
{
    /*struct student stu[3];

    for(int i = 0; i<3; i++)
        scanf("%s %s %lf",stu[i].no,stu[i].name,&stu[i].total);
    
     for(int i = 0; i<3; i++)
        printf("%s %s %.2lf \n",stu[i].no,stu[i].name,stu[i].total);
    */
   char a[] = "ABCD";
   char *p = NULL;
   p = a;
   printf("%s",p);
    return 0;

}