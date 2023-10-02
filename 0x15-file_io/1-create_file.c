#include "main.h"
/**
 * create_file - This function used to Creates\ a file.
 * @filename: name of the file pointer.
 * @text_content: write to file pointer.
 * Return: -1.
 */
int create_file(const char *filename, char *text_content)
{
	int f, r, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(f, text_content, length);
	if (f == -1 || r == -1)
		return (-1);
	close(f);
	return (1);
}
