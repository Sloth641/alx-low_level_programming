#include "lists.h"
/**
 * get_nodeint_at_index -  gets the nth node of a listint_t linked list.
 *
 * @head: pointer to list node
 * @index: integer
 *
 * Return:  returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *c;

	if (head == NULL)
	{
		return (NULL);
	}
	c = head;
	for (i = 0; i < index; i++)
	{
		if (c != NULL)
		{
			c = c->next;
		}
	}
	return (c);
}
