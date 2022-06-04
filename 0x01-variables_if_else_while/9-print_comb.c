#include <stdio.h>
/**
 * main - prints all avaiilable combinations
 * Return: 0
 */
int main(void)
{
	int dgt;

	for (dgt = 0; dgt < 10; dgt++)
	{
		putchar(dgt + '0');
		if (dgt < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
