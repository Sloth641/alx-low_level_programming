#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of the first element, If no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
