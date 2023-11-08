#include <stdio.h>
#include<stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: funct pointer
 * Return: int index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
			return (a);
			a++;
		}
	return (-1);
}
