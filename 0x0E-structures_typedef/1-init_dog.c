#include "dog.h"
/**
 * init_dog - init dog struct
 *
 * @d: pointer to dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
