#include "sort.h"
/**
 * shell_sort - Sorts an Array of integers in ascending
 * order using the Shell Sort Algorithm
 * using the Knuth Sequence
 * @array: Pointer to the array
 * @size: Array Size
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 1, x, y;
	int tmp;

	if (array == NULL || size < 2)
		return;
	while (i < size)
		i = i * 3 + 1;
	i = (i - 1) / 3;
	while (i > 0)
	{
		y = 0;
		for (x = 0; x + i < size; x++)
		{
			if (array[x] > array[x + i])
			{
				tmp = array[x];
				array[x] = array[x + i];
				array[x + i] = tmp;
				y = 1;
			}
		}
		if (y == 0)
		{
			i = (i - 1) / 3;
			print_array(array, size);
		}
	}
}
