#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
