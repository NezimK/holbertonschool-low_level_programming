#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: elements.
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */

