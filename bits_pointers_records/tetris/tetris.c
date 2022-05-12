#include <stdio.h>
#include "tetris.h"

void paivita(char ruudukko[20][10])
{
	int i, j, i2, j2;
	char empty[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	for (i = 0; i < 20; ++i){
		for (j = 0; j < 10; ++j){
			if (ruudukko[i][j] == ' ')
				goto not_empty;
		}

		for (i2 = i; i2 > 0; i2--){
			for (j2 = 0; j2 < 10; j2++){
				ruudukko[i2][j2] = ruudukko[i2-1][j2];	
			}
			
		}
		for (i2 = 0; i2 < 10; i2++){
			ruudukko[0][i2] = empty[i2];
		}

		not_empty:
			continue;
	}
}
