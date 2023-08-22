#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: genertaes a key to run exe
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int key;
	char p;

	srand(time(NULL));
	while (key <= 2645)
	{
		p = rand() % 128;
		key += p;
		putchar(p);
	}
	putchar(2772 - key);
	return (0);
}
