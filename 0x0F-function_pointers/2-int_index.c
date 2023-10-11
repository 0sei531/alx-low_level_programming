#include "function_pointers.h"

/**
 * int_index - looks for an integer
 * @array: input integer array.
 * @size:  array size.
 * @cmp: pointer to the function to be used
 * for value comparrison.
 * Return: initial element's index for which the cmp function
 *  does not return zero. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
