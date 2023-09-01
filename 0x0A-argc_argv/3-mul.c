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
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
