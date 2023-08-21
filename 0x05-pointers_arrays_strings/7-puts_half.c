#include "main.h"

/**
 * puts_half - prints 2nd half of a string.
 *
 * @str: input string
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0, n = 0;

	while (str[len] != '\0')
		len++;
	len++;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
