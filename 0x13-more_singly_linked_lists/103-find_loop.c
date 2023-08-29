/*
 * File: 103-find_loop.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *totoise, *rabbit;

	if (head == NULL || head->next == NULL)
		return (NULL);

	totoise = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (totoise == rabbit)
		{
			totoise = head;

			while (totoise != rabbit)
			{
				totoise = totoise->next;
				rabbit = rabbit->next;
			}

			return (totoise);
		}

		totoise = totoise->next;
		rabbit = (rabbit->next)->next;
	}

	return (NULL);
}
