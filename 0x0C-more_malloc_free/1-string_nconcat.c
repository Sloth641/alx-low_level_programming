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
 * string_nconcat - concatenates two strings.
 *
 * @s1: input string
 * @s2: input string
 * @n: size of s2 bytes
 *
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size1, size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= 0)
	{
		return (s1);
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ptr = malloc(size1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n <= size2)
		n = size2;
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0l i < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
