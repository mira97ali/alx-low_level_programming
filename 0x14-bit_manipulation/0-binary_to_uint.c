#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - Convert a binary string to an unsigned int.
* @b: The binary string to be converted.
* Author: Amira
* Return: The converted decimal number, or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, current_power;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (current_power = 1, result = 0, length--; length >= 0;
			length--, current_power *= 2)
	{
		if (b[length] == '1')
			result += current_power;
	}

	return (result);
}

