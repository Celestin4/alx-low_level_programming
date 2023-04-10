#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @max_chars: The maximum number of characters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 * 
 */
ssize_t read_textfile(const char *filename, size_t max_chars)
{
    ssize_t fd, chars_read, chars_written;
    char *buffer;

    if (filename == NULL)
        return 0;

    buffer = malloc(sizeof(char) * max_chars);
    if (buffer == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        free(buffer);
        return 0;
    }

    chars_read = read(fd, buffer, max_chars);
    if (chars_read == -1) {
        free(buffer);
        close(fd);
        return 0;
    }

    chars_written = write(STDOUT_FILENO, buffer, chars_read);
    if (chars_written == -1 || chars_written != chars_read) {
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);
    return chars_written;
}
