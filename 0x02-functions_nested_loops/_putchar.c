#include <unistd.h>
/**
 * _putchar - writes th echaracter c to stdout
 * @c : The character to print 
 *
 * Return; On succes 1.
 * On error, -1 is returned, and en is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
