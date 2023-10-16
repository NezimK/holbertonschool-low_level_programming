#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, and the in uppercase
 * Return: O.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
