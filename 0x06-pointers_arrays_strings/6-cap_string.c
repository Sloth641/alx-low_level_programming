#include "main.h"

/**
 * isSep - checks if char is a sepeartor
 *
 * @c: input character
 *
 * Return: 1 if char is separtor.
 *
 */
int isSep(char c)
{
	int j;
	/*space, tabulation, new line,;.!?\"(){}*/
	char del[] = " \t\n,;.!?\"(){}";

	for (j = 0; j < 13; j++)
	{
		if (c  == del[j])
			return (1);
	}
	return (0);
}
/**
 * cap_string - apitalizes all words of a string.
 *
 * @str: input string
 *
 * Return: pointer to modified string.
 *
 */
char *cap_string(char *str)
{
	int i, flag;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isSep(str[i]) == 1)
		{
			flag = 1;
		}
		else if (str[i] >= 97 && str[i] <= 122 && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else
			flag = 0;
	}
	return (str);
}
