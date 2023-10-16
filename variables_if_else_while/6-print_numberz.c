#include <stdio.h>

/**
 * main - Print all number 0 to 10
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
	}

	putchar('\n');
	return (0);
}
