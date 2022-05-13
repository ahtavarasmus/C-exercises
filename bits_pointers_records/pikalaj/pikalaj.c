#include <stdio.h>
#include <stdlib.h>
#include "pikalaj.h"
#include "kolmijako.h"

void pikalajittele(int alku, int loppu, int t[])
{
	int a, b, x, y, xr, yr;
	unsigned int a_tmp,b_tmp;
	int *t_tmp;
	IntPari correct_pair;
	if (alku >= loppu)
		return;

	x = 0;
	y = 0;
	
	a = (rand() % (loppu- alku+ 1)) + alku;
	b = (rand() % (loppu- alku+ 1)) + alku;
	while (a == b){
		b = (rand() % (loppu- alku+ 1)) + alku;
	}

	

	a_tmp = a - alku;
	b_tmp = b - alku;


	correct_pair = kolmijako(loppu-alku+1,t+alku,a_tmp,b_tmp,&x,&y);
	xr = correct_pair.x + alku;
	yr = correct_pair.y + alku;


	pikalajittele(alku,xr-1,t);
	pikalajittele(xr+1,yr-1,t);
	pikalajittele(yr+1,loppu,t);
}


