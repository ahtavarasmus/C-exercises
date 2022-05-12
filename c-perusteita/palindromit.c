#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, j,len,is;
	is = 1;
	for (i = 1; argv[i]; i++){
		len = strlen(argv[i])-1;
		j = 0;
		while (len > j){
			if (tolower(argv[i][j++]) != tolower(argv[i][len--])){
				is = 0;
			}
		}

		if (is){
			printf("\"%s\": on palindromi\n",argv[i]);
		}
		else {
			printf("\"%s\": ei ole palindromi\n",argv[i]);
		}
		is = 1;
	}
	return 0;
}
