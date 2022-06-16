#include "main.h"

/**
 **_strncat- COmpares TWO LITERAL STRINGS
 *@s1:pointer to string
 *@s2: pointer to string
 *Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	
	int strCompStat = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	strCompStat = (*s1 == *s2)?0: (s1 > s2)?1: -1;

	return (strCompStat);

}
