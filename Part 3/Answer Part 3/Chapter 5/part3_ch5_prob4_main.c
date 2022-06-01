#include "part3_ch5_prob4_point.h"

void main () {

	POINT a, b, *c, *d;
	
	a.x = 10;
	a.y = 15;
	b.x = 5;
	b.y = 10;

	printf("aÀÇ xÁÂÇ¥: %d, yÁÂÇ¥: %d\n", a.x, a.y);
	printf("bÀÇ xÁÂÇ¥: %d, yÁÂÇ¥: %d\n", b.x, b.y);

	c = add(&a, &b);
	d = subtract(&a, &b);

	printf("c(a+b)ÀÇ xÁÂÇ¥: %d, yÁÂÇ¥: %d\n", c->x, c->y);
	printf("d(a-b)ÀÇ xÁÂÇ¥: %d, yÁÂÇ¥: %d\n", d->x, d->y);
}