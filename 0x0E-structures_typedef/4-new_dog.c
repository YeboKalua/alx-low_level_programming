#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - calculates string length
 * @s: string character
 * Return: integer length
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
/**
 * _strcpy - copies strings
 * @source: where string originates
 * @dest: where it will go
 * Return: modified string
 */
char *_strcpy(char *source, char *dest)
{
	int i;

	for (i = 0; source[i]; i++)
		dest[i] = source[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - adds new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
