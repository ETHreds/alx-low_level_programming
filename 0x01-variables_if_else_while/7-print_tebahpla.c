#include <stdio.h>
/**
 * main - zee to a (decrementing)
 * Return: 0
 */
int main(void)
{
	char z_a = 'z';

	while (z_a >= 'a')
	{
		putchar(z_a);
		z_a--;
	}
	putchar('\n');
return (0);
}
