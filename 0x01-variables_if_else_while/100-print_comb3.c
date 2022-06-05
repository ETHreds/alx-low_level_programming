#include <stdio.h>
/**
 * main - Print a combinatiion of two digits
 * Return: 0
 */
int main(void)
{
	int ones;
	int tens;

	for (tens = 0; tens < 10; tens++)
	{
		for (ones = tens + 1; ones < 10; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
