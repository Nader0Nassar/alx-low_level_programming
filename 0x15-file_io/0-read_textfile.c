#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- This function reads and prints text file to STDOUT.
 * @filename: readed text file.
 * @letters: letters No.
 * Return: Number of Bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, n;
	char *ptr;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	n = read(f, ptr, letters);
	r = write(STDOUT_FILENO, ptr, n);
	free(ptr);
	close(f);
	return (r);
}
