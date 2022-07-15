#include "lists.h"

/**
*list_len - number of elements in a list
*@h: singly linked list
*Return: count of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
