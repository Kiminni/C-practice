#include <stdio.h>
struct node
{
	int data;
	struct node* link;
};
int main(void)
{
	struct node n1, n2, n3;

	n1.data=10;
	n1.link=&n2;
	n2.data=20;
	n2.link=&n1;
	n3.data=30;
	n3.link=&n3;

	printf("%d %d %d \n", n1.data, n2.data, n3.data);
	printf("%d %d %d \n", n2.link->data, n1.link->data, n3.link->data);

	return 0;
}

/* 해설
	포인터를 사용하여 같은 부류의 데이터를 어떻게 묶어 관리하는지 간략하게 보여주는 예제입니다.
	node 구조체는 int형 변수와, 자기 자신의 구조체 포인터 변수를 갖습니다.
	이때 포인터변수를 이용하여 같은 타입의 구조체를 포인트 할 수 있기 때문에, 같은 종류의 데이터를 일련의 메모리 리스트 형태로 관리할 수가 있습니다.

	구조체 n1에는 데이터로 10을 대입하고, n1의 링크, link에 n2노드를 포인트 합니다.
	같은 방법으로 n2에 데이터로 20을 대입하고, n2의 링크, link에 n1노드를 포인트 합니다.
	마지막으로 n3에는 데이터로 30을 대입하고, n3의 링크, 즉 자기자신을 포인트 합니다.
*/