#include "main.h"

/**
 * swap_int - Updates the value of the variable
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
