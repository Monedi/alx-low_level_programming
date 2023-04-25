#include "lists.h"

/**
 * add_nodeint - Pointer
 * @head: Pointer
 * @n: Variable
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the location of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
