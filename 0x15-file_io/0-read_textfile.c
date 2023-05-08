#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	FILE *file = fopen(filename, "r");
	char *buffer = malloc(letters + 1);
	size_t bytes_read;

	if (file == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, file);
	buffer[bytes_read] = '\0';
	printf("%s", buffer);
	fclose(file);
	free(buffer);
	return (bytes_read);
}
