#include "main.h"

/**
 * rev_string - function that reverse a string.
 * @s : string
 * Return: 0.
 */

void rev_string(char *s)
{
	int start = 0, end = 0;
	char tmp;

	while (start < end)
{
	tmp = s[start];
	s[start] = s[end - start];
	s[end - start] = tmp;

	start++;
	end--;
}
}
