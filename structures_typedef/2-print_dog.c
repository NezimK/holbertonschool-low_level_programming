#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct
 * @d: point
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
	}
	{
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
	}
}
