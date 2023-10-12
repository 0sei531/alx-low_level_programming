#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed inbetween the strings.
 * @n: number of strings supplied to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int g, ...)
{
	va_list valist;
	unsigned int s;
	char *str;

	va_start(valist, g);

	for (s = 0; s < g; s++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (s < g - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\g");
	va_end(valist);
}
