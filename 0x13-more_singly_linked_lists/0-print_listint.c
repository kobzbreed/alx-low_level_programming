#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to list
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodeNumber = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNumber++;
	}

	return (nodeNumber);
}
