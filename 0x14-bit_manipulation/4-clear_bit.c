#include "main.h"
#include <stdio.h>

/**
* clear_bit - Set the value of a bit to 0 at a specified index.
* @num: Pointer to the decimal number to modify.
* @bit_index: The zero-based index of the bit to clear.
* Return: 1 if successful, -1 on error.
* Author: Amira
*/

int clear_bit(unsigned long int *num, unsigned int bit_index)
{
	unsigned long int decrmnt = 1;
	unsigned int index_copy = bit_index;

	if (bit_index > 64)
		return (-1);

	while (index_copy > 0)
	{
		decrmnt *= 2;
		index_copy--;
	}

	if ((*num >> bit_index) & 1)
		*num -= decrmnt;

	return (1);
}

