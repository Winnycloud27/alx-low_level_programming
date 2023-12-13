#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node
 * at index of a listint_t linked list
 * @head: double pointer
 * @index: index of node to be deleted.
 *
 * Return: 1 if successful otherwise, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
