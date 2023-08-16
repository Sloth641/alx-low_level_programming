#include "main.h"
/**
 *times_table - prints every minute of the day
 *
 *
*/
void times_table(void)
{
	int a, b, prod;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			prod = a * b;
			if (prod >= 10)
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(prod + 48);
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
