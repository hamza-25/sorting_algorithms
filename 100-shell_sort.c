#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 * using the Shell sort algorithm with the Knuth sequence.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t interval = 1;
	size_t i, j;
    int temp;

	/* Generate the Knuth sequence */
	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		/*printf("%ld\n", interval);*/

		for (i = interval; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}

		/* Print the array after each interval decrease */
		for (i = 0; i < size; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		interval = (interval - 1) / 3;
	}
}