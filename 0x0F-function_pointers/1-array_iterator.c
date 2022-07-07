#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator- function wrapper
 *@array:array to iterate over
 *@size:size of the array
 *@action: pointer to the called function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (!array || !action)
		return;

	do {
		action(array[i]);
		i++;
	}while(i < size);
}
