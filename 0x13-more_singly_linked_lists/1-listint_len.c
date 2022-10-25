#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elementNum = 0;

	while (h != NULL)
	{
		h = h->next;
		elementNum++;
	}

	return (elementNum);
}
