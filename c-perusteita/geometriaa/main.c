#include <stdio.h>
#include <stdlib.h>
#include "geometria.h"


int main(int argc, char* argv[])
{
	int i;
	long double ala,til, piiri;
	printf("Piin arvo: %.19Lf\n",PII);
	for (i = 1; argv[i];i++){
		ala = ympyranAla(atof(argv[i]));
		til = pallonTilavuus(atof(argv[i]));
		printf("Säteen %f omaavan ympyrän ala ja pallon tilavuus: %.10Lf ja %.10Lf\n",atof(argv[i]),ala,til);
		piiri = 2 * PII * atof(argv[i]);
		printf("Säteen %f omaavan ympyrän piiri on %.10Lf\n",atof(argv[i]),piiri);
	}
	return 0;
}

