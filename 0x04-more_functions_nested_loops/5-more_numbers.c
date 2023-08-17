#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times.
 *
 */
void more_numbers(void)
{
	int i, j, temp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			temp = j;
			if (j > 9)
			{
				_putchar('1');
				temp = j % 10;
			}
			_putchar(temp + '0');
		}
		_putchar('\n');
	}
}
