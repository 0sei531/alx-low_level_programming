#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds a character within a string
 * @s: search string
 * @c: find char 
 *
 * Return: an indicator to the character's very first appearance
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int x;

		while (1)
		{
			x = *s++;
			if (x == c)
			{
				return (s - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
