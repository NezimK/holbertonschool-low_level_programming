#include "main.h"
#include <string.h>

/**
 * puts2 - Function that prints every char of string.
 * @str: String.
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int a = 0;

	while (str[a] != '\0')
	{
	a++;
	}
	for (; i < a; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
