#include "main.h"
/**
 *print_alphabet_x10 - prints the alpahbet charchters 10x
 *
*/
void print_alphabet_x10(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(arr[i]);
		}
	}
}
