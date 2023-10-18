#include "main.h"

/**
 * main - write a function thats prints the alphabet, in lowercase
 * Rteurn: Always 0.
 */

void print_alphabet(void);

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
	return (0);
}
