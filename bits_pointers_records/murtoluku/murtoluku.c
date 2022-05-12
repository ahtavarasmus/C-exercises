#include <stdio.h>
#include <stdlib.h>
#include "murtoluku.h"

int syt(int a, int b)
{
	int pieni, iso,tmp;
	pieni = abs(a);
	iso = abs(b);
	if (pieni > iso){
		tmp = iso;
		iso = pieni;
		pieni = tmp;
	}
	
	while (pieni != iso){
		iso = iso-pieni;
		if (iso < pieni){
			tmp = iso;
			iso = pieni;
			pieni = tmp;
		}
	}
	return iso;

}
int gcd(int a,int b)
{
    if(a%b==0)
    return b;
    else
    gcd(b,a%b);
}

Murtoluku supistettuML(int os, int nim)
{
	int os_new, nim_new;
	int pieni, iso,tmp;
	Murtoluku ML;
	if (nim == 0 || os == 0){
		ML.os = os;
		ML.nim = nim;
		return ML;
	}

	pieni = abs(os);
	iso = abs(nim);
	if (pieni > iso){
		tmp = iso;
		iso = pieni;
		pieni = tmp;
	}
	
	while (pieni != iso){
		iso = iso-pieni;
		if (iso < pieni){
			tmp = iso;
			iso = pieni;
			pieni = tmp;
		}
	}

	os_new = os/iso;
	os_new = nim/iso;

	ML.os = os_new;
	ML.nim = nim_new;
	return ML;
	
}

Murtoluku lisaaML(Murtoluku a, Murtoluku b)
{

	int sytek,a_os,a_nim,b_os,b_nim;
	int pieni, iso,tmp;
	pieni = abs(a.nim);
	iso = abs(b.nim);
	if (pieni > iso){
		tmp = iso;
		iso = pieni;
		pieni = tmp;
	}
	
	while (pieni != iso){
		iso = iso-pieni;
		if (iso < pieni){
			tmp = iso;
			iso = pieni;
			pieni = tmp;
		}
	}


	a_os = a.os*gcd(a.nim,b.nim);
	a_nim = a.nim*gcd(a.nim,b.nim);
	b_os = b.os*gcd(a.nim,b.nim);
	b_nim = b.nim*gcd(a.nim,b.nim);


	return supistettuML(a_os+b_os,a_nim);
}

Murtoluku vahennaML(Murtoluku a, Murtoluku b)
{
	int sytek,a_os,a_nim,b_os,b_nim;
	sytek = syt(a.nim,b.nim); 

	a_os = a.os*sytek;
	a_nim = a.nim*sytek;
	b_os = b.os*sytek;
	b_nim = b.nim*sytek;


	return supistettuML(a_os-b_os,a_nim);
}

Murtoluku kerroML(Murtoluku a, Murtoluku b)
{
	int os,nim;

	os = a.os * b.os;
	nim = a.nim * b.nim;

	return supistettuML(os,nim);
}

Murtoluku jaaML(Murtoluku a, Murtoluku b)
{
	int os,nim;

	os = a.os * b.os;
	nim = a.nim * b.nim;

	return supistettuML(os,nim);
}

void tulostaML(Murtoluku ml)
{
	if (ml.os != 0 && ml.nim != 1)
		printf("%d/%d",ml.os,ml.nim);
	if (ml.os == 0)
		printf("0");
	if (ml.nim == 1)
		printf("%d",ml.os);
}
