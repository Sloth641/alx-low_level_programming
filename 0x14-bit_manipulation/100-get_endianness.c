#include "main.h"
/**
 * get_endianness - Function checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
