#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kertotaulu.h"

char **luo_kertotaulu_mjt(uint a, uint b, uint c, uint d)
{
	int i,j,len,tmp,p_idx;
	uint x;
	int leveydet[(b-a+2)];
	char ** k;
	int m;
	int rivien_leveys;
	char vali = ' ';
	for (i = 0; i < (d-c+2); i++){
		for (j = 0; j < (b-a+2); j++){
			if (j == 0) tmp = d;
			else tmp = d*(a+j-1);

			len = 1;
			for (; tmp > 9; tmp/=10)
				len += 1;
			leveydet[j] = len;
		}
	}

	/* rivien_leveys alustetaan jokaisen sarakkeen väliin jäävillä välilyönneillä*/

	rivien_leveys = (b-a+2)-1;
	for (j = 0; j < (b-a+2); j++){
		rivien_leveys += leveydet[j];
	}
	/*lopetusmerkki*/
	rivien_leveys++;

	k = malloc((d-c+2)*sizeof(char *));
	for (i = 0; i < (d-c+2); i++){
		k[i] = malloc(rivien_leveys);
	}
	p_idx = 0;
	for (i = 0; i < (d-c+2);i++){
		for (j = 0; j < (b-a+2); j++){

			if (i == 0 && j == 0) x = 0;
			else if (i == 0) x = a+j-1;
			else if (j == 0) x = c+i-1; 
			else x = (c+i-1)*(a+j-1);

			m = leveydet[j];		
			
			if (i == 0 && j == 0)
				tmp = sprintf(&k[i][p_idx],"%*c",m,vali);
			else
				tmp = sprintf(&k[i][p_idx],"%*u",m,x);
			p_idx += tmp;
			/* jos ei viimeinen luku */
			if (j < b-a+1)
				sprintf(&k[i][p_idx],"%c",vali);
			p_idx++;
			
		}
		p_idx = 0;
	}

	return k;
}


