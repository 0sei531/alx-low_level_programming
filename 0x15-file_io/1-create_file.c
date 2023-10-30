#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to grab.
 * @text_content:  content to add.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int a, z, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(a, text_content, len);

	if (a == -1 || z == -1)
		return (-1);

	close(a);

	return (1);
}
