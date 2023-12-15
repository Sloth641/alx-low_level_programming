#include "main.h"
/**
 * get_bit -  Function prints the binary representation of a number.
 *
 * @n: input decimal number
 * @index: no. bit required
 *
 * Return: the bit required.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
