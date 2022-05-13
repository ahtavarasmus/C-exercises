#include <stdlib.h>
#include <stdio.h>
#include "pikalaj.h"

int main(void)
{
	int i;
	int t[20];
	for (i = 0; i < 20; i++){
		t[i] = (rand() % (10 - 1 + 1)) + 1;
		printf("%d\n",t[i]);
	}
	printf("*********************************************\n");

	pikalajittele(0,19,t);
	for (i = 0; i < 20; i++)
		printf("%d\n", t[i]);
	return 0;
}
