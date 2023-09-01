#include "main.h"

/**
 * _strcmp - This function compares two strings.
 *
 * @s1: The first String
 * @s2: The second String
 *
 * Return: Returns 0 if equal
 *		>0 if s1 > s2
 *		<0 if s1 < s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		/* if characters differ, or end of the second string is reached*/
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	/* return the ASCII difference after converting `char*` to `unsigned char*`*/
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
