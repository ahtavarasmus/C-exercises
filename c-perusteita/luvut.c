#include <stdio.h>

int main(void){
	int i;
	int round = 0;
	for (i = 1; i != 101;i++){
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0){
			continue;
		}
		if (round != 0){
			printf(" ");
		}
		printf("%d",i);
		round++;
	}
	printf("\n");
	return 0;
}
