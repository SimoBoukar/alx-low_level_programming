#include"main.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>

/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
*
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
*
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;
	return (mem);
}
