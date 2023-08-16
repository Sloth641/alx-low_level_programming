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
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
                        _putchar(' ');
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
		}
		_putchar('\n');
	}
}
