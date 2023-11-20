#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array
 * @size: Value of array
 * @c: Initial Value
 * Return: Pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
<<<<<<< HEAD
        char *array;
        unsigned int i;

        if (size == 0)
                return (NULL);

        array = (char *)malloc(sizeof(char) * size);

        if (array == NULL)
                return (NULL);

        for (i = 0; i < size; i++)
                array[i] = c;

        return (array);
}
=======
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
>>>>>>> f9c5de5a735b0938e70a0fc5e3f855eb69b65ca7
