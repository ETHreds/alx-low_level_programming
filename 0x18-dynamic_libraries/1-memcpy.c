#include "main.h"
/**
 * *_memcpy-copies memory
 * @dest: whre its copied to
 * @src:whats copied
 * @n:number of bytes to be xopied
 *
 * Return:pointer to the destination
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);

	}
	return (dest);
}
