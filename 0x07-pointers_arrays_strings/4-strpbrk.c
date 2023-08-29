#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: input string
 * @accept: input string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *		or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, flag = 0;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				flag = 1;
				break;
			}
			else
			{
				ptr = '\0';
			}
		}
		if (flag == 1)
			break;
	}
	return (ptr);
}
