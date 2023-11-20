#include"lists.h"

/**
 * print_listint -  prints all the elements of a listint_t
 * @h: pointer to 1st node
 *
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
