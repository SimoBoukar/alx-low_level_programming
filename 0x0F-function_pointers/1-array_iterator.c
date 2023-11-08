#include <stdio.h>
#include<stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array
 * @size: size of array
 * @action: funct pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end_of_array = array + size - 1;

	if (array && size && action)
		while (array <= end_of_array)
			action(*array++);
}
