#include "main.h"

/**
 * _strdup -  allocates space in memory, which contains a copy of str
 *
 * @str: input string
 *
 * Return:  a pointer to a newly allocated space in memory.
 *
 */
char *_strdup(char *str)
{
	char *arr;
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	arr = malloc(size * sizeof(*str) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = str[i];
		}
	}
	return (arr);
}
