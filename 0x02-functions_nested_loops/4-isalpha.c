#include "main.h"
/**
 *_isalpha - checks if char is alphabet or not
 *
 *@c: input char for fn
 *
 * Return: returns 1 if alphabet, otherwise returns 0
 *
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
