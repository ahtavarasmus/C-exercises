#include <stdio.h>
#include <stdlib.h>
#include "unsigned.h"


void ucharIntervalli(unsigned char sade, unsigned char askel)
{
	unsigned char min_ = -sade;
	printf("%u",min_);
	unsigned char max_ = sade;
	int i,okay;
	okay = 1;
	i = 1;
	printf("unsigned char: %u",min_);
	while (okay){
		if (min_+i*askel > min_+(i+1)*askel){
			i = 0;
			while (i*askel <= sade){

				printf(" %u",i*askel);
				i++;
			}
			break;
		} else {
			
			printf(" %u",min_+i*askel);
		}
		i++;
	}
	printf("\n");
}

int main(int argc, char* argv[])
{
	ucharIntervalli(150,50);
	return 0;
}
