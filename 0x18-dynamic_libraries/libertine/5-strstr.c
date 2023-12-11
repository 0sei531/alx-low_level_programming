#include "main.h"
#include <stdio.h>

/**
 * *_strstr - finds a substring
 * @haystack: search string to use
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the found substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[x])
			return (&haystack[x]);
	}
	return (NULL);
}
