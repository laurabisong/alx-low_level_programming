#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neew;
	listint_t *temp;

	(void)temp;

	neew = malloc(sizeof(listint_t));

	if (neew == NULL)
		return (NULL);

	neew->n = n;
	neew->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = neew;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = neew;
	}

	return (*head);
}
