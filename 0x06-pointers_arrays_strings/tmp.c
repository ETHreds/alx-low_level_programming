#include "main.h"

/**
 **_strncat- CONCATENATES TWO LITERAL STRINGS
 *@dest:pointer destination string
 *@src: pointer to source string
 *@n:integer for max  length
 *Return: Character string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destcp = dest;

	while (*destcp != '\0')
	{
		destcp++;
	}
	while (n--)
	{
		if (!(*destcp++ = *src++))
		{
			return (dest);
		}
	}
	*destcp = '\0';

	return (dest);
}
