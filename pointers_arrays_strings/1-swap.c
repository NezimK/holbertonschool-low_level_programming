#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a : num1
 * @b : num2
 * Return: 0.
 */

void swap_int(int *a, int *b)

{

	int tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}
