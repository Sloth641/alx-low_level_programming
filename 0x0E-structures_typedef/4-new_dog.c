#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calcualtes the length of a string.
 *
 * @s: pointer to int
 *
 * Return: returns the length of a string as integer.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

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
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	doggy = (dog_t *)malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	else
	{
		doggy->name = malloc(sizeof(char) * _strlen(name) + 1);
		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}

		doggy->name = _strcpy(doggy->name, name);
		doggy->age = age;
		doggy->owner = _strcpy(doggy->owner, owner);

		return (doggy);
	}
}
