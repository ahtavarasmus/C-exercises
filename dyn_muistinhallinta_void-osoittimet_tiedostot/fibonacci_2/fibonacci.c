#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fibonacci.h"

char *fib_jono_mj(unsigned int n)
{
	int i,prev1,prev2,curr,rea;
	size_t kap,pit;
	size_t tmp = 0;
	/* uuden luvun pituus merkkeinä */
	size_t m = 1;
	
	char *temp = NULL;
	/* etu tulostetaan aina ennen uutta lukua */
	char *etu = "";
	/* varataan tilaa tyhjälle merkkijonolle(lopetusmerkille) */
	char *mj = malloc(1);

	/* alustetaan mj tyhjällä */
	mj[0] = '0';
	/* #merkkijonolle varattu muisti(merkkien määrä) */
	kap = 1;
	/* #tulostetut merkit */
	pit = 0;

	prev1 = prev2 = rea = 0;
	for (i = 0; i < n;i++){

		/* laske lisättävä fibonacci luku */
		curr = i < 2 ? i : prev1 + prev2;
		prev2 = prev1;
		prev1 = curr;

		/* laske luvun pituus */
		for (tmp = curr; tmp > 9; tmp /= 10)
			m++;
		/* pilkku, välilöynti ja lopetusmerkki */
		if (i != 0){
			etu = ", ";
			m+=3;
		} else {
			m++;
		}
		/* varataan lisää muistia jos tarvetta */
		while (pit + m > kap){
			kap*=2;
			rea = 1;
		}
		if (rea){
			temp = realloc(mj,kap);
			if (temp != NULL)
				mj = temp;
		}
				/* tulostetaan luku ja etu(pilkku,väli mahd.) */
		tmp = sprintf(&mj[pit],"%s%d",etu,curr);
		/* kasvatetaan tulostettuja merkkejä */
		pit += tmp;
		rea = 0;
	}
	/* varataan lopuksi merkkijono vain sen tarvitsemien merkkien pituiseksi*/

	temp = realloc(mj,pit + 1);
	if (temp != NULL)
		mj = temp;

	return mj;
}
