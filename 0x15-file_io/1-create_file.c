#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *new_filename, char *new_text_content)
{
    int fd, w, len = 0;

    if (new_filename == NULL)
        return (-1);

    if (new_text_content != NULL)
    {
        for (len = 0; new_text_content[len];)
            len++;
    }

    fd = open(new_filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    w = write(fd, new_text_content, len);

    if (fd == -1 || w == -1)
        return (-1);

    close(fd);

    return (1);
}
