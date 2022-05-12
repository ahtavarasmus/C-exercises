#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "bitit.h"

void scharBitit(signed char x)
{
	int i,j,zero_bits, one_bits;
	char bit;
	zero_bits = 0;

	one_bits = 0;
	printf("%d\n",x);

	for (i = 7; i >= 0;--i){
		bit = (x >> i) & 1;
		if (bit){
			one_bits++;
			printf("1");
		}
		else {
			printf("0");
			zero_bits++;
		}
	}
	printf("\n%d\n",zero_bits);
	printf("%d\n",one_bits);
}

void shortBitit(short int x)
{
	int i,j,zero_bits, one_bits;
	char bit;
	zero_bits = 0;

	one_bits = 0;
	printf("%d\n",x);

	for (i = 15; i >= 0;--i){
		bit = (x >> i) & 1;
		if (bit){
			one_bits++;
			printf("1");
		}
		else {
			printf("0");
			zero_bits++;
		}
	}
	printf("\n%d\n",zero_bits);
	printf("%d\n",one_bits);
}
void intBitit(int x)
{
	int i,j,zero_bits, one_bits;
	char bit;
	zero_bits = 0;

	one_bits = 0;
	printf("%d\n",x);

	for (i = 31; i >= 0;--i){
		bit = (x >> i) & 1;
		if (bit){
			one_bits++;
			printf("1");
		}
		else {
			printf("0");
			zero_bits++;
		}
	}
	printf("\n%d\n",zero_bits);
	printf("%d\n",one_bits);
}
void longBitit(long int x)
{
	int i,j,zero_bits, one_bits;
	char bit;
	zero_bits = 0;

	one_bits = 0;
	printf("%ld\n",x);

	for (i = 63; i >= 0;--i){
		bit = (x >> i) & 1;
		if (bit){
			one_bits++;
			printf("1");
		}
		else {
			printf("0");
			zero_bits++;
		}
	}
	printf("\n%d\n",zero_bits);
	printf("%d\n",one_bits);
}
