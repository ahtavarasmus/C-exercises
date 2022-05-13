#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

Rectangle * createRectangle(void)
{
	Rectangle * rec;
	Point p;
	rec = malloc(sizeof(Rectangle));
	return rec;
}
