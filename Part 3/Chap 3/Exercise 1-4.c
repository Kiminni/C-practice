#include <stdio.h>

struct score
{
    int no;
    char name[20];
    float score1,score2,score3,total;
};
FILE* fp;
FILE* sc;

int main()
{   
    int search;
    int total,i,j,k;
    struct score mem[7] = 
    {
        {1,"Park",90.2,90.1,88.8},
        {2,"Kim",86.2,59.4,19.2},
        {3,"Yoon",81.6,86.6,68.2},
        {4,"Lee",20.2,59.4,59.2},
        {5,"Mun",11.1,22.2,33.3},
        {6,"Al",67.2,62.3,56.2},
        {7,"Ciel",52.7,62.2,65.2}
    };
    fp = fopen("Ex 1-4.txt","w");
    sc = fopen("Ex 1-4-1.txt","w");
    //fscanf(stdin,"%d",&search);

    /*
    if(j+1 == search)
    {
        fprintf("");
    }
    */
    for(int i = 0; i<7; i++)
    {
        mem[i].total = mem[i].score1+mem[i].score2+mem[i].score3;
        fprintf(stdout,"%d. %s %.1lf %.1lf %.1lf,%.1lf \n",mem[i].no,mem[i].name,mem[i].score1,mem[i].score2,mem[i].score3,mem[i].total);
        fprintf(fp,"%d. %s %.1lf %.1lf %.1lf %.1f \n",mem[i].no,mem[i].name,mem[i].score1,mem[i].score2,mem[i].score3,mem[i].total);
        fprintf(,"%d. %s %.1lf %.1lf %.1lf %.1f \n",mem[i].no,mem[i].name,mem[i].score1,mem[i].score2,mem[i].score3,mem[i].total);
    }
    fclose(fp);
    fclose(sc);
    return 0;
}