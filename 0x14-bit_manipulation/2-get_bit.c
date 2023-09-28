#include "main.h"
/**
 * get_bit -  prints the binary representation of a number.
 *
 * @n: input decimal number
 * @index: no. bit required
 *
 * Return: the bit required.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}
