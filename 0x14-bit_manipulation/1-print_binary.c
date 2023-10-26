#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print the binary representation of a decimal number.
 * @decimal_number: The decimal number to print as binary.
 * Author: Amira
 */

void print_binary(unsigned long int decimal_number)
{
	unsigned long int temp;
	int num_shfts;

	if (decimal_number == 0)
	{
		printf("0");
		return;
	}

	for (temp = decimal_number, num_shfts = 0; (temp >>= 1) > 0; num_shfts++)
		;

	for (; num_shfts >= 0; num_shfts--)
	{
		if ((decimal_number >> num_shfts) & 1)
			printf("1");
		else
			printf("0");
	}
}


