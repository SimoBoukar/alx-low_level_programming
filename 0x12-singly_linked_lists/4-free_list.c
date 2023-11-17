#include"lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: pointer to first node
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return (NULL);
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next->node;
	}
}
