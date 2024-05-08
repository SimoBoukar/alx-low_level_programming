#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, mid, high;
	
	if (array == NULL)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
