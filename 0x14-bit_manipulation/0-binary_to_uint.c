#include "main.h"
/**
 * binary_to_uint -  function converts a binary number to an unsigned int.
 *
 * @b: input string
 *
 * Return: the converted number, or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
