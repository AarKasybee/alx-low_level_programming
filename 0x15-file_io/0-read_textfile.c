#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file to be opened
 * @letters: the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op = open(filename, O_RDONLY);
	char *buffer = malloc(letters + 1);
	size_t bytes_read;

	if (op == -1 || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(op, buffer, letters);
	buffer[bytes_read] = '\0';
	write(STDOUT_FILENO, buffer, bytes_read);
	close(op);
	free(buffer);
	return (bytes_read);
}
