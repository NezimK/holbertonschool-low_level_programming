#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copie the string pointed to by src
 * @src: string source
 * @dest: string out
 * Return: 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
