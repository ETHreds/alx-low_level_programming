#include "main.h"
int sqRt(int n, int i);
int _pow_recursion(int x, int y);
/**
 *_sqrt_recursion- give me squareroot
 *@n:evaluating integer
 *
 *Return: integer
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqRt(n, 0));

}

/**
 *sqRt-finds natural square root
 *@n:integer arg
 *@i: integer arg
 *
 *Return:squareroot
 */

int sqRt(int n, int i)
{
	int square;
	int *p;

	p = &i;

	square = _pow_recursion(*p, 2);

	if (square > n)
		return (-1);
	if (square == n)
		return (i);

	return (sqRt(n, i + 1));
}

/**
 *_pow_recursion-exponential
 *@x: base
 *@y: exponent
 *
 *Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
