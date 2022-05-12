#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char* argv[])
{
	int i,j,h,count,first_time_unique,max_seen,seen;
	double pienin, suurin, unique, s, d;
	count = 0;
	first_time_unique = 1;
	max_seen = 1;
	seen = 0;
	pienin = atof(argv[1]); 
	suurin = atof(argv[1]);
	for (i = 2;argv[i];i++){
		pienin = atof(argv[i]) < pienin ? atof(argv[i]) : pienin;
		suurin = atof(argv[i]) > suurin ? atof(argv[i]) : suurin;
	}
	printf("Pienin: %f\n",pienin);
	printf("Suurin: %f\n",suurin);
	for (i = 1; argv[i];i++){
		for (j = 1; argv[j];j++){
			if (atof(argv[i]) == atof(argv[j])){
				count++;
			}
			
		}
		if (count == 1){
				
			if (first_time_unique){
				printf("Ainutlaatuiset:");
				first_time_unique = 0;
			}
			unique = atof(argv[i]);
			printf(" %f",unique);
				
		}
		/* counting the how many times the top seen number has been seen*/
		max_seen = count > max_seen ? count : max_seen;
		count = 0;
	}
	if (!first_time_unique){
		printf("\n");
	}
	if (max_seen != 1){
		printf("Useimmiten esiintyneet (%d kertaa):",max_seen);
		for (i = 1; argv[i];i++){
			for (j = 1; argv[j];j++){
				if (atof(argv[i]) == atof(argv[j])){
					count++;
				}
			
			}
			if (count == max_seen){
					
				for (h = 1;h < i;h++){
					if (atof(argv[h]) == atof(argv[i])){
						seen = 1;
					}
				}
				if (seen == 0){
					printf(" %f",atof(argv[i]));
				}
			}
			count = 0;
			seen = 0;
		}
		printf("\n");
	}
		

	return 0;
}
