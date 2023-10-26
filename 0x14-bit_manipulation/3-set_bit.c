#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 16)
		return (-1);
	(*n) ^= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
