#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at given position
 *
 * @head: pointer to list node
 * @idx: index
 * @n: data for node
 *
 * Return:  returns the new list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *c, *newNode = malloc(sizeof(listint_t));

	if (head == NULL || newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	c = *head;
	while (c != NULL)
	{
		if (i == idx - 1)
		{
			newNode->next = c->next;
			c->next = newNode;
			return (newNode);
		}
		i++;
		c = c->next;
	}
	free(newNode);
	return (NULL);
}
