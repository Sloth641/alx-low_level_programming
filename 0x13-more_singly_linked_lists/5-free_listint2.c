#include "lists.h"
/**
 * free_listint2 - frees lists
 *
 * @head: pointer to list node
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *c = *head, *t;

	if (c == NULL)
	{
		return;
	}
	while (c != NULL)
	{
		t = c->next;
		free(c);
		c = t;
	}
	*head = NULL;
}
