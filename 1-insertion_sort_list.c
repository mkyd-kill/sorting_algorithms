#include "sort.h"
/**
 * swap_nodes - Function to swap two nodes in a list
 *
 * @list: This is the single list linked
 * @node1: Element to swap
 * @node2: Element to swap
 *
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{

	listint_t *aux = node1->prev;

	node1->next = node2->next;

	if (node2->next != NULL)
		node2->next->prev = node1;
	node1->prev = node2;
	node2->next = node1;
	node2->prev = aux;
	if (node2->prev != NULL)
		node2->prev->next = node2;
	else
		*list = node2;
}

/**
 * insertion_sort_list - Sorts a doubly linked list
 * in ascending order using the
 * insertion sort algorithm
 * @list: Array list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	temp = NULL;
	current = NULL;

	if (!list || !(*list))
		return;

	current = *list;
	while (current->next != NULL)
	{
		temp = current->next;
		if (current->n > current->next->n)
		{
			swap_nodes(list, temp->prev, temp);
			print_list(*list);
			current = temp;
			while (temp->prev != NULL && temp->n < temp->prev->n)
			{
				swap_nodes(list, temp->prev, temp);
				print_list(*list);
			}
		}
		current = current->next;
	}
}
