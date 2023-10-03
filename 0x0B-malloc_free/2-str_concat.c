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
	unsigned int u, v, w, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (u = 0; s1[u] != '\0'; u++)
		;

	for (v = 0; s2[v] != '\0'; v++)
		;

	strout = malloc(sizeof(char) * (u + v + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (w = 0; w < u; w++)
		strout[k] = s1[k];

	limit = v;
	for (v = 0; v <= limit; w++, v++)
		strout[w] = s2[v];

	return (strout);
}

