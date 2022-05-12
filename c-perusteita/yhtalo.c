#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	double a,b,c,dis,res1,res2;
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);
	
	dis = b*b - 4*a*c;
	if (dis < 0){
		printf("Ei ratkaisua\n");
	} else if (dis == 0){
		res1 = -(b)/(2*a);
		printf("%.3f\n",res1);
	} else if (dis > 0){
		res1 = (-(b) + sqrt(dis))/(2*a);
		res2 = (-(b) - sqrt(dis))/(2*a);
		if (res1 < res2){
			printf("%.3f",res1);
			printf(" %.3f\n",res2);
		} else {
			printf("%.3f",res2);
			printf(" %.3f\n",res1);
		}
	}
	return 0;
}
