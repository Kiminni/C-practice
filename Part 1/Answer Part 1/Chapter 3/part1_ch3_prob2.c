/* ex2.c */
#include <stdio.h>
void main()
{
	int jean = 0;	/*jean 이름의 변수 선언과 동시에 0으로 초기화*/
	jean = 1;	/*jean의 수량을 1로 설정*/
	jean = jean + 1;	/*구매할 청바지 수량을 1 증가*/
	printf("구매할 청바지 수량 : %d\n", jean);	/*구매할 청바지 수량 출력*/
	printf("구매 완료\n");
}

/* 해설
	변수의 선언 및 초기화 방법을 익히고, 정수형 변수의 조작을 익힙니다.
*/