#include "main.h"
/**
 * _strlen - determines and displays string length
 * @s: string pointer.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
