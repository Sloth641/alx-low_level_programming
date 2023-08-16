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
	unsigned long f1 = 0, f2 = 1, sum;
	float totalSum;

	while (1)
	{
		sum f1 + f2;
		if (sum > 4000000)
		       break;
		if((sum % 2) == 0)
			totalSum += sum;	
		f1 = f2;
		f2 = sum;
		
	}
	printf("%.0f\n", totalSum);
	return (0);
}
