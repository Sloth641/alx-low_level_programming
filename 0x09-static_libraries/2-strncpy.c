#include "main.h"

/**
 * _strncpy - This function copies the src string to the dest string,
 *		overwriting the terminating null byte (\0) at the end of dest,
 *		and then adds a terminating null byte.
 *
 * @dest: The Destination String
 * @src: The Source String
 * @n: number characters to be concatenated
 *
 * Return: Returns a pointer to the resulting string dest.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int destlen = 0, srclen = 0;
	int i;

	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
