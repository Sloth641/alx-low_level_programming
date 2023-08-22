#include <stdio.h>

/**
 * print_array - prints array of n elements
 *
 * @a: input array
 * @n: number of elemnets of array
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
