#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count(char*);

int main()
{
	char str[80];
	printf("단어를 입력하세요 : ");
	scanf("%s",str);
	strlwr(str);//대소문자 소문자로 
	count(str);

	return 0;
}

int count(char* inputStr){
	int countArr[26]={0,};//알파벳 갯수만큼 배열 잡음
	int cnt=0, srcLen=0, i=0;

	srcLen=strlen(inputStr);//문자열 길이 저장

	for(cnt=0;cnt<srcLen;cnt++){
		if(inputStr[cnt]-'a'>=0 && inputStr[cnt]-'a'<=122){//알파벳이면
			countArr[inputStr[cnt]-'a']++;
		}
		else
			continue;
	}

	//출력
	for(i=0; i<26; i++){
		printf("%c:%d개\n",97+i, countArr[i]);
	}


	return 0;
}

/*해설
str배열에 입력받은 문장을 저장합니다.
strlwr()함수로 문장을 모두 소문자로 변경합니다.
이후 count()함수로 문자의 갯수를 셉니다.
count()함수 내에서 다음과 같은 if문으로
	if(inputStr[cnt]-'a'>=0 && inputStr[cnt]-'a'<=122)
문자열의 cnt 위치의 문자가 소문자 알파벳인지 검사를 합니다.
소문자 알파벳이면 countArr배열로 해당 문자의 갯수를 하나 증가시킵니다.
	countArr[inputStr[cnt]-'a']++;
만약 알파벳이 아니라면 countinue 구문을 통해 다음 원소로 넘어갑니다.

문자열에서 알파벳 갯수를 모두 센 이후 printf문으로 출력을 합니다.
*/