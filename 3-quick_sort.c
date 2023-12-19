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
 * lomutoPartition - Implements the lomuto partition
 * @array: Array ptr
 * @low: Min index
 * @max: Max index
 * @size: Size of array
 * Return: Partition numbers
 */
int lomutoPartition(int *array, int low, int max, int size)
{
	int pivot = array[max];
	int j, i = (low - 1);

	for (j = low; j <= max; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_array(array, i, j);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * modifyQuickSort - Algorithm Quick Sort
 *
 * @arr: Pointer that point to an array
 * @low: The minimum index
 * @high: The maximum index
 * @size: The size of the array
 *
 */
void modifyQuickSort(int *arr, int low, int high, int size)
{
	if (low < high)
	{
		int pi = lomutoPartition(arr, low, high, size);

		modifyQuickSort(arr, low, pi - 1, size);
		modifyQuickSort(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - Algorithm Quick Sort
 *
 * @array: Pointer that point to an array
 * @size: The size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	modifyQuickSort(array, 0, size - 1, size);
}
