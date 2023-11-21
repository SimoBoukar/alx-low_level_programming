#include"lists.h"

/**
 * free_listint2 -  function that frees a listint_t
 * @head: address of pointer to 1st node
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
