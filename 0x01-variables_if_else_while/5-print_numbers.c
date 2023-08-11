#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 *Description: a C program that prints numbers
 *
 *Return: Always 0 (Sucess)
*/
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
