#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: input for fn
 * @n2: input for fn
 * @r: input for fn
 * @size_r: input for fn
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, ls = 0, add1 = 0, add2 = 0, carry = 0;
	int i;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	ls = (len1 > len2) ? len1 : len2;
	if (ls + 1 > size_r)
		return (0);
	r[ls] = '\0';

	for (i = ls - 1; i >= 0; i--)
	{
		len1--;
		len2--;
		add1 = (len1 >= 0) ? (n1[len1] - '0') : 0;
		add2 = (len2 >= 0) ? (n2[len2] - '0') : 0;
		r[i] = (add1 + add2 + carry) % 10 + '0';
		carry = (add1 + add2 + carry) / 10;
	}
	if (carry == 1)
	{
		r[ls + 1] = '\0';
		if (ls + 2 > size_r)
			return (0);
		while (ls-- >= 0)
			r[ls +1] = r[ls];
		r[0] = carry + '0';
	}
	return (r);
}
