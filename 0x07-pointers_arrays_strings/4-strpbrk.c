#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: string to be scanned
  * @accept: strings containing chrs to match
  *
  * Return:pointer or null if no character 
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
