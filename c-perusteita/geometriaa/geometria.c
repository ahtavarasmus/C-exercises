#include <stdio.h>
#include "geometria.h"


const long double PII =3.141592653589793238462643383279502884197169;

double ympyranAla(double sade){
	return PII * sade * sade;
}

double pallonTilavuus(double sade){
	return (4 * PII * sade * sade * sade)/3;
}
