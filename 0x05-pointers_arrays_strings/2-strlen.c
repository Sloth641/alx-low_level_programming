#include "main.h"

/**
 * _strlen - calcualtes the length of a string.
 *
 * @s: pointer to int
 *
 * Return: returns the length of a string as integer.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
