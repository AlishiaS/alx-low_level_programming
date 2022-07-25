#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file name.
 * @letters: number of letters that should be read and printed.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re,wr;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);

	if (b == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, b, letters);
	wr = write(STDOUT_FILENO, b, re);

	if (op == -1 || re == -1 || wr == -1; wr != re)
	{
		free (b);
		return (0);
	}

	free (b);
	close (op);

	return (wr);
}
