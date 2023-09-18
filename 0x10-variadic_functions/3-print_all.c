#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: type of arg
 * @...: args
 *
 * Return: sum of args.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *s = "";
	va_list param;

	va_start(param, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(param, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(param, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(param, double));
					break;
				case 's':
					str = va_arg(param, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(param);
}
