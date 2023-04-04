#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to a struct
 *
 * Returns: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}
	head = NULL;
}
