#include "main.h"

/**
 * create_array - creates an array of chars, and fills it with a specific char.
 *
 * @size: size of array
 * @c: char to init
 *
 * Return: pointer to the array, or NULL if it fails.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);
	if (size == 0 || arr == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
