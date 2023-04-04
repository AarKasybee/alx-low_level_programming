#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint -  pop_listintdeletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to a struct
 *
 * Returns: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *temp = *head;

		data = temp->n;
		*head = (*head)->next;
		free(temp);
		return (data);
	}
}
