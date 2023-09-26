#include "lists.h"
/**
 * print_list - prints all elements of lists
 *
 * @h: pointer to list node
 *
 * Return: no. of elements of list.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		if (c->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", c->len, c->str);
		}
		c = c->next;
		n++;
	}
	return (n);
}
