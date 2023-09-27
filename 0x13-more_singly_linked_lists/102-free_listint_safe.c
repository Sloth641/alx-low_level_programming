#include "lists.h"
/**
 * find_listint_loop - helper fun
 *
 * @head: pointer to list
 *
 * Return: new list
 */
listint_t *find_listint_loop_cp(listint_t *head)
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
			return(last);
		}
		for (cur = head; cur != last; cur = cur->next)
		{
			if (cur == last->next)
			{
				return (last->next);
			}
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - prints all elements of lists
 *
 * @h: pointer to list node
 *
 * Return: no. of elements of list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopn;
	size_t ln;
	int loop = 1;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	loopn = find_listint_loop_cp(*h);
	for (ln = 0; (*h != loopn || loop) && *h != NULL; *h = next)
	{
		ln++;
		next = (*h)->next;
		if (*h == loopn && loop)
		{
			if (loopn == loopn->next)
			{
				free(*h);
				break;
			}
			ln++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (ln);
}
