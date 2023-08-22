#include "main.h"

/**
 * _strcpy - copies a string into anotherone.
 *
 * @dest : input pointer to be copied to
 * @src: input string to be copied
 *
 * Return: copued string
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');
	return (dest);
}
