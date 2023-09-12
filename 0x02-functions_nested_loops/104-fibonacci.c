#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int end = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	before1 = (before / end);
	before2 = (before % end);
	after1 = (after / end);
	after2 = (after % end);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", after1 + (after2 / end));
		printf("%lu", after2 % end);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");

	return (0);
}

