#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog struct
 * @name: dog name
 * @age: dog name
 * @d: pointer to dog structure
 * @owner: dog owner
 * Return: 0 if success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
