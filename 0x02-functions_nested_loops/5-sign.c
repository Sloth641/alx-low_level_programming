#include "main.h"
/**
 *print_sign - checks if number is >0 or =0 or <0
 *
 *@n: input number for fn
 *
 * Return: returns 1 if +ve, returns if =0, rwturns -1 if -ve
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
