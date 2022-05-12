#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "caesar.h"

int main(int argc, char* argv[])
{
	char aakkosto[UCHAR_MAX+1];
	char korvaavat[UCHAR_MAX+1];
	static char mj[] = "OHJELMOINNIN TEKNIIKKA";
	int i;
	for (i = 0; i < UCHAR_MAX; i++){
		aakkosto[i] = argv[1][i];
	}

	for (i = 0; i < UCHAR_MAX; i++){
		korvaavat[i] = argv[2][i];
	}
	printf("%s\n",mj);
	caesarKoodaa(mj,aakkosto,korvaavat);
	printf("%s\n",mj);
	return 0;
}
