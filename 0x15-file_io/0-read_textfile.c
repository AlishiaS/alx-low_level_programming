#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file name.
 * @letters: number of letters that should be read and printed.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re;
	int op;
	char *b;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	if (op == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	re = read(op, b, letters);
	wr = write(STDOUT_FILENO, buf, nrd);

	close(op);

	free(b);

	return (wr);
}
