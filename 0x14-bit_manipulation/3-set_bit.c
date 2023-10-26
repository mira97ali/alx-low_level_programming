#include "main.h"

/**
* set_bit - Set the value of a bit to 1 at a specified index.
* @num: Pointer to the decimal number to modify.
* @bit_indx: The zero-based index of the bit to set.
* Return: 1 if successful, -1 on error.
* Author: Amira
*/

int set_bit(unsigned long int *num, unsigned int bit_indx)
{
	unsigned long int increment = 1;

	if (bit_indx > 64)
		return (-1);

	while (bit_indx > 0)
	{
		increment *= 2;
		bit_indx--;
	}

	*num += increment;

	return (1);
}

