#include <stdio.h>
struct point
{
	int x;
	int y;
};
int main(void)
{
	struct point array[2]={1, 1, 2, 2};
	struct point* p=NULL;

	p=array;
	printf("%d %d \n", array[0].x, array[0].y);
	printf("%d %d \n", array[1].x, array[1].y);
	printf("%d %d \n", p[0].x, p[0].y);
	printf("%d %d \n", p[1].x, p[1].y);

	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (p+1)->x, (p+1)->y);

	return 0;
}

/* 해설
	구조체 포인터 p는 생성된 구조체배열 array를 포인팅합니다.
	이때 구조체배열에 값이 순차적으로 1, 1, 2, 2가 할당되면서 각각을 struct point형으로 접근할 수 있습니다.
	따라서 메모리를 선언된 struct point형에 마추어 값에 접근할 수가 있습니다.
	즉, array[0], array[1]은 모두 int형 2개의 크기와 같으며, 각각 x, y로 구조체 내의 변수에 접근 할 수가 있습니다.

	또한  구조체 포인터 p는 array변수를 포인팅 하고 있으며, p->x, p->y는 각각 array[0]->x, array[0]->y의 값과 같고, 	(p+1)->x, (p+1)->y는 각각 array[1]->x, array[1]->y와 같은 값을 출력합니다.
*/