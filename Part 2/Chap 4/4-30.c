// 4-30.c 
#include <stdio.h>
int main(void)
{
		char array[ ]="ABCD";	
		char* p="ABCD";			// 문자열 상수의 시작 주소를 p에 저장
		
		//p[0]='X';							// 에러, 문자열 ABCD는 문자열 상수(변경 불가)
		array[0]='X';					// 변경 가능
		
		p=array;				// 변경 가능, p는 포인터 변수
		//array=array+1;		// 에러, 배열 이름은 상수(변경 불가)
		printf("%s \n", p);
		p = array+1;
		printf("%s \n", array);
		printf("%s \n", p);
		
		return 0;
}
