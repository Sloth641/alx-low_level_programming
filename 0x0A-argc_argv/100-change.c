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
	int change = 0, nc = 0, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		if (change < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (change >= coins[i])
				{
					nc += change / coins[i];
					change %= coins[i];
					if (change == 0)
						break;
				}
			}
		}
			printf("%d\n", nc);
	}
	return (0);
}
