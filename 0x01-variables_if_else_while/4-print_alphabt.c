#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 *Description: a C program that prints alphabets
 *
 *Return: Always 0 (Sucess)
*/
int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if ((i == 'e') || (i == 'q'))
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
