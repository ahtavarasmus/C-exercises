#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mjonot.h"

char ** jarjesta_mjt(char **mjt,size_t lkm,int (*vrt)(const char*, const char *))
{
	char ** r;
	
	int i,j,len;
	char * tmp;
	r = malloc(lkm*sizeof(char *));
	for (i = 0; i < lkm;i++){
		len = strlen(mjt[i]);
		r[i] = malloc(len+1);
		strcpy(r[i],mjt[i]);
	}
	for (i = 0; i < lkm; i++){
		for (j = i; j < lkm; j++){
			if (vrt(r[j], r[i])){
				tmp = r[i];
				r[i] = r[j];
				r[j] = tmp;
			}
		}
	}
	return r;

}
