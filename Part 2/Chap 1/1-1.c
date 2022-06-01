// 1-1.c 
#include <stdio.h>
int main(void)
{
    int student[5]; // 배열 선언

    student[0] = 90; // 배열의 첫 번째 요소에 데이터 저장
	student[1] = 80; // 배열의 두 번째 요소에 데이터 저장
    student[2] = 70; // 배열의 세 번째 요소에 데이터 저장

	printf("첫 번째 학생의 점수 : %d \n", student[0]);			 // 90 출력 
    printf("두 번째 학생의 점수 : %d \n", student[1]);			// 80 출력 
    printf("세 번째 학생의 점수 : %d \n", student[2]);			 // 70 출력
	printf("네 번째 학생의 점수 : %d \n", student[3]);			 // 쓰레기값 출력
	printf("다섯 번째 학생의 점수 : %d \n", student[4]);		// 쓰레기값 출력
	
	return 0;
}