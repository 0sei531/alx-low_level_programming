#include "main.h"
/**
 * _memcpy - copies the memory space
 * @dest: destination memory space.
 * @src: source memory space.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int u;

	for (u = 0; u < n; u++)
		*(dest + u) =  *(src + u);

	return (dest);
}
