#include "lists.h"
/**
 * list_len - calculates no. of elements of lists
 *
 * @h: pointer to list node
 *
 * Return: no. of elements of list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		c = c->next;
		n++;
	}
	return (n);
}
