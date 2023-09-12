#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a = 1, b = 2;
	int count = 0;

	while (count < 98)
	{
		printf("%d, ", a);
		int temp = a;

		a = b;
		b = temp + b;

		count++;
	}
	printf("%d\n", a);
	return (0);
}

