#include <stdio.h>
/**
 * main - example for != operator
 * Return: 0
 */
int main(void)
{
	char alphbt = 'a';

	/*print*/
	while (alphbt <= 'z')
	{
		if ( alphbt != 'e' && alphbt != 'q')
		{
			putchar(alphbt);
		}
		alphbt++;
		putchar('\n');
	}
return (0);
}
