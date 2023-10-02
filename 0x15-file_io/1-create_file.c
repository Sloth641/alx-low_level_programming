#include "main.h"
/**
 * _strlen - calcualtes the length of a string.
 *
 * @s: pointer to int
 *
 * Return: returns the length of a string as integer.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - Creates a file.
 *
 * @filename: pointer to file.
 * @text_content: pointer to string.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int ff;
	ssize_t n = 0;
	ssize_t length = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	ff = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ff == -1)
	{
		return (-1);
	}
	if (length > 0)
	{
		n = write(ff, text_content, length);
	}
	close(ff);
	if (n == length)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
