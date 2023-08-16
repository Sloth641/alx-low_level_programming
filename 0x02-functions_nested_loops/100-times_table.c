#include "main.h"
/**
 *print_times_table - prints times table
 *
 *@n : input to fn
 *
*/
void print_times_table(int n)
{
	int a, b, prod;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				prod = a * b;
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else if (prod >= 10)
				{
					_putchar(' ');
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
			}
			_putchar('\n');
		}
	}
}
