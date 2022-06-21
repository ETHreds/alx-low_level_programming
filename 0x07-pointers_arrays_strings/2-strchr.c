#include "main.h"
#include <stdio.h>

/**
 **_strchr-searches a character in a string
 *@s:evaluatung string
 *@c:evaluator
 *
 *Return:pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int temp;

	while (1)
	{
		a = *s++;

		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
}
