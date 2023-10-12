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

	va_start(valist, n);

	for (s = 0; s < n; s++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (s < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
