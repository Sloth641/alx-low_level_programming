#include "main.h"

/**
 * _strlen -  calculates the length of a string..
 *
 * @s: input string
 *
 * Return: the length of a string.
 *
 */
int _strlen(char *s)
{
        int len = 0;

        if (*s > '\0')
        {
                len += _strlen(s + 1) + 1;
        }
        return (len);
}

/**
 * is_right_equals_left -  supporting function.
 *
 * @s: input string
 * @start: left index in string
 * @end: right index in string
 * @mid: index if even -> no middle, odd -> has middle
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 *
 */
int is_right_equals_left(char *s, int start, int end, int mid)
{
	if ((start == end && mid != 0) || (start == end + 1 && mid == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_right_equals_left(s, start + 1, end - 1, mid));
}

/**
 * is_prime_number -  checks if a string is a palindrome.
 *
 * @s: input string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 *
 */
int is_palindrome(char *s)
{
	int end = _strlen(s);
	int start = 0;

	return (is_right_equals_left(s, start, end - 1, end % 2));
}
