#include <stdio.h>
#include "genhaku.h"

size_t etsi(void *mista, size_t n,void *mika, size_t m, size_t koko)
{
	int legit;
	size_t k,j,i;

	char * a = mista;
	char * b = mika;
	/* aloitamme optimistisesti että kaikki olis legit :D */
	legit = 1;
	i = 0;
	j = 0;
	for (i = 0; i < n; i++){
		/* jos kaikki solun tavut ovat samoja niin legit pysyy */
		for (k = 0; k < koko; k++){
			
			if (a[i*koko + k] != b[j*koko + k])
				legit = 0;
		}
		if (legit){
			if (j == m-1)
				return i - j;/* ensimmäinen sama indexi */
			else
				j++;
		} else {j = 0;}
		
		legit = 1;
	}
	return n;

}


	

