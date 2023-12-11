#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts the second integer from the first integer.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting b from a.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides the first integer by the second integer.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of dividing a by b.
 *         If b is 0, prints an error message and returns 0.
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Computes the remainder when dividing two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division a by b.
 *         If b is 0, prints an error message and returns 0.
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
