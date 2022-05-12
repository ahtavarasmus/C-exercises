#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[])
{
	long int a;
	long int b;
	int i;
	long int div;
	int for_print = 1;
	int round_num = 0;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	while (a <= b){
		
		for ( i = 3; argv[i]; i++){
			div = atoi(argv[i]);
			if (div == 1){
				return 0;
			}
			if (a % div == 0){
				for_print = 0;
				break;
			}
		}
		
		if (for_print){
			if (round_num > 0){
				printf(" ");
			}
			
			printf("%ld",a);
			
			round_num++;
		}
		a++;
		for_print = 1;
	}
	printf("\n");
	return 0;
}
