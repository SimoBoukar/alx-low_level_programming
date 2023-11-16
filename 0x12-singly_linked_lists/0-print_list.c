#include"lists.h"

/**
 * print_list - function that prints all the elements of a list_t.
 * description: prints all elemnts of list_t
 * @h: pnter to 1st node
 *
 * Return: the numb_of nodes
*/

size_t print_list(const list_t *h)
{
	int num_of_nodes = 0;

	while (h)
	{
		printf("[%d] %S\n", _strlen(h->str), h->strng ? h->strng : "[0] (nil)");
		h = h->strng;
	}
	return (numb_of_nodes);
}

/**
 * _strlen - return length of string.
 * description: give us length of a string
 * @strng: string
 *
 * Return: length of strng type int
*/

int _strlen(char *strng)
{
	int len_of_strng;

	if (strng == NULL)
		return (0);

	while (*strng++)
	len_of_strng++;
	return (len_of_strng);
}
