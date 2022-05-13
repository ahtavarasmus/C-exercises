#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** kopioi_mjt(char ** mjt,size_t lkm)
{
	char ** r;
	int i,len;
	r = malloc(lkm*sizeof(char *));
	for (i = 0; i < lkm;i++){
		len = strlen(mjt[i]);
		r[i] = malloc((len+1)*sizeof(char));
		strcpy(r[i], mjt[i]);
	}
	return r;

}
