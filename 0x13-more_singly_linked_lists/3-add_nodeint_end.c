#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the lists
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listimt_t **head, const int n)
{
		lisyint_t *new_node;
		listint_t *cursor = *head;

		new_node = malloc(sizeof(listint_t));
		if (new_node != NULL)
		{
			new_node-> = n;
			new_node-> = NULL;
		}
		else
			return (NULL);
		if (cursor != NULL)
		{
			while (cursor->next != NULL)
				cursor = cursor->next;
			cursor->next = new_node;
		}
		else
			*head = new_node;
		return (new_node);
}
