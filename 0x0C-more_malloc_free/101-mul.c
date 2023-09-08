#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: input string
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * _atoi - convert array to integer.
 *
 * @s : input array
 *
 * Return: integer from array
 */
int _atoi(char *s)
{
	unsigned int num;
	int sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if ((s[i] >= '0') && (s[i] <= '9'))
			num = (num * 10) + (s[i] - '0');
		else if (num > 0)
			break;
		i++;
	}

	return (num * sign);
}

/**
 * print_number - prints a number using _putcahr only
 *
 * @n: no. input for fn
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int firstNum = 0, secNum = 0, mul = 0;
	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	firstNum = _atoi(argv[1]);
	secNum = _atoi(argv[2]);

	mul = firstNum * secNum;
	print_number(mul);
	_putchar('\n');
	return (0);
}
