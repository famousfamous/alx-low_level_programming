#include "lists.h"

/**
 * add_nodeint - adds a new1 node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new1 node
 *
 * Return: pointer to the new1 node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new1;

	new1 = malloc(sizeof(listint_t));
	if (!new1)
		return (NULL);

	new1->n = n;
	new1->next = *head;
	*head = new1;

	return (new1);
}
