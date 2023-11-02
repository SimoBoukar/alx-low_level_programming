#include"main.h"
#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to an array
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
