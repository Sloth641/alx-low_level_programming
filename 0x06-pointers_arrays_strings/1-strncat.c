#include "main.h"

/**
 * _strncat - This function appends the src string to the dest string,
 *		overwriting the terminating null byte (\0) at theend of dest,
 *		and then adds a terminating null byte.
 *
 * @dest: The Destination String
 * @src: The Source String
 * @n: number characters to be concatenated
 *
 * Return: Returns a pointer to the resulting string dest.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, srclen = 0;
	int i, j;

	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;

	j = destlen;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
