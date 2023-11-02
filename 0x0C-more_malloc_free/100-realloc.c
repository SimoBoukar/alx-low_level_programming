#include"main.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to mem allocated with malloc(old_size)
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size of bytes of new mem block
 * Return: NULL if new size = 0 and ptr if not
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pnter;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pnter = malloc(new_size);
		if (pnter == NULL)
			return (NULL);
		return (pnter);
	}
	if (new_size > old_size)
	{
		pnter = malloc(new_size);
		if (pnter == NULL)
			return (NULL);
				for (i = 0; i < old_size && i < new_size; i++)
					*((char *)pnter + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pnter);
}
