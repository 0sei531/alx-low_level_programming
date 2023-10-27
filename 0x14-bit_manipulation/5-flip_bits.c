#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: second value 
 * Return: ponkoh
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ama;
	unsigned long int ponkoh = 0;
	ama = n ^ m;

	while (ama > 0)
	{
		ponkoh += (ama & 1);
		ama >>= 1;
	}

	return (ponkoh);
}
