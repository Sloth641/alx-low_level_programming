#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 *
 * @b: input string
 *
 * Return: the converted number, or 0 if failed.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;
	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}
	if (!printed)
	{
		_putchar('0');
	}

}
