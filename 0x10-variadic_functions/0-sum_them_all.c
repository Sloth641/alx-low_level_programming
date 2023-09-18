#include "variadic_functions.h"
/**
 * sum_them_all - prints name of function
 *
 * @n: num of arg
 * @...: args
 *
 * Return: sum of args.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list param;

	if (n <= 0)
	{
		return (0);
	}
	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(param, int);
	}
	va_end(param);
	return (sum);
}
