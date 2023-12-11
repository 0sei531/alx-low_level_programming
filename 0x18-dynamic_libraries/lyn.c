#include <stdio.h>
#include <stdlib.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of sum
 */

int add(int a, int b)
{
	return a + b;
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the subtraction
 */

int sub(int a, int b)
{
	return a - b;
}

/**
 * product - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the product
 */

int mul(int a, int b)
{
	return a * b;
}

/**
 * divi - Divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the division
 */

int divi(int a, int b)
{
	if (b == 0)
    {
        fprintf(stderr, "Error: Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}


/**
 * mod - Computes the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Remainder of the division
 */

int mod(int a, int b)
{
	 if (b == 0)
    {
        fprintf(stderr, "Error: Cannot divide by zero\n");
        return 0;
    }
    return a % b;
}


