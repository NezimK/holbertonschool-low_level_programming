#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, and the in uppercase
 * Return: O.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		printf("%c ", alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		printf("%c ", alphabet);
	}
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
