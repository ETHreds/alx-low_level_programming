#include "main.h"

/**
 *factorial-get factoral
 *@n: number of factoral
 *
 *Return:integer to represent succes or error
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return(n * factorial(n - 1));
}
