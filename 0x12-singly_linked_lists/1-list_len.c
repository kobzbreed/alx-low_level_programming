#include "lists.h"
/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: Pointer to list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int elementNum = 0;

	while (h != NULL)
	{
		/* if (h->str == NULL)*/
			/*break;*/
		h = h->next;
		elementNum++;
	}

	return (elementNum);
}
