#include <stdio.h>
#include <string.h>


int main()
{
    char array[5000];
    int vocab[100] = {0,}; //단어 개수
    int i,j,k = 0;

    gets(array); //문장 입력

    for(i = 0; i<strlen(array);i++) // 길이만큼 반복해서
        if(array[i] == ' ')
            printf("%s\n",array);
            
    return 0;

}


