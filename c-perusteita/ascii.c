#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	int a;
	int b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	while (a <= b){
		printf("%d: %c\n",a,a);
		a++;
	}
	return 0;
	
}
