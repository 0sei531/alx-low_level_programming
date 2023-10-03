#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the executable's name.
 * @argc: argument volume or argument size.
 * @argv: argument vector
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
