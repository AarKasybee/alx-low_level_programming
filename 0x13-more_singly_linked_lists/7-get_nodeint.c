#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to a struct
 * @index: index number
 *
 * Returns:  returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i = 0;
		listint_t *val = NULL;

		while (i < index)
		{
			head = head->next;
			i++;
		}
		if (head != NULL)
		{
			val = head;
		}
	return (val);
	}
}
