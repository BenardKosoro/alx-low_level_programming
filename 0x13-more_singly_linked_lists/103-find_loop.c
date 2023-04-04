#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *east, *west;

	if (head == NULL || head->next == NULL)
		return (NULL);

	east = head->next;
	west = (head->next)->next;

	while (west)
	{
		if (east == west)
		{
			east = head;

			while (east != west)
			{
				east = east->next;
				west = west->next;
			}

			return (east);
		}

		east = east->next;
		west = (west->next)->next;
	}

	return (NULL);
}
