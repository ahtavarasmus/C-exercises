#include <stdio.h>
#include <stdlib.h>
#include "muunto.h"

int main(int argc, char* argv[])
{
	int i;
	char* st;
	for (i = 1; argv[i]; i++){
		st = argv[i]; 
		printf("%d: %s --> ",i,st);
		muunna(st);
		printf("%s\n",st);
	}
	return 0;
}
