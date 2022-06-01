#include <stdio.h>
int Add(int x, int y);
int Count();

int main(void) {
	int a, b, c;
	int result;
	
	c = 0;

	while(c < 100)
	{
		printf("숫자 두 개를 입력하세요(0 0 -> exit) : ");
		scanf("%d %d", &a, &b);
			
		if(a == 0 && b == 0) {
			break;
		}
		else {
			result = Add(a, b);
			printf("덧셈 결과 : %d \n", result);
		}

		c = Count();
	}		
	
	printf("총 연산 수 : %d \n", c);
	return 0;
}

int Add(int x, int y) {
	return x + y;
}

int Count() {
	static int c = 0;
	c++;

	return c;
}

/*

정적 변수로 c를 잡아 총 연산을 몇 번 했는지 확인하는 데 이용합니다.
Count()함수는 정적 변수 c값을 증가시키는 데 이용되며 c를 반환합니다.
Count()함수내에서 c는 정적 변수이기 때문에 Count()가 계속 호출되도 이전 값을 유지합니다.

*/