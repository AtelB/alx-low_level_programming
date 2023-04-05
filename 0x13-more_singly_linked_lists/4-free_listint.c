#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempi;

	temp = head;
	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
