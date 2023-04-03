#include "lists.h"

/**
 * reverse_listint - this will reverse a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prev;
		prev = *head;
		*head = nxt;
	}

	*head = prev;

	return (*head);
}
