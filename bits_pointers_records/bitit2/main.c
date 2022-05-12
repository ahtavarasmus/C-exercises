#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

int main(int argc, char* argv[])
{
	long int lx = -33;
	signed char cx = lx;
	short sx = lx;
	int ix = lx;
	printf("%d\n",cx);
	kaannaScharBitit(&cx);
	printf("%d\n",cx);

}
