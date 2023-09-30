#include <stdio.h>
#include <stdlib.h>
/**
 * main - output each program argument on a separate line.
 * @argc: length or number of arguments
 * @argv: argument array
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}
