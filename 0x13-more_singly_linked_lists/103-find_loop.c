#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the beginning of the list
 *
 * Retutn: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head);
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (head != NULL)
	{
		if (slow == fast)
		{
			while (head != NULL)
			{
				if (slow == fast)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
		slow = slow->next;
		fast = fast->next->;
	}
}
