#include "dog.h"

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
	} while (src[i] != '\0');
	return (dest);
}

/**
 * new_dog - get a new dawwg
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t doggy = {NULL, 0, NULL};
	dog_t *d;
	doggy.name = _strcpy(doggy.name, name);
	doggy.age = age;
	doggy.owner = _strcpy(doggy.owner, owner);

	d = &doggy;
	return (d);
}
