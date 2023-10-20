#include <stdio.h>

/**
 *print_document - message is printed before the main
 */

void __attribute__ ((constructor)) print_document()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
