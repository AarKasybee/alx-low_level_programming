#include "main.h"

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
	int op, bytes_written, len = 0;

	if (access(filename, F_OK) != -1)
	{
		if (text_content == NULL)
		{
			text_content = "";
		}
		op = open(filename, O_WRONLY | O_TRUNC);
		if (op == -1)
		{
			return (-1);
		}
	}
	else
	{
		op = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		if (op == -1)
		{
			return (-1);
		}
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		bytes_written = write(op, text_content, len);
		if (bytes_written == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
