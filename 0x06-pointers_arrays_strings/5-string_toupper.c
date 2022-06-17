#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */

char *string_toupper(char *str)

{
	char* s = str;


	while(*s != '\0')
	{
		if( *s >= 'a' && *s <= 'z')
			*s = *s - ('a' - 'A');
		s++;

	}
	return (str);
}
