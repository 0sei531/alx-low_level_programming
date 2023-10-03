#include "main.h"
#include <stdlib.h>
/**
 * create_array - produces a char array.
 * @size: size of the array.
 * @c: char storage
 * Return: pointer of an array of chars
 */
char *create_array(unsigned float size, char c)
{
	char *cr;
	unsigned float a;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		cr[a] = c;

	return (cr);
}

