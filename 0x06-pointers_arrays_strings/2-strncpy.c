#include "main.h"

/**
 **_strncpy - Copies no mre thanthe n characters b the aray pointed 
 *@dest:pointer destination string
 *@src: pointer to source string
 *@n:integer for max  length
 *Return: Character string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char* start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
