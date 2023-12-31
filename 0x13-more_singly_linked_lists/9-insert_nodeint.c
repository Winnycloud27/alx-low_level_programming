#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @head: pointer
 * @idx: index of the node
 * @n: new node variable
 * Return: the address of the new node, or NULL if it fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
