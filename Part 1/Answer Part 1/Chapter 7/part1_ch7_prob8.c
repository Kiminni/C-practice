#include <stdio.h>
int main()
{
	int i = 0, num = 1, sum = 0;

	while (num != 0) {
		printf("정수를 입력해 주세요 : ");
		scanf("%d", &num);
		
		sum += num;
		i++;
	}
		
	printf("덧셈 결과 : %d\n", sum);
	printf("입력 횟수 : %d\n", i-1); 

	return 0;
}

/*
	변수 num은 입력받은 값을 저장합니다. while 문의 조건으로 num이 0이 아닐 때에
	반복문을 수행하도록 하면 입력이 0이 들어왔을 때 while 문을 탈출하여
	덧셈 결과와 입력 횟수를 출력하게 됩니다. 
*/