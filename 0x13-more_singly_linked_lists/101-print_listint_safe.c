#include "lists.h"
/**
 * reall - helper fun
 *
 * @l: pointer to old list
 * @s: new size
 * @new: pointer to new list
 *
 * Return: new list
 */
const listint_t **reall(const listint_t **l, size_t s, const listint_t *new)
{
	size_t i;
	const listint_t **c;

	c = malloc(s * sizeof(listint_t *));
	if (c == NULL)
	{
		free(l);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
	{
		c[i] = l[i];
	}
	c[i] = new;
	free(l);
	return (c);
}
/**
 * print_listint_safe - prints all elements of lists
 *
 * @head: pointer to list node
 *
 * Return: no. of elements of list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (n);
			}
		}
		n++;
		list = reall(list, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (n);
}
