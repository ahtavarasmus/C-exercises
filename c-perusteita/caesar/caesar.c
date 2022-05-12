#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>


void caesarKoodaa(char mj[], char aakkosto[], char korvaavat[])
{
	int i,j,mj_len,a_len;
	char korvaus[UCHAR_MAX+1];
	a_len = strlen(aakkosto);
	mj_len = strlen(aakkosto);

	for (i = 0; i <= UCHAR_MAX; i++){
		korvaus[i] = i;
	}
	for (i = 0; i < a_len; i++){
		korvaus[(unsigned char) aakkosto[i]] = korvaavat[i];
	}

	for (i = 0; i < mj_len; ++i){
		mj[i] = korvaus[(unsigned char) mj[i]];
	}

}
