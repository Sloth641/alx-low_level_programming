#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: input decimal number
 * @index: no. bit required
 *
 * Return: the bit required.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int c = 0;

	while (diff)
	{
		if (diff & 1ul)
			c++;
		diff = diff >> 1;
	}
	return (c);
}
