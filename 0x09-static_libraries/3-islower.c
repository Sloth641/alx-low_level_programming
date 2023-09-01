#include "main.h"
/**
 *_islower - checks if char is lowercase or not
 *
 *@c: input char for fn
 *
 * Return: returns 1 if lowercase, otherwise returns 0
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
