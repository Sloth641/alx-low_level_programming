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
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; or[j] !='\0'; j++)
		{
			if (str[i] == or[j])
			{
				str[i] = code[j];
			}
		}
	}
	return (str);
}
