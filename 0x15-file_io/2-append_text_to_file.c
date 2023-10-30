#include "main.h"
#include <string.h>
/**
 * append_text_to_file- create file pointer
 * @filename: pointer file
 * @text_content: number od letters
 * Return: Returns: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	if (text_content != NULL)
	{
		wb = write(a, text_content, strlen(text_content));
		if (b == -1)
			return (-1);
	}
	close(a);
	return (1);
}
