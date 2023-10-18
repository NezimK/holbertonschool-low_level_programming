#include "main.h"

/**
 * main - function that prints 10 times the alphabet, in lowercase.
 * Not return: 0.
 */

void print_alphabet_x10(void);

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet, 10);
	}

	_putchar('\n');
}
