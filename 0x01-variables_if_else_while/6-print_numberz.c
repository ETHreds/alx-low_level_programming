#include <stdio.h>
/**
 * main - USING PUTCHAR TO PRINT INTEGERS
 * Return: 0
 */
int main(void)
{
	int numz;

	for (numz = 0; numz < 10; numz++)
	{
		putchar(numz + '0');
	}
	putchar('\n');
return (0);
}
