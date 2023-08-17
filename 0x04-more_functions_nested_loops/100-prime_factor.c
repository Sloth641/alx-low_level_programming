#include <stdio.h>
#include <math.h>

/**
 * main - Entry Point
 * 
 * Description: Print Largest Prime Number of of the number 612852475143
 * 
 * Return: 0 (success)
 */
int main (void)
{
	long int n = 1231952;
	long int i, maxPrime;

	/* Print the number of 2s that divide n */
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}

	/**
	 * At this point, num must be odd.
	 * Starting with 3 to square root of num ,
	 * if divisible, divide and update num, and update CurrMaxPrime
	 */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n/i;
		}
	}
	if (n > 2)
		maxPrime = n;

	printf("%ld\n", maxPrime);
	return (0);
}

