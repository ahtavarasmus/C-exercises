#include <stdio.h>
#include <stdlib.h>

unsigned int *fib_jono(unsigned int n)
{
	unsigned int x;
	unsigned int* t = malloc(n*sizeof(unsigned int));
	

	for (i = 0; i < n; i++){
		if (i < 2)
			t[i] = i;
		else 
			t[i] = t[i-1] + t[i-2];
	}
	return t;
}
