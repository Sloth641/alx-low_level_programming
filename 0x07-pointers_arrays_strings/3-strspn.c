#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: input string
 * @accept: input
 *
 * Return: the number of bytes in the initial segment of s
 *		which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag != 1)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
