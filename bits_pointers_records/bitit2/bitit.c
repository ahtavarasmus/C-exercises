#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

void kaannaScharBitit(signed char *x)
{
	int i;
	char bit,bit_first;
	for (i = 7; i >= 8/2; --i){
		bit = ((*x) >> i) & 1;
		bit_first = ((*x) >> (7-i)) & 1; 

		if (bit){
			*x = *x | (1 << (7-i));
		} else {
			*x = *x & ~(1 << (7-i));
		}
		if (bit_first){
			*x = *x | (1 << i);
		} else {
			*x = *x & ~(1 << i);
		}
		
	}

}
void kaannaShortBitit(short *x)
{
	int i;
	char bit,bit_first;
	for (i = 15; i >= 16/2; --i){
		bit = ((*x) >> i) & 1;
		bit_first = ((*x) >> (15-i)) & 1; 

		if (bit){
			*x = *x | (1 << (15-i));
		} else {
			*x = *x & ~(1 << (15-i));
		}
		if (bit_first){
			*x = *x | (1 << i);
		} else {
			*x = *x & ~(1 << i);
		}
		
	}

}
void kaannaIntBitit(int *x)
{
	int i;
	char bit,bit_first;
	for (i = 31; i >= 32/2; --i){
		bit = ((*x) >> i) & 1;
		bit_first = ((*x) >> (31-i)) & 1; 

		if (bit){
			*x = *x | (1 << (31-i));
		} else {
			*x = *x & ~(1 << (31-i));
		}
		if (bit_first){
			*x = *x | (1 << i);
		} else {
			*x = *x & ~(1 << i);
		}
		
	}
}

void kaannaLongBitit(long *x)
{
	int i;
	char bit,bit_first;
	for (i = 63; i >= 64/2; --i){
		bit = ((*x) >> i) & 1L;
		bit_first = ((*x) >> (63-i)) & 1L; 

		if (bit){
			*x = *x | (1L << (63-i));
		} else {
			*x = *x & ~(1L << (63-i));
		}
		if (bit_first){
			*x = *x | (1L << i);
		} else {
			*x = *x & ~(1L << i);
		}
		
	}
}
