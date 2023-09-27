#include "lists.h"
/**
 * find_listint_loop - helper fun
 *
 * @head: pointer to list
 *
 * Return: new list
 */
listint_t *find_listint_loop(const listint_t *head)
{
	listint_t *cur, *last;

	if (head == NULL)
	{
		return (NULL);
	}
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
		{
			return (last);
		}
		for (cur = head; cur != NULL; cur = cur->next)
		{
			if (cur == last->next)
			{
				return (last->next);
			}
		}
	}
	return (NULL);
}
