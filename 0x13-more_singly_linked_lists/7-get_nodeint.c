#include "lists.h"
/**
 * get_nodeint_at_index -  gets the nth node of a listint_t linked list.
 *
 * @head: pointer to list node
 *
 * Return:  returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *c = head;

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= index; i++)
	{
		c = c->next;
	}
	return(c);
}