#include <stdio.h>

/**
 * num_Length - Entry Point
 *
 *@num: a C program that prints using custome fn
 *
 *Return: Always 0 (Sucess)
*/
int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - Entry Point
 *
 *Description: a C program that prints using custome fn
 *
 *Return: Always 0 (Sucess)
*/
int main(void)
{
	int i, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, max = 100000000;
	unsigned long f1o = 0, f2o = 0, sumo = 0;

	for (i = 1; i <= 98; i++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = num_length(max) - 1 - num_length(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % max;
		sumo = f1o + f2o + (f1 + f2) / max;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
