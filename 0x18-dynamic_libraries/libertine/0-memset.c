#include "main.h"

/**
 * *_memset - creates a constant byte in memory.
 * @s: to allocate memory space
 * @b: char to copy
 * @n: how many times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
