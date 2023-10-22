#include "main.h"

/**
 * more_numbers - 10 times numbers from 0 to 14
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 10; b++)
	{
	if (b > 9)
	{
		_putchar('0' + b / 10);
	}
		_putchar('0' + b % 10);
	}
		_putchar('\n');
	}
}
