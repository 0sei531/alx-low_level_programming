#include "main.h"
/**
 * _puts - prints a string, then a newline.
 * @str: string indicator 
 *
 * Return: void.
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		a++;
		str++;
	}
	_putchar('\n');
}
