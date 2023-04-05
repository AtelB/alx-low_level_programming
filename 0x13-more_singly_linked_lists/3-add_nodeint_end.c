#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: head of linked lists
 * @n: integer
 *
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listimt_t **head, const int n)
{
		listint_t *new;
		listint_t *temp;

		if (head == NULL)
			return (NULL);
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		return (new);
}
