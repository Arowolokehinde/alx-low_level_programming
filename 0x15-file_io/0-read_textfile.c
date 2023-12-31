#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the POSIX
 * @filename: The file to be modified
 * @letters: The letters
 * Return: Always  success
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;

	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, ptr, letters);
	wr = write(STDOUT_FILENO, ptr, rd);
	if (op == -1 || rd == -1)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	close(op);
	return (wr);
}
