#include <stdio.h>
#include <ctype.h>
#include <string.h>

void muunna(char mj[])
{
	int i,len;
	char temp;
	len = strlen(mj);

	for (i = 0; i < len/2;i++){
		temp = mj[i];
		mj[i] = mj[len-1-i];
		mj[len-1-i] = temp;
	}
	for (i = 0; i < len;i++){
		if (mj[i] == toupper(mj[i])){
			mj[i] = tolower(mj[i]);
		} else {
			mj[i] = toupper(mj[i]);
		}
	}
	
}
