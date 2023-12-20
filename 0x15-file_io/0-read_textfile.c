#include "main.h"
/**
 * read_textfile - Function reads a text file and prints it to the POSIX STDOUT.
 *
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 *
 * Return:  actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ff;
	ssize_t n;
	char text[8000];

	if (filename == NULL || letters <= 0)
	{
		return (0);
	}
	ff = open(filename, O_RDONLY);
	if (ff == -1)
	{
		return (0);
	}
	n = read(ff, &text[0], letters);
	n = write(STDOUT_FILENO, &text[0], n);
	close(ff);
	return (n);
}
