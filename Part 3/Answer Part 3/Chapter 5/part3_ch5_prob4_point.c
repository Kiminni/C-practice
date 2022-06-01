#include "part3_ch5_prob4_point.h"

POINT *add (POINT *a, POINT *b) {
	POINT* c = (POINT*) malloc(sizeof(POINT));
	c->x = a->x + b->x;
	c->y = a->y + b->y;
	return c;
}

POINT *subtract (POINT *a, POINT *b) {
	POINT* c = (POINT*) malloc(sizeof(POINT));
	c->x = a->x - b->x;
	c->y = a->y - b->y;
	return c;
}