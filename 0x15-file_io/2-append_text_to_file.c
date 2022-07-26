#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to file name.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		wr = write(op, text_content, length);

		if (wr == -1)
			return (-1);
	}

	close(op);

	return (1);
}
