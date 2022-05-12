#include <stdio.h>
#include <limits.h>
#include "utf8.h"

void utf8_koodaa(unsigned int merkki, unsigned char utf8[])
{
	size_t i;
	unsigned int x = merkki;
	int k = 0;
	if (merkki == 0){
		/*idk*/
	}else {
		for (i = 0; i < CHAR_BIT*sizeof(x);++i){
			if ((x >> i) & 1)
				k = i;
		}

		if (k+1 < 8){
			utf8[0] = 0;
			utf8[1] = '\0';
			for (i = 0; i < k+1;++i){
				if ((x >> i) && 1)
					utf8[0] = utf8[0] | (1 << i);
			}

		}

		else if (8 <= k+1 && k+1 < 12){
			utf8[0] = utf8[1] = 0;
			utf8[2] = '\0';

			utf8[0] = utf8[0] | (1 << 7);
			utf8[0] = utf8[0] | (1 << 6);

			utf8[1] = utf8[1] | (1 << 7);
			/* first 6 arvobittiä oikealta*/
			for (i = 0; i < 6; i++){
				if ((x >> i) & 1)
					utf8[1] = utf8[1] | (1 << i);
			}
			for (i = 6; i < k+1; i++){
				/* placing it to 0 index by reducing 7*/
				if ((x >> i) & 1)
					utf8[0] = utf8[0] | (1 << (i-6));
			}
		}
		else if (12 <= k+1 && k+1 < 17){
			utf8[0] = utf8[1] = utf8[2] = 0;
			utf8[3] = '\0';


			utf8[0] = utf8[0] | (1 << 7);
			utf8[0] = utf8[0] | (1 << 6);
			utf8[0] = utf8[0] | (1 << 5);

			utf8[1] = utf8[1] | (1 << 7);
			utf8[2] = utf8[2] | (1 << 7);

			for (i = 0; i < 6; ++i){
				if ((x >> i) & 1)
					utf8[2] = utf8[2] | (1 << i);
			}
			for (i = 6; i < 12; ++i){
				if ((x >> i) & 1)
					utf8[1] = utf8[1] | (1 << (i-6));
			}
			for (i = 12; i < k+1;++i){
				if ((x >> i) & 1)
					utf8[0] = utf8[0] | (1 << (i-12));
			}



		}
		else if (17 <= k+1 && k+1 < 22){
			utf8[0] = utf8[1] = utf8[2] = utf8[3] = 0;
			utf8[4] = '\0';


			utf8[0] = utf8[0] | (1 << 7);
			utf8[0] = utf8[0] | (1 << 6);
			utf8[0] = utf8[0] | (1 << 5);
			utf8[0] = utf8[0] | (1 << 4);

			utf8[1] = utf8[1] | (1 << 7);
			utf8[2] = utf8[2] | (1 << 7);
			utf8[3] = utf8[3] | (1 << 7);

			for (i = 0; i < 6; ++i){
				if ((x >> i) & 1)
					utf8[3] = utf8[3] | (1 << i);
			}
			for (i = 6; i < 12; ++i){
				if ((x >> i) & 1)
					utf8[2] = utf8[2] | (1 << (i-6));
			}
			for (i = 12; i < 18;++i){
				if ((x >> i) & 1)
					utf8[1] = utf8[1] | (1 << (i-12));
			}
			for (i = 18; i < k+1;++i){
				if ((x >> i) & 1)
					utf8[0] = utf8[0] | (1 << (i-18));
			}
		}
	}

}
