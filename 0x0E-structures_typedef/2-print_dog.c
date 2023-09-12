#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog struct
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d -> name ? d -> name, (nil));
		printf("Age: %s\n", d -> age ? d -> age, (nil));
		printf("Owner: %s\n", d -> owner ? d -> owner, (nil));
	}
}
