#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the product of two arguments.
 * @argc: length or number of arguments
 * @argv: argument array
 *
 * Return: 1 if are less of 2 arguments otherwise 0.
 */
int main(int argc, char **argv)
{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiplication = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiplication);
	}
	return (0);
}

