#include <stdio.h>
#include <stdlib.h>
/*
lukee käyttäjältä näppäimistöltä double -tyyppisiä lukuja 
ja tulostaa lopuksi ruudulle luettujen lukujen lukumäärän, 
luetut luvut kasvavaan järjestykseen lajiteltuina, 
sekä luettujen lukujen summan ja keskiarvon.
 */


int main(int argc, char *argv[])
{
	double temp,sum,av,all;
	double input;
	
	size_t i,j,lkm = 0;
	size_t used = 0;
	size_t koko = 2;	
	double *t = malloc(koko*sizeof(double));
	double *tmp;
	while (scanf("%lf",&input) == 1){
		if (used >= koko){
			while (used >= koko)
				koko*=2;
			tmp = realloc(t,koko*sizeof(double));
			if (tmp != NULL)
				t = tmp;
		}
		t[used] = input;
		used++;
		lkm++;
	}
	/* varataan taulukko juuri sen kokoiseksi mitä tarvittiin */
	tmp = realloc(t,used*sizeof(double));
	if (tmp != NULL)
		t = tmp;

	/* lajitellaan kasvavaan järjestykseen brutella */
	for (i = 0; i < used; i++){
		for (j = i; j < used; j++){
			if (t[j] < t[i]){
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
	/* summa */
	sum = 0;
	for (i = 0; i < used; i++)
		sum += t[i];
	/* keskiarvo */
	all = used;
	av = sum / all;

	printf("Luettiin %zu lukua:",used);
	for (i = 0; i < used; i++)
		printf(" %.3f",t[i]);
	printf("\nSumma: %.3f\n",sum);
	printf("Keskiarvo: %.3f\n",av);


	/* at the end */
	free(t);
	return 0;
}
