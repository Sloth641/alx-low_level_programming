#include "main.h"

/**
 * leet - that encodes a string into 1337.
 *
 * @str: input string
 *
 * Return: pointer to modified string.
 *
 */
char *leet(char *str)
{
	int i, j;
	char or[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (str[i] == or[j] || str[i] == or[j + 1])
			{
				str[i] = code[j / 2];
			}
		}
	}
	return (str);
}
