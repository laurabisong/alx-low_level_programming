#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *pi;

	p = NULL;
	pi = NULL;

	while (*head != NULL)
	{
		pi = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = pi;
	}

	*head = p;
	return (*head);
}
