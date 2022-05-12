#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int a,b,c,d,x,y,res;
	char space = ' ';
	int suurin;
	int leveys;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	d = atoi(argv[4]);
	suurin = b*d;
	leveys = 1;
	while (suurin != 0){
		suurin /= 10;
		leveys++;
	}


	for (y = c-1; y <= d;y++){
		for (x = a-1; x <= b; x++){
			if (y == c-1 && x == a-1){
				printf("%*c",leveys,space);
			}
			else if (y == c-1){
				printf("%*d",leveys,x);
			}
			else if (x == a-1){
				printf("%*d",leveys,y);
			}
			else {
				res = x*y;
				printf("%*d",leveys,res);
			}
		}
		printf("\n");
	}	
	return 0;
}
