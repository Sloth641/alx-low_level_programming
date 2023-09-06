#include "main.h"

/**
 * wordCount -  calculates length of string.
 *
 * @str: input string
 *
 * Return: number of words in string
 *
 */
int wordCount(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
		i++;
	}
	count++;
	return (count);
}
/**
 * strtow -  splits string into words.
 *
 * @str: input string
 *
 * Return: pointer to an array of strings.
 *
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, k, words = 0, w = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = wordCount(str);
	if (words == 1)
		return (NULL);
	arr = (char **) malloc(words * sizeof(char *));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j] != '\0'; j++)
				;
			j++;
			arr[w] = (char *) malloc(j * sizeof(char));
			j--;
			if (arr[w] == NULL)
			{
				while (w--)
					free(arr[w]);
				free(arr[words - 1]);
				free(arr);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				arr[w][k] = str[i + k];
			arr[w][k] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (arr);
}
