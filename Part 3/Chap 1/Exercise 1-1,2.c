#include <stdio.h>

struct inf
{
    int no;
    char blood[2];
    double right,left;
    int weight;
};

int main()
{
    struct inf stu[5];

    for(int i = 0; i <5; i++)
        scanf("%d %s %lf %lf %d",&stu[i].no,&stu[i].blood,&stu[i].right,&stu[i].left,&stu[i].weight);
    
    for(int i = 0; i <5; i++)
        printf("%d %s %.2lf %.2lf %d\n",stu[i].no,stu[i].blood,stu[i].right,stu[i].left,stu[i].weight);
    
    return 0;
}
