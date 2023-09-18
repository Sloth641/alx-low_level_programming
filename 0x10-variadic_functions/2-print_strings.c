#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 *
 * @separator: input
 * @n: num of arg
 * @...: args
 *
 * Return: nothing.
 */
oid print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;

	if (n <= 0)
	{
		return;
	}
	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(param, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param);
}
