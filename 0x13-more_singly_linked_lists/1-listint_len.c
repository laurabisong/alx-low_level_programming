#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - It returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
