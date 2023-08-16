#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 *
 *Description: a C program that prints using custome fn
 *
 *Return: Always 0 (Sucess)
*/
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
