#include "main.h"
/**
 * array_range - allocates memory using malloc.
 *
 * @min: input
 * @max: input
 *
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
