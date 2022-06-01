#include <stdio.h>

#define AGE_1 20
#define AGE_2 18

int main()
{
	const int YEAR_CURRENT = 2010;
	const int YEAR_1 = 1990;
	const int YEAR_2 = 1992;

	printf("올해는 %d년 입니다. \n", YEAR_CURRENT);
	printf("내 나이는 %d살입니다. \n", AGE_1);
	printf("나는 %d에태어나 %d번째 해가 되었습니다. \n", YEAR_1, AGE_1);
	printf("내 동생의 나이는 %d살입니다. \n", AGE_2);
	printf("내 동생은 %d년에 태어나 %d번째 해가 되었습니다. \n", YEAR_2, AGE_2);

	return 0;

}

/* 해설
	심볼릭 상수를 이용하여 원하는 문장을 출력하는 문제입니다.
	심볼릭 상수를 선언&사용하는 방법은 크게 두가지 입니다.
	#define문을 사용하는 방법과 const 키워드를 사용하는 방법이 있습니다.
	#define문을 사용하는 방법의 경우, 컴파일링 하는 과정에서 전처리기가 작성된 코드에서 해당하는 상수명을 그대로 대입하는 방법입니다.
	const 키워드를 사용하는 방법의 경우, 해당 자료형에 쓰기 금지 속성을 부여하는 것이라 생각하면 됩니다.
	즉, 새로운 값으로 바꿀 수는 없지만, 읽을 수만 있는 형태의 변수입니다.
	심볼릭 상수의 경우 일반적으로 변수이름을 대문자로 작성합니다.
*/