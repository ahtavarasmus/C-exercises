#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

Rectangle * createRectangle(void)
{
	Rectangle * rec = malloc(sizeof(Rectangle));
	
	return rec;
}

Rectangle * createRectangle2(Point p)
{
	Rectangle * rec = malloc(sizeof(Rectangle));
	rec->origin.x = p.x;
	rec->origin.y = p.y;
	return rec;
}

Rectangle * createRectangle3(int w, int h)
{
	Rectangle * rec = malloc(sizeof(Rectangle));
	rec->width = w;
	rec->height = h;
	return rec;
}

Rectangle * createRectangle4(Point p, int w, int h)
{
	Rectangle * rec = malloc(sizeof(Rectangle));
	rec->origin.x = p.x;
	rec->origin.y = p.y;
	rec->width = w;
	rec->height = h;
	return rec;
}

void move(Rectangle *r, int x, int y)
{
	r->origin.x = x;
	r->origin.y = y;
}

int getArea(const Rectangle *r)
{
	return r->width * r->height;
}
