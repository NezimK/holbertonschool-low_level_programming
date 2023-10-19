#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 * @c: check
 * Return: 0.
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(50);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(38);
	return (-1);
	}
	else
	{
	_putchar(60);
	return (0);
	}
}
