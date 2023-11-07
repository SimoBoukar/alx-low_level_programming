#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * _strlen - function that gets the length of string
 * @string: the string to get the length
 * Return: length of string
*/

int _strlen(const char *string)
{
	int length = 0;

	while (*string++)
		length++;
	return (length);
}

/**
 * _strcpy - function that return destination with a copy of string from source
 * @source: string to copy
 * @destination: copy string to here
 * Return: @destination
*/

char *_strcpy(char *destination, char *source)
{
	int a;

	for (a = 0; source[a]; a++)
		destination[a] = source[a];
	destination[a] = '\0';

		return (destination);
}

/**
 * new_dog - function that create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: string to pointer dog, NULL if it fails
 *
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || age == 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
			if ((*dog).name == NULL)
			{
				free(dog);
	return (NULL);
			}
	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
			if ((*dog).owner == NULL)
			{
				free((*dog).name);
				free(dog);
	return (NULL);
			}

		(*dog).name = _strcpy((*dog).name, name);
		(*dog).age = age;
		(*dog).owner = _strcpy((*dog).owner, owner);

	return (dog);
}
