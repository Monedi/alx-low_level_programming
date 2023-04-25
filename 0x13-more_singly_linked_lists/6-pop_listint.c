#include "lists.h"

/**
 * pop_listint - Prototype
 * @head: Pointer
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head's data to (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
