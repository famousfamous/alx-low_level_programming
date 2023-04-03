#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new1 node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new1 node is added
 * @n: data to insert in the new1 node
 *
 * Return: pointer to the new1 node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new1;
	listint_t *tmp = *head;

	new1 = malloc(sizeof(listint_t));
	if (!new1 || !head)
		return (NULL);

	new1->n = n;
	new1->next = NULL;

	if (idx == 0)
	{
		new1->next = *head;
		*head = new1;
		return (new1);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new1->next = tmp->next;
			tmp->next = new1;
			return (new1);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
