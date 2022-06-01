#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};

typedef struct point POINT;
POINT *add(POINT *a, POINT *b);
POINT *subtract(POINT *a, POINT *b);