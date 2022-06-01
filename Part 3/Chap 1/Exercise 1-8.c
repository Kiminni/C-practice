#include <stdio.h>

struct student
{
    char name[20];
    int score;
    struct student* left_link;
    struct student* right_link;
};

int main()
{
    struct student stu1 = {"Kim",90,NULL,NULL};
    struct student stu2 = {"Lee",80,NULL,NULL};
    struct student stu3 = {"Goo",60,NULL,NULL};

    stu1.left_link = &stu2;
    stu1.right_link = &stu3;

    printf("%s %d \n \n",stu1.name,stu1.score);
    printf("%s %d \n",stu2.name,stu2.score);
    printf("%s %d \n \n",stu3.name,stu3.score);
    printf("%s %d \n",stu1.left_link -> name,stu1.left_link -> score);
    printf("%s %d \n \n",stu1.right_link -> name,stu1.right_link ->score);

    printf("%s %d \n",(*stu1.left_link).name,(*stu1.left_link).score);
    printf("%s %d \n",(*stu1.right_link).name,(*stu1.right_link).score);

    return 0;

}