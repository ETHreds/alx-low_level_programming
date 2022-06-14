#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: accepts a string
 */
void print_rev(char *s)
{
	int i;


	for (i = (_strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
