#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of an array of integers.
 * @a: point
 * @n: var
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
	printf("%d", a[e]);
	if (e != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
