#include"main.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>

/**
 * *_memset - fills mem with a cste byte
 * @s: pointer to put the cste
 * @b: cste
 * @n: max bytes to use
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each elemnt
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mem = malloc(sizeof(int) * nmemb);

	if (mem == 0)
		return (NULL);

	_memset(mem, 0, sizeof(int) * nmemb);

	return (mem);
}
