#include "main.h"

/**
* get_endianness - Check the endianness of the system.
* Return: 0 if it's big, or 1 if it's little.
* Author: Amira
*/

int get_endianness(void)
{
	int number = 1;

	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}

