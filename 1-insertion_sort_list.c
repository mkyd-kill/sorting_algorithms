#include "sort.h"
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
	while(current->next != NULL)
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
			}
		}
		current = current->next;
	}
}
