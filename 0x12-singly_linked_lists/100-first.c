#include "lists.h"

void b_main(void) __attribute__((constructor));

/**
 * b_main - executes before main()
 *
 * Return: void
 */
void b_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
