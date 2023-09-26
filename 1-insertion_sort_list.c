#include "sort.h"

/**
 * s_node - swap nodes
 * @n: pointer to head
 * @n1: pointer to first swap
 * @n2: pointer to second node swap
 */
void s_node(listint_t **n, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;

	if (n2->next != NULL)
	{
		n2->next->prev = *n1;
	}

	n2->prev = (*n1)->prev;
	n2->next = *n1;

	if ((*n1)->prev != NULL)
	{
		(*n1)->prev->next = n2;
	}
	else
	{
		*n = n2;
		(*n1)->prev = n2;
		*n1 = n2->prev;
	}
}

/**
 * insertion_sort_list - Sorts doubly linked list using insertion sort algorithm
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *c;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	c = (*list)->next;


	while (c != NULL)
	{
		listint_t *temp = c;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			listint_t *prev = temp->prev;

			listint_t *next = temp->next;

			if (prev->prev != NULL)
			{
				prev->prev->next = temp;
			}
			else
			{
				*list = temp;
			}

			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;
			prev->next = next;

			if (next != NULL)
			{
				next->prev = prev;
			}

			print_list((const listint_t *)*list);
		}

		c = c->next;
	}
}
