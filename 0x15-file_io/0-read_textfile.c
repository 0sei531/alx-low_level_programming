#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: amount of bytes to read
 *
 * Return: numbers of letters printed. It fails, returns 0.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int pon, print, pen;
	char *ref;

	ref = malloc(letters);
	if (!ref)
		return (0);
	if (!filename)
		return (0);
	pon = open(filename, O_RDWR);
	if (pon == -1)
		return (0);
	print = read(pon, ref, letters);
	if (print == -1)
		return (0);
	pen = write(STDOUT_FILENO, ref, print);
	if (pen == -1)
		return (0);
	if (close(pon) == -1)
		return (0);
	free(ref);
	return (print);

}
