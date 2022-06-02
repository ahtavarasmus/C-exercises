#include <stdio.h>
#include "tulostus.h"

void tulostaDblTaulu(double *taulu, size_t lkm, const char *taulNimi, int tarkkuus, const char *tiedNimi)
{
	size_t i;
	FILE *td;
	for (i = 0; i < lkm; i++){
		td = fopen(tiedNimi,"a");
		fprintf(td,"%s[%zu] = %.*f\n",taulNimi,i,tarkkuus,taulu[i]);
		fclose(td);
	}
}
