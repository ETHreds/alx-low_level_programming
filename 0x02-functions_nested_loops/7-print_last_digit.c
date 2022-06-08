#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: the int to extract the last digit from
  * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last =  _abs((n % 10));

	_putchar(last + '0');
return (0);
}
