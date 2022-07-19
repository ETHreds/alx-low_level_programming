#include "lists.h"

/**
*free_listint2 - free  linked list
*@head: listhead
*Return: none
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
