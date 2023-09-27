#include "lists.h"
/**
 * reverse_listint - reverse a list.
 *
 * @head: pointer to list node
 *
 * Return: pointer to new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	c = *head;
	*head = NULL;
	while (c != NULL)
	{
		next = c->next;
		c->next = *head;
		*head = c;
		c = next;
	}
	return (*head);
}
