#include"lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: pointer to 1st node
 *
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
