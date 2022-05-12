#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pvm.h"

Pvm *kasvataPvm(Pvm* pvm)
{
	int is_leap = 0;
	if (pvm->kk == 2){
		if (pvm->vuosi % 400 == 0)
			is_leap = 1;
		else if (pvm->vuosi % 100 == 0)
			is_leap = 0;
		else if (pvm->vuosi % 4 == 0)
			is_leap = 1;
		else 
			is_leap = 0;
	}
	if (is_leap){
		if (pvm->pv + 1 == 30){
			pvm->kk = 3;
			pvm->pv = 1;
		}
		else {
			pvm->pv++;
		}
	}
	else if (pvm->kk==1||pvm->kk==3||pvm->kk==5||pvm->kk==7||pvm->kk==8||pvm->kk==10||pvm->kk==12){
		if (pvm->pv == 31){
			pvm->pv = 1;
			if (pvm->kk == 12){
				pvm->vuosi++;
				pvm->kk = 1;
			} else {
				pvm->kk++;
			}
			
		} else {
			pvm->pv++;
		}	

	}
	else {
		if (pvm->pv == 30 || (pvm->kk == 2 && pvm->pv == 28)){
			pvm->pv = 1;
			pvm->kk++;
		} else {
			pvm->pv++;
		}

	}

	if (!strcmp(pvm->vk_pv, "ma"))
		strcpy(pvm->vk_pv, "ti");
	else if (!strcmp(pvm->vk_pv,"ti"))
		strcpy(pvm->vk_pv,"ke");
	else if (!strcmp(pvm->vk_pv,"ke"))
		strcpy(pvm->vk_pv,"to");
	else if (!strcmp(pvm->vk_pv,"to"))
		strcpy(pvm->vk_pv,"pe");
	else if (!strcmp(pvm->vk_pv,"pe"))
		strcpy(pvm->vk_pv,"la");
	else if (!strcmp(pvm->vk_pv,"la"))
		strcpy(pvm->vk_pv,"su");
	else if (!strcmp(pvm->vk_pv,"su"))
		strcpy(pvm->vk_pv,"ma");

	return pvm;
}


unsigned int pvmEro(const Pvm *a,const Pvm *b)
{
	int first,i,count;
	const Pvm *later;
	Pvm tmp;
	if (a->vuosi != b->vuosi){
		if (a->vuosi < b->vuosi)
			first = 1;
		else 
			first = 2;
	} else if (a->kk != b->kk){
		if (a->kk < b->kk)
			first = 1;
		else
			first = 2;
	} else if (a->pv != b->pv){
		if (a->pv < b->pv)
			first = 1;
		else 
			first = 2;
	} else {
		return 0;
	}

	if (first == 1){
		tmp.pv = a->pv;
		tmp.kk = a->kk;
		tmp.vuosi = a->vuosi;
		strcpy(tmp.vk_pv,a->vk_pv);
		later = b;
	} else {
		tmp.pv = b->pv;
		tmp.kk = b->kk;
		tmp.vuosi = b->vuosi;
		strcpy(tmp.vk_pv,b->vk_pv);
		later = a;
	}
	count = 0;
	while (1){
		kasvataPvm(&tmp);
		count++;
		if (tmp.vuosi != later->vuosi){
			continue;
		}
		if (tmp.kk != later->kk){
			continue;
		}
		if (tmp.pv != later->pv){
			continue;
		}
		break;

	}
	return count;



}

void tulostaPvm(Pvm *pvm)
{
	printf("%s ",pvm->vk_pv);
	printf("%d.",pvm->pv);
	printf("%d.",pvm->kk);
	printf("%d",pvm->vuosi);
}
