#ifndef DOG_H
#define DOG_H

#define NULL ((void *)0)

/**
 * struct dog - doggy dog
 *
 * @name: param 1
 * @age: param 2
 * @owner: param 3
 *
 * Description: just a fury dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
