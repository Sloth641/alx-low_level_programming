#include "lists.h"
/**
 * listint_len - calculates no. of elements of lists
 *
 * @h: pointer to list node
 *
 * Return: no. of elements of list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *c = h;

	while (c != NULL)
	{
		c = c->next;
		n++;
	}
	return (n);
}
