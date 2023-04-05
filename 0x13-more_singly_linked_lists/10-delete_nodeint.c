#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: pointer to a struct
 * @index: index val
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = NULL;
	temp = *head;
	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
