#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

int main(int argc, char* argv[])
{
	

	int j;
	signed char x = 24;
	scharBitit(x);

	j = -1000;
	shortBitit(j);
	j = -1000;
	intBitit(j);
	j = -1000;
	longBitit(j);
	return 0;
}
