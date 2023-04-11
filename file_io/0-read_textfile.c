#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads a a text and print
 * @letters: number of letters to be read and print
 * @filename: file name
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (-1);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	r = read(file, buff, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
		return (0);

	free(buff);
	close(file);
	return (w);

}
