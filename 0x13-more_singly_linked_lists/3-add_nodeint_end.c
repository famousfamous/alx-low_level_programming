#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new1 element
 *
 * Return: pointer to the new1 node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new1;
	listint_t *tmp = *head;

	new1 = malloc(sizeof(listint_t));
	if (!new1)
		return (NULL);

	new1->n = n;
	new1->next = NULL;

	if (*head == NULL)
	{
		*head = new1;
		return (new1);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new1;

	return (new1);
}
