#include <stdio.h>
int main()
{
	char lower = 97, upper;
	upper = lower-32;

	printf("lower case : %c , upper case : %c \n", lower, upper);

	return 0;
}

/* 해설
	소문자 'a'의 아스키 코드표를 참조해보면, 97임을 알 수 있습니다.
	캐릭터형 변수 small에 소문자 'a'에 해당하는 수 97을 대입하여, printf문으로 캐릭터형으로 출력하면 소문자 a가 출력된다.
	또한 아스키 코드표에서 같은 문자의 소문자와 대문자 차이는 32이므로, 소문자 'a'에 해당하는 97에서 32를 빼면 대문자 아스키 코드값을 구할 수 있다.
*/