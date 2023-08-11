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

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 71; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
