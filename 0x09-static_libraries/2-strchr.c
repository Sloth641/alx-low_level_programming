#include "main.h"
/**
 * _strchr -   locates a character in a string.
 *
 * @s: input string
 * @c: input
 *
 * Return: a pointer to the first occurrence of the character c
 *		in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		else
		{
			ptr = '\0';
		}
	}
	return (ptr);
}
