#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to list_t.
 * @n: integer
 *
 * Return: pointer to new list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *c = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (c->next != NULL)
	{
		c = c->next;
	}
	c->next = newNode;
	return (*head);
}
