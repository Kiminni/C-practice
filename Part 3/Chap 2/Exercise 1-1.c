#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0;
    char array[100];
    int alpha[26] = {0,}; //알파벳 개수
    
    gets(array); //단어 입력
    strlwr(array); //소문자로

    for(int i = 0; i<strlen(array);i++) //단어 길이만큼 반복해서
       // if(array[i] <= 'z')
             alpha[array[i] - 'a'] += 1; // alpha 배열의 i번째 요소의 아스키 코드에서 a의 아스키코드를 뺀다 -> 몇 번째인지 알려주는 것
             //e의 경우 alpha[array[i] - 'a'] => alpha[101-97] += 1 => alpha[4] +=1
    
    for(int i = 0; i<26; i++)
        if(alpha[i]) //이 배열 중 0이 아닌 것들 출력
            printf("%c : %d\n",'a'+i, alpha[i]);
    
    return 0;

}


