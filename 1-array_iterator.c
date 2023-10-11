#include "function_pointers.h"

/**
 * carries out a function that is specified as a
 * parameter on each element of an array.
 * @array: input array of integers.
 * @size: array size.
 * @action: pointer to the function.
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
