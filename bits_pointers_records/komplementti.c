#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int i,len,first_bit,power,res;	
	len = strlen(argv[1]);
	res = 0;
	power = len-1;
	first_bit = argv[1][0]-'0';
	for (i=0; i < len;++i){
		if (argv[1][i] == '1'){
			if (i == 0 && first_bit)
				res -= pow(2,power);
			else 	
				res += pow(2,power);
		}
		power--;
			
	}
	printf("%d\n",res);
	return 0;

}
