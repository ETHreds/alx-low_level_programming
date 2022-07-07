#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name- sprints a name
 *@name:a string
 *@f:called function
 *
 */

void print_name(char *name, void (*f)(char*))
{
	if (!f || !name)
		return;

	f(name);
}
