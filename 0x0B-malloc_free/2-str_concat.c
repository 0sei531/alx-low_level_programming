#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int a, b, d, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	strout = malloc(sizeof(char) * (a + b + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (d = 0; d < a; d++)
		strout[d] = s1[d];

	limit = b;
	for (b = 0; b <= limit; d++, d++)
		strout[d] = s2[b];

	return (strout);
}
