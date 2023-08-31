#include "main.h"

/**
 * rootIsargumnetForFunc -  supporting function that allows
 *				recursion with a changing argument.
 *
 * @n: input number
 * @root: input guess
 *
 * Return:  the natural square root of a number.
 *
 */
int rootIsargumnetForFunc(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root < n)
	{
		return (rootIsargumnetForFunc(n, root + 1));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion -  calculates the natural square root of a number.
 *
 * @n: input number
 *
 * Return:  the natural square root of a number.
 *
 */
int _sqrt_recursion(int n)
{
	int root = 1;

	return (rootIsargumnetForFunc(n, root));
}
