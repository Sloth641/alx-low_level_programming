#include "main.h"

/**
 * is_star -  moves past any star we might encounter.
 *
 * @s2: input string
 *
 * Return: s2 pointer after star.
 *
 */
char *is_star(char *s2)
{
	if (*s2 == '*')
		return (is_star(s2 + 1));
	else
		return (s2);
}

/**
 * is_match_cmp -  compares two strings if the strings identical.
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 *
 */
int is_match_cmp(char *s1, char *s2)
{
	int is_match = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		is_match += wildcmp(s1 + 1, s2 + 1);
	is_match += is_match_cmp(s1 + 1, s2);
	return (is_match);
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
	int is_match = 0;

	if (!*s1 && *s2 == '*' && !*is_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp((s1 + 1), (*s2 == '*' ? s2 : s2 + 1)));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = is_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			is_match += wildcmp(s1 + 1, s2 + 1);
		is_match += is_match_cmp(s1, s2);
		return (!!is_match);
	}
	return (0);
}
