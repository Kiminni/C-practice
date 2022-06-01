#include <stdio.h>

struct prototype
{
	int x;
	int y;
};

int main ()
{
	struct prototype s1;
	struct prototype* sp;

	s1.x=10;
	s1.y=10;

	sp=&s1;

	printf("%x, %d, %d\n", sp, s1.x, s1.y);
	printf("%d, %d\n", sp->x, sp->y);

	return 0;
}


/*

그림에서 s1이라는 데이터 구조를 정의하기 위해
prototype라는 구조체를 사용하였습니다.
이 구조체의 시작점을 가리키는 포인터를 만들기 위에 sp를
이 구조체 형식을 가지는 포인터로서 선언하였고,
sp = &s1; 구문을 통해 sp가 s1을 가리키도록 한뒤
이를 이용하여 s1으로 구조체 값에 직접 접근하여 출력해보고,
sp를 이용하여 구조체 값에 간접적으로 접근하여 출력하여봅니다.

*/
