#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: string to be scanned
  * @accept: string containing the chars to match
  *
  * Return: length of matching segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
