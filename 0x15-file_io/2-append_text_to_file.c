#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int len;

	if (access(filename, F_OK) != -1)
	{
		if (text_content == NULL)
		{
			return (1) /*do nothin*/;
		}
		file = fopen(filename, "r+");
		if (file == NULL)
		{
			return (-1);
		}
		for (len = 0; text_content[len];)
		{
			len++;
		}
		fprintf(file, "%s", text_content);
		return (1);
	}
	else
	{
		return (-1);
	}
}
