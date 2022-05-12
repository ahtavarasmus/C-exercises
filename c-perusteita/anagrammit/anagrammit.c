#include <stdio.h>
#include <limits.h>
#include "anagrammit.h"

int anagrammeja(char mj1[], char mj2[])
{
	int i, mj1_len, mj2_len;
	char lkmt[UCHAR_MAX+1];
	mj1_len = strlen(mj1);
	mj2_len = strlen(mj2);
	for (i = 0; i <= UCHAR_MAX;++i){
		lkmt[i] = 0;
	}
	for (i = 0; i < mj1_len; ++i){
		lkmt[(unsigned char) mj1[i]]++;
	}
	for (i = 0; i < mj2_len; ++i){
		lkmt[(unsigned char) mj2[i]]--;
	}
	for (i = 0; i <= UCHAR_MAX; ++i){
		if (lkmt[i] != 0){
			return 0;
		}
	}
	return 1;

}
