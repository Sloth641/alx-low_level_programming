#include "lists.h"
/**
 * pop_listint - frees lists
 *
 * @head: pointer to list node
 *
 * Return: head->n.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *c = *head, *t;

	if (c == NULL)
	{
		return (0);
	}
	n = c->n;
	t = c->next;
	*head = t;
	free(c);
	return(n);
}
