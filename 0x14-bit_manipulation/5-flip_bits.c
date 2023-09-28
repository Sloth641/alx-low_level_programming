#include "main.h"
/**
 * flip_bits - calculates the number of bits you would need to flip 
 * to get from one number to another.
 *
 * @n: input decimal number
 * @m: input decimal number
 *
 * Return: number of bits you would need to flip 
 * to get from one number to another.
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
