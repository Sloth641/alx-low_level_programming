#include "lists.h"
/**
 * delete_nodeint_at_index - delet node at given position
 *
 * @head: pointer to list node
 * @index: integer
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *c, *cn;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		c = *head;
		*head = (*head)->next;
		free(c);
		return (1);
	}
	c = *head;
	while (c != NULL)
	{
		if (i == index)
		{
			cn->next= c->next;
			free(c);
			return (1);
		}
		i++;
		cn = c;
		c = c->next;
	}
	return (-1);
}
