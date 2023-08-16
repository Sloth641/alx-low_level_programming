#include "main.h"
/**
 *print_last_digit - gets last digit of given number and prints it
 *
 *@n: input number for fn
 *
 * Return: returns last digit.
 *
*/
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		d = (-1) * (n % 10);
	}
	else
	{
		d = n % 10;
	}
	return (d);

}
