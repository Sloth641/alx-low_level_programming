#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 *Description: a C program that checks if last digit of rnd no. is <=>5
 *
 *Return: Always 0 (Sucess)
*/
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else if (d < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
