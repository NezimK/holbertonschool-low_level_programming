#include "main.h"

/**
 * rev_string - function that reverse a string.
 * @s : string
 * Return: 0.
 */

void rev_string(char *s)
{
	int start = 0, end = *s - 1;
	char tmp;

	while (start < end)
{
	tmp = start;
	start = end;
	end = tmp;

	start++;
	end--;
}
}
