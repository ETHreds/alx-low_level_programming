#include <stdio.h>
/**
 * main - upper and lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	/*Uppercase*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	/*Lowercase*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
