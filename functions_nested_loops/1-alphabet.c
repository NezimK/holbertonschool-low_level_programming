#include "main.h"

/**
 * main - write a function thats prints the alphabet, in lowercase
 * Return: Always 0.
 */

void print_alphabet(char c)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
