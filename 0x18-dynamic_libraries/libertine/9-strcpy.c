#include "main.h"
/**
 * _strcpy - add a string of copy after another string, including \0.
 * @dest: indicator to string to be copied to.
 * @src:indicator to string to be copied.
 *
 * Return:indicator to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
