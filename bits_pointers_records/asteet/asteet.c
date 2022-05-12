#include <stdio.h>
#include "asteet.h"

float muunna(Lampotila a, Asteikko b)
{
	Asteikko curr_as = a.asteikko;
	if (curr_as == Celsius){
		if (b == Fahrenheit)
			return a.lampotila * 1.8 + 32;
		
		if (b == Kelvin)
			return a.lampotila + 273.15;
		return a.lampotila;
	}
	if (curr_as == Kelvin){
		if (b == Celsius)
			return a.lampotila - 273.15;
		if (b == Fahrenheit)
			return (a.lampotila - 273.15)*1.8+32;
		return a.lampotila;
	}
	else {
		if (b == Celsius)
			return (a.lampotila - 32) / 1.8;
		if (b == Kelvin)
			return ((a.lampotila - 32) / 1.8) + 273.15;
		return a.lampotila;
	}
	return 0;
}

float erotus(Lampotila a, Lampotila b, Asteikko c)
{
	float a_l,b_l;
	a_l = muunna(a, c);
	b_l = muunna(b, c);
	return a_l-b_l;

}
