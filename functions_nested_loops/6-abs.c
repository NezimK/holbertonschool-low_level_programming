#include <stdio.h>
#include "main.h"

/**
 * int _abs - computes the absolute value of an integer
 * @c : check
 * Return: Value of an integer
 */

int _abs(int a)
{
	if (a < 0)
	{
	int abs_val;

	abs_val = a * -1;
	return (abs_val);
	}
	return (a);
}
