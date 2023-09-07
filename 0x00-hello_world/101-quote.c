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
	fprintf(stderr, "An error occurred.\n");
	exit(1);
}

