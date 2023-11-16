#include"lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: pointer to 1st node
 *
 * Return: num_of_elements
*/

size_t list_len(const list_t *h)
{
	size_t num_of_elem = 0;

	while (h != NULL)
	{
		h = (*h).next;
		num_of_elem++;
	}
	return  (num_of_elem);
}
