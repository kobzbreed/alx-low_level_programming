#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_lists - A function that prints all the elements of a list
 * @h - pointer to list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodeNumber = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodeNumber++;
	}

	return (nodeNumber);
}
