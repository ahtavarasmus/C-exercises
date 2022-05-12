enum {
	TAMMIKUU = 0,
	HELMIKUU,
	MAALISKUU,
	HUHTIKUU,
	TOUKOKUU,
	KESAKUU,
	HEINAKUU,
	ELOKUU,
	SYYSKUU,
	LOKAKUU,
	MARRASKUU,
	JOULUKUU,
	KK_LKM
};
const char* KK_NIMET[KK_LKM];
const char KK_PAIVAT[2][KK_LKM];

int karkausvuosi(int);
char kkPituus(const char*, int);
