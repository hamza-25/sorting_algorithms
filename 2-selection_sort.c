#include "sort.h"

/**
 * selection_sort - function that sort array ascending selection method
 * @array: the array to be sorted
 * @size: size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t tmp, i, j;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
