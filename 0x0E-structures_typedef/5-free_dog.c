#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - init dog struct
 *
 * @d: pointer to dog
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
