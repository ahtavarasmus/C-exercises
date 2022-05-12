#include <stdio.h>

int main(void){

	int i;
	int j;
	int res;
	for ( i=0; i!=16 ; i++){
		for ( j=0; j!=16; j++){
			if (j == 0 && i == 0){
				printf("   x");
			}
			else if (i == 0){
				if (j < 10){
					printf("   %d",j);
				}
				else {
					printf("  %d",j);
				}
			}
			else if (j == 0){
				if (i < 10){
					printf("   %d",i);
				}
				else {
					printf("  %d",i);
				}
			}
			else {
				res = i * j;

				
				if (res < 10){
					printf("   %d",res);
				}
				else if (res < 100){
					printf("  %d",res);
				}
				else {
					printf(" %d",res);
				}
			}
		}
		printf("\n");
	}

	return 0;
}
