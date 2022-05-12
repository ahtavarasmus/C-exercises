#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	unsigned int pituus;
	int i;
	for (i = 1;argv[i];i++){
		pituus = strlen(argv[i]);
		printf("%i: %s (pituus: %u)\n",i,argv[i],pituus);
	}
	return 0;
}
