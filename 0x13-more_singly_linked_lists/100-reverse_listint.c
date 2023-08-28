/*
 * File: 100-reverse_listint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behnd;

	if (head == NULL || *head == NULL)
		return (NULL);

	behnd = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behnd;
		behnd = *head;
		*head = ahead;
	}

	(*head)->next = behnd;

	return (*head);
}
