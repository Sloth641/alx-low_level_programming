#include "main.h"

/**
 * str_concat -  concatenates two strings.
 *
 * @s1: input string
 * @s2: input string
 *
 * Return:  a pointer to a newly allocated space in memory.
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	arr = malloc((size1 + size2) * sizeof(char) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1 + size2; i++)
		{
			if (i < size1)
			{
				arr[i] = s1[i];
			}
			else
			{
				arr[i] = s2[i - size1];
			}
		}
		arr[i] = '\0';
	}
	return (arr);
}
