#include "main.h"
/**
 * append_text_to_file - This fun usedto append text at the end.
 * @filename: file name.
 * @text_content: added string.
 * Return: -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r, n, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	r = open(filename, O_WRONLY | O_APPEND);
	n = write(r, text_content, length);
	if (r == -1 || n == -1)
		return (-1);
	close(r);
	return (1);
}
