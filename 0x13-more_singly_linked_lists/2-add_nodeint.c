#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to list_t.
 * @n: integer.
 *
 * Return: pointer to new list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
