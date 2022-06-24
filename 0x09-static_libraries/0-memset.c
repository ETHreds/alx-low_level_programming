#include "main.h"

/**
 **_memset- fills memeor with a constant byte
 *@s: memory area to be filled
 *@b:char to copy
 *@n:nu,ber of bytes to be filled
 *Return:pointer to memoey area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
