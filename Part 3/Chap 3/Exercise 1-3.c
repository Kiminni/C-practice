#include <stdio.h>
#include <string.h>
FILE* fp1;
FILE* fp2;
int main()
{
    char buffer1[50];
    fp1 = fopen("source.txt","at+");
    fp2 = fopen("dest.txt","at+");

    fp1 = fgets(buffer1,sizeof(buffer1),stdin);
    
    //for(int i = 0; i <5; i++)
        
}