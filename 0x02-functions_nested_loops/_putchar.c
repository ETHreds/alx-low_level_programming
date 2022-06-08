#include <unistd.h>
/**
 * putchar- prins _putchat to stdout
 * @c : the charcter to print
 * Reurn:On success 1
 * on error, -1 is eturned
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
