#include "main.h"

/**
 * _strlen -  calculates length of string.
 *
 * @str: input string
 *
 * Return: length of string
 *
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _calloc - memory for an array, using malloc and sets it to zero.
 *
 * @nmemb: input no. of elements
 * @size: input size
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size * nmemb; i++)
		{
			ptr[i] = 0;
		}
	}
	return ((void *)ptr);
}
