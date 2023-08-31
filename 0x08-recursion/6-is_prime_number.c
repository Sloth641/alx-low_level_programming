#include "main.h"

/**
 * is_prime -  supporting function.
 *
 * @n: input number
 * @div: input divisors
 *
 * Return:  the number of divisors.
 *
 */
int is_prime(int n, int div)
{
	if (div >= n && n > 1)
                return (1);
	else if (n % div == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, div + 1));
}

/**
 * is_prime_number -  checks if the input integer is a prime number.
 *
 * @n: input number
 *
 * Return: returns 1 if a prime number, otherwise return 0.
 *
 */
int is_prime_number(int n)
{
	int div = 2;

	return (is_prime(n, div));
}
