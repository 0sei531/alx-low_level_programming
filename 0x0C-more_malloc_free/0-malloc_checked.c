#include <stdlib.h>
/**malloc_checked - uses malloc to allocate memory 
  * @x: size of memory to be allocated.
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int x)
{
	void *p = malloc(x);

	if (p == NULL)
		exit(98);

	return (p);
}
