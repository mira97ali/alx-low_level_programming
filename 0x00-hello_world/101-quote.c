#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point
 *
 * Description: print to the std error
 *
 * Return: error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}

