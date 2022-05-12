#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int i;
	int tarkkuus;
	double num;
	double res;
	tarkkuus = atof(argv[1]);

	for (i = 2; argv[i] ; i++){
		num = atof(argv[i]);
		res = sqrt(num);

		printf("sqrt(%.*f) = %.*f\n",tarkkuus,num,tarkkuus,res);
	}
	return 0;
}
