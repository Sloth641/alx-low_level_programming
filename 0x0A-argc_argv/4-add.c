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
	int sum = 0;
	char *arg = 0;

	while (--argc)
	{
		for (arg = argv[argc]; *arg; arg++)
		{
			if (*arg < '0' || *arg > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);

	}
	printf("%d\n", sum);
	return (0);
}
