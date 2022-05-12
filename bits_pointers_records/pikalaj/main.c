#include <stdlib.h>
#include <stdio.h>
#include "pikalaj.h"

int main(void)
{
	int i;
	int t[1000];
	for (i = 0; i < 10; i++){
		t[i] = (rand() % 9) + 1;
		printf("%d\n",t[i]);
	}
	printf("*********************************************\n");

	pikalajittele(0,9,t);
	for (i = 0; i < 10; i++)
		printf("%d\n", t[i]);
	return 0;
}
