#include <stdio.h>

int main()
{
    FILE* fp;
    fp = fopen("Exercise 1-1.txt","at+");

    for(int i = 1; i<10; i++)
        for(int j = 1; j <10; j++)
        {
            // fprintf(stdout,"%d * %d = %d \n",i,j,i*j);
            fprintf(fp,"%d * %d = %d \n",i,j,i*j);
        }

    fclose(fp);
    return 0;

}