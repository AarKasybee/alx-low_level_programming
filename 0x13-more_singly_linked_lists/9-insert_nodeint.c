#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a
 * new node at a given position.
 * @head: pointer to a node
 * @idx: index of the list where the new node should be added
 * @n: value to be inserted at index = idx
 *
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
