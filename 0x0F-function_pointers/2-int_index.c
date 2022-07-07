#include "function_pointers.h"

/**
 *int_index- searches integer
 *@array:array to be canned
 *@size: size of the array
 *@cmp: compaator function pointer
 *
 *Return: index of first similar element(on succes)
 *	0 on no matches
 *	-1 when size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
