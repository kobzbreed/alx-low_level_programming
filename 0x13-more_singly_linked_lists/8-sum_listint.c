#include "lists.h"
/**
 * sum_listint - this function returns the sum of all data of a linked list
 * @head: pointer to list
 * Return: sum of all n data if list not empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
