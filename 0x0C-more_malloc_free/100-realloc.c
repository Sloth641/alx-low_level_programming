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
 * _realloc -  reallocates a memory block using malloc and free.
 *
 * @ptr: ptr to allocated space
 * @old_size: input old size
 * @new_size: input new size
 *
 * Return: a pointer to the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int i;

	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < old_size && i < new_size; i++)
			{
				*((char *)m + i) = *((char *)ptr + i);
			}
			free (ptr);
			ptr = NULL;
		}
	}
	return (m);
}
