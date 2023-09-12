#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int a = 1, b = 2;
	unsigned long int temp;
	int count = 0;

	while (count <= 98)
	{
		printf("%lu, ", a);
		temp = a;
		a = b;
		b = temp + b;
		count++;
	}

	printf("%lu\n", a);
	return (0);
}

