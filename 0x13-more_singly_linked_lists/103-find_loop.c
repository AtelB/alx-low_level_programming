#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the beginning of the list
 *
 * Retutn: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cheetah, *snail;

	snail = head;
	cheetah = head;
	while (head != NULL)
	{
		if (cheetah == snail)
		{
			while (head != NULL)
			{
				if (snail == cheetah)
					return (snail);
				snail = snail->next;
				cheetah = cheetah->next;
			}
		}
		snail = snail->next;
		cheetah = cheetah->next->;
	}
}
