#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *present;

	if (head != NULL)
	{
		present = *head;
		while ((temp = present) != NULL)
		{
			present = present->next;
			free(temp);
		}
		*head = NULL;
	}
}
