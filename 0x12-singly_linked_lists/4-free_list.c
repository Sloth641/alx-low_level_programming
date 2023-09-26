#include "lists.h"
/**
 * free_list - frees lists
 *
 * @head: pointer to list node
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *c = head, *t;

	if (c == NULL)
	{
		return;
	}
	while (c != NULL)
	{
		t = c->next;
		free(c->str);
		free(c);
		c = t;
	}
	head = NULL;
}
