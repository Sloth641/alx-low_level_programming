#include "main.h"
#include <stdio.h>

/**
 *  isPrintAscii- checks if is has ascii code
 *
 * @n: input
 *
 * Return: 1 or 0
 */
int isPrintAscii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 *  printx- checks if is has ascii code
 *
 * @b: input
 * @s: input
 * @e: input
 *
 * Return: 1 or 0
 */
void printx(char *b, int s, int e)
{
	int i = 0;

	while (i < 10)
	{
		if (i < e)
			printf("%02x", *(b + s + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 *  printa- checks if is has ascii code
 *
 * @b: input
 * @s: input
 * @e: input
 *
 * Return: 1 or 0
 */
void printa(char *b, int s, int e)
{
	int c, i = 0;

	while (i < e)
	{
		c = *(b + i + s);
		if (!isPrintAscii(c))
			c = 46;
		printf("%c", c);
		i++;
	}
}

/**
 * print_buffer- prints a buffer
 *
 * @b: buffer
 * @size: size of buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int s, e;

	if (size > 0)
	{
		for (s = 0; s < size; s += 10)
		{
			e = (size - s < 10) ? size - s : 10;
			printf("%08x: ", s);
			printx(b, s, e);
			printa(b, s, e);
			printf("\n");
		}
	}
}
