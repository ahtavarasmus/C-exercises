#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{	
	/* idx näyttää seuraavan tyhjän paikan oikein[] listassa*/
	int idx = 0;
	int i;
	int j;
	int voittorivi[7];
	int lottorivi[7];
	int oikein[7] = {
		0,0,0,0,0,0,0
	};
	voittorivi[0] =	atoi(argv[1]);
	voittorivi[1] = atoi(argv[2]);
	voittorivi[2] = atoi(argv[3]);
	voittorivi[3] = atoi(argv[4]);
	voittorivi[4] = atoi(argv[5]);
	voittorivi[5] = atoi(argv[6]);
	voittorivi[6] = atoi(argv[7]);

	lottorivi[0] = atoi(argv[8]);
	lottorivi[1] = atoi(argv[9]);
	lottorivi[2] = atoi(argv[10]);
	lottorivi[3] = atoi(argv[11]);
	lottorivi[4] = atoi(argv[12]);
	lottorivi[5] = atoi(argv[13]);
	lottorivi[6] = atoi(argv[14]);
	/* oikein lista kerää kaikki oikeat numerot järjestyksessä*/
	/* alustus on vain nollia */
	
	
	
	printf("Voittorivi:");
	for (i=0;i < 7;i++){
		printf(" %d",voittorivi[i]);
	}
	printf("\nLottorivi:");
	for (i=0;i < 7;i++){
		printf(" %d",lottorivi[i]);
		/* tsekataan onko numero voittorivillä*/
		for (j=0;j < 7; j++){
			if (lottorivi[i] == voittorivi[j]){
				oikein[idx] = lottorivi[i];
				/* seuraava idx eli tyhjäpaikka valmiiksi */
				idx++;
				/* loytyi joten lopetetaan turha looppaaminen*/
				break;
			}
		}

	}
	printf("\n");
	if (idx != 0){
		printf("%d oikein:", idx);
		for (i=0; oikein[i] != 0;i++){
			printf(" %d",oikein[i]);
		}
		printf("\n");
	}
	else {
		printf("Ei yhtään oikein!");
		printf("\n");
	}

	return 0;

}

