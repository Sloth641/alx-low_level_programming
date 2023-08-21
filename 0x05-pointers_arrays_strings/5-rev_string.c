#include "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: input string
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char t;

	while (s[len] != '\0')
		len++;
	while (i < (len / 2))
	{
		t = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = t;
		i++;
	}
}
