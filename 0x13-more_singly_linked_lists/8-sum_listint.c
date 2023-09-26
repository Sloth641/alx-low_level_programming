#include "lists.h"
/**
 * sum_listint -  gets the sum of all data in list.
 *
 * @head: pointer to list node
 *
 * Return:  returns the sum of all data in list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *c = head;

	if (c == NULL)
	{
		return (0);
	}
	while (c != NULL)
	{
		sum += c->n;
		c = c->next;
	}
	return (sum);
}
