#include "main.h"
/**
 * main - check the code
 *
 * @ac: argc
 * @av: argv
 *
 * Return: 1 on success, 0 on failure.
 */
int main(int ac, char **av)
{
	int ff1 = 0, ff2 = 0;
	ssize_t n;
	char text[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	ff1 = open(av[1], O_RDONLY);
	if (ff1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	ff2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ff2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while ((n = read(ff1, text, 1024)) > 0)
	{
		if (write(ff2, text, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	ff1 = close(ff1);
	ff2 = close(ff2);
	if (ff1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff1), exit(100);
	}
	if (ff2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff1), exit(100);
	}
	return (EXIT_SUCCESS);
}
