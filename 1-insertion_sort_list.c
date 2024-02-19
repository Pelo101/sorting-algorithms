#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *insertion_sort_list - function that sorts doubly linked list of integers
 *in ascending order using the insertion sort algorithm
 *@list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node;
	listint_t *temp;
	listint_t *current = NULL;

	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	curr_node = (*list)->next;
	while (curr_node != NULL)
	{
		temp = curr_node;
		current = curr_node->prev;

		while (current != NULL && current->n > temp->n)
		{
			if (current->prev != NULL)
			{
				current->prev->next = temp;
			}
			else
			{
				*list = temp;
			}
			if (temp->next != NULL)
			{
				temp->next->prev = current;
			}
			current->next = temp->next;
			temp->prev  = current->prev;
			temp->next = current;
			current->prev = temp;

			current = temp->prev;
			print_list(*list);
		}
		curr_node = curr_node->next;
	}
	print_list(*list);
}
