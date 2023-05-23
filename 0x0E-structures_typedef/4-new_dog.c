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
	int length, i;

	length = 0;

	while (source[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
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
	int n, i;

	n = _strlen(name);
	i = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (n + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (i + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
