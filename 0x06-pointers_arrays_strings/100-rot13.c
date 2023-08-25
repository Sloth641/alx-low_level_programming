#include "main.h"

/**
 * rot13 - that encodes a string into rot13.
 *
 * @str: input string
 *
 * Return: pointer to modified string.
 *
 */
char *rot13(char *str)
{
	int i, j;
	char or[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char co[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (str[i] == or[j])
			{
				str[i] = co[j];
				break;
			}
		}
	}
	return (str);
}
