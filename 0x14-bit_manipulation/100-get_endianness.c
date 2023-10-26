#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	signed int delta = 1;
	char *alpha = (char *)&delta;

	if (*alpha == 1)
		return (1);

	return (0);
}
