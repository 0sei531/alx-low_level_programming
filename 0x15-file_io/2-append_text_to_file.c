#include"main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: A pointer to the name of the file.
 *@text_content: The string to add to the end of the file.
 *Return: int value
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, p, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	p = write(a, text_content, len);

	if (a == -1 || p == -1)
		return (-1);

	close(a);

	return (1);
}
