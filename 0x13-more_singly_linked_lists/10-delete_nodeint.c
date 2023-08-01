#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pae;
	listint_t *next;

	pae = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && pae != NULL; i++)
		{
			pae = pae->next;
		}
	}

	if (pae == NULL || (pae->next == NULL && index != 0))
	{
		return (-1);
	}

	next = pae->next;

	if (index != 0)
	{
		pae->next = next->next;
		free(next);
	}
	else
	{
		free(pae);
		*head = next;
	}

	return (1);
}
