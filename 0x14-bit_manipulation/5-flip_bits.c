#include "main.h"
#include <stdio.h>

/**
* flip_bits - Count the number of bits that need to be flipped to convert.
* @n: The first number.
* @m: The second number to convert to.
* Return: The number of bits that need to be flipped.
* Author: Amira
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ = n ^ m;
	unsigned int bit_count = 0;

	while (differ)
	{
		bit_count++;
		differ &= (differ - 1);
	}

	return (bit_count);
}
