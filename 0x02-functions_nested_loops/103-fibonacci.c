#include <stdio.h>
/**
 * main - Finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0 (Success).
 */
int main() {
	long long int a = 1, b = 2, temp;
	long long int sum = 0;
	while (b <= 4000000) {
		if (b % 2 == 0) {
			sum += b;
		}
		temp = a;
		a = b;
		b += temp;
	}
	printf("%lu\n", sum);
	return 0;
}

