#include "main.h"

/**
 * _isdigit - check if character is a number.
 *
 * @c: input to function
 * Return: 1 if number, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
