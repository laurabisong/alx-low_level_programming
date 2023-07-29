#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *cut = head;
	list_t *next;

	while (cut != NULL)
	{
	next = cut->next;
	free(cut->str);
	free(cut);
	cut = next;
	}
}
