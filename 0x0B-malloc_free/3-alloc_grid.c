#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers.
 *
 * @width: input
 * @height: input
 *
 * Return: a pointer to a 2 dimensional array of integers.
 *
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * sizeof(int));
			if (arr[i] == 0)
			{
				while (i--)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
	}
	return (arr);
}
