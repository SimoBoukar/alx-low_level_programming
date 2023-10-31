#include"main.h"
#include<stddef.h>
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
	;
	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, n;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ptr = malloc((size1 + size2) *sizeof(char) + 1);

	if (ptr == 0)
		return (0);

	for (n = 0; n <= size1 + size2; n++)
	{
		if (n < size1)
			ptr[n] = s1[n];
		else
			ptr[n] = s2[n - size1];
	}
		ptr[n] = '\0';
		return (ptr);
}
