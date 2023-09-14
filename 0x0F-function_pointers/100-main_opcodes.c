#include "3-calc.h"
/**
 * main - Entry Point
 *
 * @argc: no. of args
 * @argv: array of args
 *
 * Return: Always 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	int c, i;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	c = atoi(argv[1]);
	if (c < 1)
	{
		printf("Error\n");
		exit(2);
	}

	while (c--)
	{
		printf("%02hhx%s", *ptr, c ? " " : "\n");
		ptr++;
	}
	return (0);
}
