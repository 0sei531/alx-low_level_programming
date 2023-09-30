#include "main.h"
/**
 * _isupper - to see if the letters are in capitals.
 *  @c: input.
 *
 *  Return: 1 if c is capital
 *  0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
} 
