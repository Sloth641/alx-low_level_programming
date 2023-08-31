#include "main.h"

/**
 * is_match -  compares two strings if the strings can be considered identical.
 *
 * @s1: input string
 * @s2: input string
 * @index1: index of s1
 * @index2: index of s2
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 *
 */
int is_match(char *s1, char *s2, int index1, int index2)
{
	if (s1[index1] == '\0' && s2[index2] == '\0')
	{
		return (1);
	}
	else if (s2[index2] == '*')
	{
		for (; s1[index1] != '\0'; index1++)
		{
			if (is_match(s1, s2, index1, index2 + 1))
				return (1);
		}
		return (is_match(s1, s2, index1, index2 + 1));
	}
	else if (s1[index1] != '?' && s1[index1] != s2[index2])
	{
		return (0);
	}
	else
	{
		return (is_match(s1, s2, index1 + 1, index2 + 1));
	}
}

/**
 * wildcmp -  compares two strings if the strings can be considered identical.
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 *
 */
int wildcmp(char *s1, char *s2)
{
	return (is_match(s1, s2, 0, 0));
}
