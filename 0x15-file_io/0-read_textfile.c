#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @max_bytes: The maximum number of bytes that the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t max_bytes)
{
	ssize_t file_desc, read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * max_bytes);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	read_bytes = read(file_desc, buffer, max_bytes);
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (file_desc == -1 || read_bytes == -1 || written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_desc);

	return (written_bytes);
}
