#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[])
{
	int i, val,first;
	first = 1;

	for (i = 1; argv[i]; ++i){
		val = atoi(argv[i]);
		printf("%d:",val);
		/* don't print comma to the first*/
		if (SCHAR_MIN <= val && val <= SCHAR_MAX){
			if (!first){printf(",");}
			printf(" signed char");
			first = 0;
		}

		if (0 <= val && val <= UCHAR_MAX){
			if (!first){printf(",");}
			printf(" unsigned char");
			first = 0;
		}
		
		if (SHRT_MIN <= val && val <= SHRT_MAX){
			if (!first){printf(",");}
			printf(" short int");
			first = 0;
		}
		if (0 <= val && val <= USHRT_MAX){
			if (!first){printf(",");}
			printf(" unsigned short int");
			first = 0;
		}
		
		if (INT_MIN <= val && val <= INT_MAX){
			if (!first){printf(",");}
			printf(" int");
		}
		first = 1;
	
		printf("\n");
	}
	return 0;

}
