#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{

	char *ptr;
	int i = 0, sizeofchar = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (sizeofchar = 0; str[sizeofchar]; sizeofchar++)

		ptr[sizeofchar] = str[sizeofchar];

	return (ptr);
}
