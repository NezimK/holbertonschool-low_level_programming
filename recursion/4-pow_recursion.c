#include "main.h"

/**
 * _pow_recursion - function
 * @x : value
 * @y : time
 * Return: Value of n.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
