#include "main.h"

/**
 * _strlen -  calculates length of string.
 *
 * @str: input string
 *
 * Return: length of string
 *
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * argstostr -  concatenates two strings.
 *
 * @ac: argc
 * @av: argv
 *
 * Return:  pointer to a new string, or NULL if it fails.
 *
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, k = 0, arglen = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++, arglen++)
	{
		arglen += _strlen(av[i]);
	}
	arr = malloc(sizeof(char) * arglen + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++, k++)
				arr[k] = av[i][j];
			arr[k] = '\n';
			k++;
		}
		arr[k] = '\0';
	}
	return (arr);
}
