#include "function_pointers.h"
/**
 * print_name - prints name of function
 *
 * @name: pointer to string
 * @f: pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
