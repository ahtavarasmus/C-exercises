#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vaihda(char *a, char *b, unsigned int k) {
	char *uca = a; /* a:n ja b:n arvot char-osoittimiin, jotka */
	char *ucb = b; /* käsittelevät dataa char/tavu kerrallaan. */
	while(k-- > 0) { /* Edetään k askelta (k tavua). */
		char tmp = *uca; /* a:n osoittaman arvon tavu talteen. */
		*uca++ = *ucb; /* Korvataan a:n tavu b:n tavulla ja */
		*ucb++ = tmp; /* b:n tavu talteen otetulla tavulla. */
	}/* Inkrementoinnit etenevät datassa char/tavu per askel. */
}

void kolmijako_gen(void * t, size_t n, size_t koko, size_t vipu1, size_t vipu2, int (*vrt)(const void *, const void *), size_t *p1, size_t *p2)
{
	size_t i,idx,tmp;	
	void * temp;
	size_t k;
	char *a= t;

	idx = 0;
	if (vrt(&a[vipu2*koko],&a[vipu1*koko])){
		tmp = vipu1;
		vipu1 = vipu2;
		vipu2 = tmp;
	}

	for (i = 0; i < n; i++){
		if (vrt(&a[i*koko],&a[vipu1*koko])){
			if (vipu1 == idx)
				vipu1 = i;
			if (vipu2 == idx)
				vipu2 = i;
			vaihda(&a[i*koko],&a[idx*koko], koko);
			idx++;
		}
	}

	if (vipu2 == idx)
		vipu2 = vipu1; 
	vaihda(&a[idx*koko],&a[vipu1*koko], koko);
	
	/* first point assignment seremony:) */
	*p1 = idx;
	/* we don't wanna change the correct one so we increment */
	idx++;


	for (i = idx; i < n; i++){
		if (vrt(&a[i*koko],&a[vipu2*koko])){
			if (vipu2 == idx)
				vipu2 = i;
			vaihda(&a[i*koko],&a[idx*koko], koko);
			idx++;
		}
	}
	vaihda(&a[idx*koko],&a[vipu2*koko], koko);
	*p2 = idx;
}
