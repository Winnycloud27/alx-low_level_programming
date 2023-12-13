#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: points to the first node
 *
 * Return: sum of all the data (n)
*/

int sum_listint(listint_t *head)
{
	/* A local variable to the function that sums all the data (n) */
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
