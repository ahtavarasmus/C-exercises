#include <stdio.h>
#include <string.h>
#include "vertailu.h"
#include "rectangle.h"

int rectAlaVrt(const void *a,const void *b)
{
	Rectangle * const * r_a = a;
	Rectangle * const * r_b = b;
	return (getArea(*r_a) < getArea(*r_b)) ? -1 : ((getArea(*r_a) > getArea(*r_b)) ? 1 : 0);
}

int rectXyVrt(const void *a, const void *b)
{
	Rectangle * const * r_a = a;
	Rectangle * const * r_b = b;
	if ((*r_a)->origin.x != (*r_b)->origin.x)
		return ((*r_a)->origin.x < (*r_b)->origin.x) ? -1 : 1;
	if ((*r_a)->origin.y != (*r_b)->origin.y)
		return ((*r_a)->origin.y < (*r_b)->origin.y) ? -1 : 1;
	return 0;
}


int rectLeveysVrt(const void *a, const void *b)
{
	Rectangle * const * r_a = a;
	Rectangle * const * r_b = b;
	return ((*r_a)->width > (*r_b)->width) ? -1 : (((*r_a)->width < (*r_b)->width)) ? 1 : 0;
}
int mjPitAakkosVrt(const void *a, const void *b)
{
	char * const * m_a = a;
	char * const * m_b = b;
	if (strlen(*m_a) != strlen(*m_b))
		return (strlen(*m_a) > strlen(*m_b)) ? -1 : 1;
	return strcmp(*m_a, *m_b);
}
