#include "main.h"
#include <stdio.h>

/**
* get_bit - Get the value of a bit at a specified index.
* @num: The number to examine.
* @bit_index: The zero-based index of the bit to retrieve.
* Return: The value of the bit at the specified index, or -1 on error.
* Author: Amira
*/

int get_bit(unsigned long int num, unsigned int bit_index)
{
	unsigned long int the_shifted_num;

	if (bit_index > 64)
		return (-1);

	the_shifted_num = num >> bit_index;

	return (the_shifted_num & 1);
}
