#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_all - A function that prints anything
 *
 * @format:  Format for printing a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	char *string;
	int a;

	a = 0;
	va_start(vl, format);
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'i':
				printf("%i", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(vl, int));
				break;
			case 's':
				string = va_arg(vl, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[a] == 'c' || format[a] == 'a' || format[a] == 'f' ||
		format[a] == 's') && format[(a + 1)] != '\0')
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(vl);
}
