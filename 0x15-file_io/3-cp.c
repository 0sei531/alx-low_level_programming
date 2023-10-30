#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int comp_close(int);
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int bc, char **ad)
{
	int lau, lyn, wrote, readed;
	char buff[1024];

	if (bc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	lau = open(ad[1], O_RDONLY);
	if (lau == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ad[1]);
		exit(98);
	}
	lyn = open(ad[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (lyn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ad[2]);
		exit(99);
	}
	while ((readed = read(lau, buff, 1024)) > 0)
	{
		wrote = write(lyn, buff, readed);
		if (wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ad[2]);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ad[1]);
		exit(98);
	}
	if (close(lau) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", lau);
		exit(100);
	}
	if (close(lyn) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", lyn);
		exit(100);
	}
	return (0);
}
