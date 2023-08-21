#include "main.h"

/**
 * swap_int - swap two integer memory locations
 *
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
