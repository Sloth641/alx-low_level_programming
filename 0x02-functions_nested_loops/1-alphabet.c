#include "main.h"
/**
 * main - Entry Point
 *
 *Description: a C program that prints using custome fn
 *
 *Return: Always 0 (Sucess)
*/
void print_alphabet(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(arr[i]);
	}
	return (0);
}
