#include <stdio.h>
#include "main.h"

/**
 * main - Nrints the name of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
