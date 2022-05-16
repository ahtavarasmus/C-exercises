#include <stdio.h>
#include <stdlib.h>
#include "kertotaulu.h"

Kertotaulu * luoKertotaulu(uint a, uint b, uint c, uint d)
{
	int i,j;
	Kertotaulu * k;	
	if (a > b || c > d)
		return NULL;
	k = malloc(sizeof(Kertotaulu));

	k->kertotaulu = malloc((d-c+2)*sizeof(uint * ));
	for (i = 0; i < (d-c+2); i++){
		k->kertotaulu[i] = malloc((b-a+2)*sizeof(uint));
	}

	for (i = 0; i < (d-c+2);i++){
		for (j = 0; j < (b-a+2);j++){
			if (i == 0 && j == 0)
				k->kertotaulu[i][j] = 0;
			else if (i == 0)
				k->kertotaulu[i][j] = a+j-1;
			else if (j == 0)
				k->kertotaulu[i][j] = c+i-1;
			else
				k->kertotaulu[i][j] = (c+i-1)*(a+j-1);
		}
	}
	k->a = a;
	k->b = b;
	k->c = c;
	k->d = d;

	return k;

}

void tuhoaKertotaulu(Kertotaulu *kt)
{
	int i;
	for (i = 0; i < (kt->d-kt->c+2);i++){
		free(kt->kertotaulu[i]);
	}
	free(kt->kertotaulu);
	free(kt);
}


