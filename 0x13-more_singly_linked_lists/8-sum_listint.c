#include "lists.h"

/**
 * sum_listint - Pointer
 * @head: Pointer
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the total of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
