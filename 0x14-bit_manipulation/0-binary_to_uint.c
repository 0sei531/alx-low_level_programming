#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string containing the binary number
 *
 * Return: unsigned int
 *         
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '1')
			a = (a << 1) | 1;
		else if (*b == '0')
			a <<= 1;
		else
			return (0);
		b++;
	}
	return (a);
}

