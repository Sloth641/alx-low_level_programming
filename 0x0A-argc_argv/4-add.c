#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * @argc: number of arguments
 * @argv: array of strings of arguments
 *
 * Return: depends
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *c = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
                                return (1);
			}
			else
			{
				sum += atoi(c);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
