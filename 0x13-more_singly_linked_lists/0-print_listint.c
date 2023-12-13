#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This is a function that returns the
 * number of elements in a linked listint_t list
 * @h: head of linklist node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
