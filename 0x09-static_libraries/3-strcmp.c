#include "main.h"

/**
 **_strncmp- COmpares TWO LITERAL STRINGS
 *@s1:pointer to string
 *@s2: pointer to string
 *Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int strCompStat = 0;

	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;

	strCompStat = (*(s1 + i) - *(s2 + i));


	return (strCompStat);

}
