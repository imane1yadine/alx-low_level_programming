#include "lists.h"

/**
 * free_list - function that frees a singly linked list.
 * @head: pointer to singly linked list.
 *
 * Return: no return.
 *
 */

void free_list(list_t *head)
{
	list_t *temp_variable;

	temp_variable = head;

	while (head != NULL)
	{
		temp_variable = head;
		head = head->next;
		free(temp_variable->str);
		free(temp_variable);
	}
	free(head);
}
