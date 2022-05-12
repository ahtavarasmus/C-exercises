#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int i,j,exp,sign;
	double res;
	double arvo_osa = 0;
	for (i = 9,j = 0;i < 32;++i,++j){
		if (argv[1][i] == '1')
			arvo_osa += 1/pow(2,(j+1));
	}	
	arvo_osa += 1;
	printf("%.15f\n",arvo_osa);

	exp = 0;
	for (i = 1,j = 7; i < 9;++i,--j){
		if (argv[1][i] == '1')
			exp += pow(2,j);
	}
	exp = exp-127;
	printf("%d\n",exp);

	if (argv[1][0] == '1'){
		sign = -1;
		printf("-\n");
	}
	else{
		sign = 1;
		printf("+\n");
	}

	res = sign * arvo_osa * pow(2,exp);

	printf("%.15f\n",res);

	return 0;

}
