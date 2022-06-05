#include <stdio.h>
/**
 * main -Print in triples
 * Return: 0
 */
int main(void)
{
	/*declare the integers*/
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && j != k && i != k && i < j && k > j)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
