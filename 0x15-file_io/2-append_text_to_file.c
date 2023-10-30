#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text to a file.
 * @filename: Name of the file to be appended.
 * @text_content: Text to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int fd, res;

        if (filename == NULL)
                return (-1);

        fd = open(filename, O_WRONLY | O_APPEND);
        if (fd == -1)
                return (-1);

        if (text_content != NULL)
        {
                res = write(fd, text_content, strlen(text_content));
                if (res == -1)
                        return (-1);
        }

        close(fd);
        return (1);
}
