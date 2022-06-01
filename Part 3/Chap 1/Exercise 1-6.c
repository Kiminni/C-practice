#include <stdio.h>
/*
struct student
{
    char no[10];
    char name[20];
    double total;
};

int main()
{
    struct student stu = {"20101323","Park",160};
    struct student* p = NULL;
    struct student** sp = NULL;
    
    p = &stu;
    sp = &p;

    printf("%s %s %.2lf \n",stu.no,stu.name,stu.total);
    printf("%s %s %.2lf \n",(*p).no,(*p).name,(*p).total);
    printf("%s %s %.2lf \n",p->no,p->name,p->total);
    printf("%s %s %.2lf \n",(*sp)->no,(*sp)->name,(*sp)->total);
    printf("%s %s %.2lf \n",(**sp).no,(**sp).name,(**sp).total);

}
*/
struct student
{
    int id;
    char *name;
    double total;
};

int main()
{
    
    struct student stu;
    struct student* p = NULL;
    struct student** sp = NULL;

    stu.id = 20101010;
    stu.name = "Park";
    stu.total = 160;

    printf("%d %s %lf",stu.id,stu.name,stu.total);

    return 0;
}