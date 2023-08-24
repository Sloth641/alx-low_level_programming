#include "main.h"

/**
 * string_toupper - hat reverses the content of an array of integers.
 *
 * @str: input string
 *
 * Return: pointer to modified string.
 *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
