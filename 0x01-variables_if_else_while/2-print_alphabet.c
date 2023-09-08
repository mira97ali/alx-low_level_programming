#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet without spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}

