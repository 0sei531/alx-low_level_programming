#include "main.h"

/**
 * _strcmp - compare
 * @s1 : char params indicator
 * @s2 : char params indicator
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int A;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	A = s1[x] - s2[x];
	return (A);
}
