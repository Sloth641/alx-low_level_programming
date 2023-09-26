#include "lists.h"
/**
 * print_listint - prints all elements of lists
 *
 * @h: pointer to list node
 *
 * Return: no. of elements of list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *c = h;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		n++;
	}
	return (n);
}
