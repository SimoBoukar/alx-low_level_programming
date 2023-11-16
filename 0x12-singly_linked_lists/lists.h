#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t print_list(const list_t *h);
int _strlen(char *strng);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif 
