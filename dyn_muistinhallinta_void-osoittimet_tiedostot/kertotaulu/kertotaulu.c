#include <stdio.h>
#include "kertotaulu.h"

Kertotaulu * luoKertotaulu(uint a, uint b, uint c, uint d)
{
	int i,j;
	if (a > b || c > d)
		return NULL;
	Kertotaulu * k_top = malloc(sizeof(Kertotaulu));
	Kertotaulu->kertotaulu = malloc((d-c+2)*sizeof(*uint));
	for (i = 0; i < (b-a+2), i++){
		Kertotaulu->kertotaulu[i] = malloc((b-a+2)*sizeof(uint));
	}

	for (i = 0; i < (d-c+2);i++){
		for (j = 0; j < (b-a+2);j++){
			if (i == 0 && j == 0)
				Kertotaulu[i][j] = 0;
		}
	}

}

void tuhoaKertotaulu(Kertotaulu *kt)
{

}


