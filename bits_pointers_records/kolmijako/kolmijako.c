#include <stdio.h>
#include "kolmijako.h"


IntPari kolmijako(unsigned int n, int t[], int vipu1, int vipu2, int *p1, int *p2)
{
	int i,idx,tmp;	
	IntPari new_pair;

	idx = 0;
	if (t[vipu1] > t[vipu2]){
		tmp = vipu1;
		vipu1 = vipu2;
		vipu2 = tmp;
	}

	for (i = 0; i < n; i++){
		if (t[i] < t[vipu1]){
			if (vipu1 == idx)
				vipu1 = i;
			if (vipu2 == idx)
				vipu2 = i;
			tmp = t[idx];
			t[idx] = t[i];
			t[i] = tmp;
			idx++;
		}
	}

	if (vipu2 == idx)
		vipu2 = vipu1; 
	tmp = t[idx];
	t[idx] = t[vipu1];
	t[vipu1] = tmp;
	/* first i mean x point assignement seremony:) */
	*p1 = idx;
	new_pair.x = idx;
	idx++;


	for (i = idx; i < n; i++){
		if (t[i] < t[vipu2]){
			if (vipu2 == idx)
				vipu2 = i;
			tmp = t[idx];
			t[idx] = t[i];
			t[i] = tmp;
			idx++;
		}
	}

	tmp = t[vipu2];
	t[idx] = t[idx];
	t[vipu2] = tmp;

	*p2 = idx;

	new_pair.y = idx;

	return new_pair;
}
