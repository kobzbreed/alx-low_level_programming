#include "lists.h"
/**
 * pop_listint - this function deletes the head of a linked list
 * and returns thr head node's data (n)
 * @head: pointer to list
 * Return: the data in head (num)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
