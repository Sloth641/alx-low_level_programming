#include "main.h"
/**
 * clear_bit - Function sets the value of a bit to 1 at a given index.
 *
 * @n: input decimal number
 * @index: no. bit required
 *
 * Return: the bit required.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}
	return (1);
}
