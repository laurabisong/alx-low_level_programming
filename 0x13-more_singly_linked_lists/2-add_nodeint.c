#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neew;

	neew = malloc(sizeof(listint_t));

	if (neew == NULL)
		return (NULL);

	neew->n = n;
	neew->next = *head;
	*head = neew;

	return (*head);
}
