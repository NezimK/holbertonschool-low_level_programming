#include <stdio.h>

/**
 * main - that prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

