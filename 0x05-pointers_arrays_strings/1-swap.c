#include "main.h"

/**
 * reset_to_98 - Updates the value of the variable
 * pointed to by the pointer to 98 within the main function.
 *
 * @n: Pointer to the variable to update.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
