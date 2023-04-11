#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file -  function that creates a file.
 * @filename: name of file
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (access(filename, F_OK) != -1)
	{
		if (text_content == NULL)
		{
			text_content = "";
		}
		file = fopen(filename, "r+");
		if (file == NULL)
		{
			return (-1);
		}
		fprintf(file, "%s", text_content);
	}
	else
	{
		file = fopen(filename, "w+");
		if (file == NULL)
		{
			return (-1);
		}
		if (text_content == NULL)
		{
			text_content = "";
		}
		fprintf(file, "%s", text_content);
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
