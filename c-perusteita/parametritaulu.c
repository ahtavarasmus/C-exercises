#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int count, left_max_len, right_max_len, i, j;
	char hash,pipe,dash,plus,space;
	hash = '#';
	pipe = '|';
	dash = '-';
	plus = '+';
	space = ' ';
	right_max_len = strlen(argv[1]);
	for (i = 2; argv[i]; i++){
		right_max_len = strlen(argv[i]) > right_max_len ? strlen(argv[i]) 			: right_max_len;
	}
	left_max_len = 0;
	while (i>0){
		left_max_len++;
		i /= 10;
	}

	printf("%c%c",hash,hash);
	for (j = 0; j< left_max_len;j++){
		printf("%c",hash);
	}
	printf("%c%c%c",hash,hash,hash);
	for (j = 0; j< right_max_len;j++){
		printf("%c",hash);
	}
	printf("%c%c\n",hash,hash);
	for (i = 1; argv[i]; i++){
		if (i != 1){
			printf("%c%c",hash,dash);
			for (j = 0; j< left_max_len;j++){
				printf("%c",dash);
			}
			printf("%c%c%c",dash,plus,dash);
			for (j = 0; j< right_max_len;j++){
				printf("%c",dash);
			}
			printf("%c%c\n",dash,hash);
		}
		printf("%c %*d ",hash,left_max_len,i);
		printf("%c",pipe);
		printf(" %-*s %c",right_max_len,argv[i],hash);
		printf("\n");
	}
	printf("%c%c",hash,hash);
	for (j = 0; j< left_max_len;j++){
		printf("%c",hash);
	}
	printf("%c%c%c",hash,hash,hash);
	for (j = 0; j< right_max_len;j++){
		printf("%c",hash);
	}
	printf("%c%c\n",hash,hash);



	return 0;
}
