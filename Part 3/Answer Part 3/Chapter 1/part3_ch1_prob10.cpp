#include <stdio.h>

struct point {
	int x;
	int y;
};

void func1(struct point p) {
	printf("%d %d\n", p.x, p.y);
}

void func2(struct point* p) {
	printf("%d %d\n", p->x, p->y);
}

int main () {
	struct point p1 = {10, 10};
	struct point p2 = {20, 20};

	func1(p1);
	func2(&p2);

	return 0;
}