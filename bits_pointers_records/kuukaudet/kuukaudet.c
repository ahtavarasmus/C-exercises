#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "kuukaudet.h"


const char* KK_NIMET[KK_LKM] = {
	"tammikuu",
	"helmikuu",
	"maaliskuu",
	"huhtikuu",
	"toukokuu",
	"kesäkuu",
	"heinäkuu",
	"elokuu",
	"syyskuu",
	"lokakuu",
	"marraskuu",
	"joulukuu"
};
const char KK_PAIVAT[2][KK_LKM] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	
int karkausvuosi(int vuosiluku)
{
	if (vuosiluku % 400 == 0)
		return 1;
	if (vuosiluku % 100 == 0)
		return 0;
	if (vuosiluku % 4 == 0){
		return 1;
	}
	return 0;
}
char kkPituus(const char *kkNimi, int vuosiluku)
{
	
	int i, j, len_1,len_2;

	char curr_char;
	int wrong = 0;
	for (i = 0; i < 12; ++i){
		/*len_1 = strlen(kkNimi);
		len_2 = strlen(KK_NIMET[i]);
		if (len_1 != len_2)
			return -1;*/
		for (j = 0; KK_NIMET[i][j] != '\0';j++){
			curr_char = kkNimi[j];
			if (KK_NIMET[i][j] != tolower(curr_char)){
				wrong = 1;
				break;
			}
		}
		if (wrong){
			wrong = 0;
			continue;
		}
		return KK_PAIVAT[karkausvuosi(vuosiluku)][i];
	}
	return -1;
}
