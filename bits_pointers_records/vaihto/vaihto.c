#include <stdio.h>
#include "vaihto.h"

void vaihda(int* a, int* b)
{
	int tmp;	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void jarjesta(int *a,int *b,int* c)
{
	int i, j, tmp;

	int list[3];
	list[0] = *a;
	list[1] = *b;
	list[2] = *c;

	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (list[i] < list[j]){
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	*a = list[0];
	*b = list[1];
	*c = list[2];
}


