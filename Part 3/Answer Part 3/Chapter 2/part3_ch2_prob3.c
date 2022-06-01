/*본래 문제의 코드*/
/* ex3.c */
/*
#include <stdio.h>
#include <string.h>
int main(void){
	char a[]="문자열";
	char b[]="문자열"

	if(a==b)
		puts("a와 b가 같습니다.");
	else
		puts("a와 b가 같지 않습니다.");

	return 0;
}
*/

/*문제 수정 코드*/
#include <stdio.h>
#include <string.h>
int main(void){
	char a[]="문자열";
	char b[]="문자열";

	if( strcmp(a, b)==0 )
		puts("a와 b가 같습니다.");
	else
		puts("a와 b가 같지 않습니다.");

	return 0;
}

/*해설
이번 문제는 숫자나 문자가 아닌 문자열을 비교하는 문제입니다.
c언어는 문자열을 하나의 데이터 타입으로 조작하는 것이 아니고, 연속적인 char형의 배열로 관리를 합니다.
데이터 타입으로 관리하는 것이 아니기 때문에 문자열을 조작하는 연산자를 제공하지 않습니다.
따라서 문자열을 조작하기 위해서는 문자열 조작 함수를 이용하여야합니다.
두 문자열을 비교하는 기본 제공 함수는 strcmp()이며, string.h에 정의되어 있습니다.
이 함수는 두 문자열의 문자 코드의 대소를 비교하는 것입니다.
자세한 strcmp()함수의 입출력 동작은 c언어 표준 함수 레퍼런스를 참고하시기 바랍니다.
*/