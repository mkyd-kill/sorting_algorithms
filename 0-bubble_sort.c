#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers
 * in ascending order
 * @array: The integer array
 * @size: Size of the array
 * Return: Sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp = 0;
	int *list = malloc(n * sizeof(int));

	list = array;

	for (a = 1; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (list[b] > list[b + 1])
			{
				temp = list[b];
				list[b] = array[b + 1];
				list[b + 1] = temp;
				print_array(list, size);
			}
		}
	}
}
