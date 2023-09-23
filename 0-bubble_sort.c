#include "sort.h"

/**
 * bubble_sort - function that sort array ascending
 * @array: the array to be sorted
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	bool is_swap;

	if (!array || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		is_swap = false;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				is_swap = true;
			}
			print_array(array, size);
		}
		if (!is_swap)
			break;
	}
}
