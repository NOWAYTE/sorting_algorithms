#include "sort.h"
#include<stdio.h>
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
* insertion_sort_list - Sorts doubly linked list 
*
* @list: pointer to head
*
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *t;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;

	}

	for (i = (*list) -> next; i != NULL; i = t)
	{
		t = i->next;
		j = i->prev;

		while (j != NULL && i->n < j->n)
		{
			s_node(list, &j, i);
			print_list((const listint_t *)*list);
		}
	}
}
