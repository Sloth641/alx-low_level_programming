#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - searches a string for any of a set of bytes.
 *
 * @a: input rows
 * @size: array dimensions
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int leftDiagonalSum = 0, rightDiagonalSum = 0;

	for (i = 0; i < size; i++)
	{
		leftDiagonalSum += a[i];
		rightDiagonalSum += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", leftDiagonalSum, rightDiagonalSum);
}
