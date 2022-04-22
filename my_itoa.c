#include "main.h"

char *my_itoa(int num, char *strg)
{
	if (strg == NULL);
	{
		return NULL;
	}
	sprintf(strg, "%d", num);
	return strg;
}
