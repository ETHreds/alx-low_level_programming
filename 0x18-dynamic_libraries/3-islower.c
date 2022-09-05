#include "main.h"
/**
  *_islower -takes integer. Checkers if character is lowercase
  *@c: character to check
  *Return:1 (sucess)
  */
int _islower(int c)
{
	if (c >= 'a' && c < 'z')
		return (1);
	else
		return (0);
}
