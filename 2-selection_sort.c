#include "sort.h"
/**
 * swap_array - Swap two elements in an array
 *
 * @array: Pointer that point to an array
 * @j: This is the index to swap with the index k
 * @k: This is the index to swap with the index j
 *
 */
void swap_array(int *array, size_t j, size_t k)
{
	int temp;

	temp = array[j];
	array[j] = array[k];
	array[k] = temp;
}

/**
 * selection_sort - Sorts an array of integers
 * in ascending order using the
 * Selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (array[i] > array[min] && i < size - 1)
		{
			swap_array(array, i, min);
			print_array(array, size);
		}
	}
}
