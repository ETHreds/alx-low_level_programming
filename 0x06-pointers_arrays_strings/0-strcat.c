#include "main.h"

/**
  **_strcat- concatenates two strings
  *@dest: destination pointer
  *@src: source pointer
  *Return:character
  */

char *_strcat(char *dest, char *src)
{
	/*Make a copy*/
	char *con;

	con = dest;

	/*Find the end of dest string*/
	while (*dest != '\0')
	{
		dest++;
	}
	/*Now append till end \0*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/*Add null character to show end*/
	*dest = '\0';

	return (con);
}
