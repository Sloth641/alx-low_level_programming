#include "lists.h"
#include <string.h>
/**
 * _strlen - calcualtes the length of a string.
 *
 * @s: pointer to int
 *
 * Return: returns the length of a string as integer.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to list_t.
 * @str: pointer to string.
 *
 * Return: pointer to new list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *c = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
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
