#include "sort.h"

/**
 * lomuto_partition - Lomuto partition for Quick Sort
 * @array: Array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 *
 * Return: Index of the pivot element
 */
int lomuto_partition(int *array, int low, int high)
{
    int pivot, i, j, k, temp;

    (void)k;
    i = low - 1;
    pivot = array[high];

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;

            /* Swap array[i] and array[j] */
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;

            /*for (k = 0; k <= high; k++)
            {
                printf("%d", array[k]);
                if (k < high)
                    printf(", ");
            }
            printf("\n");*/
        }
    }

    /* Swap array[i + 1] and pivot (array[high]) */
    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    /*for (k = 0; k <= high; k++)
    {
        printf("%d", array[k]);
        if (k < high)
            printf(", ");
    }
    printf("\n");*/
    
    /* add args size and replace 10 withe the of array*/
    print_array(array, 10);

    return (i + 1);
}

/**
 * quick_sort - Quick Sort using Lomuto partition
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (size <= 1)
        return;
    quick_sort_helper(array, 0, size - 1);
}

/**
 * quick_sort_helper - Helper function for Quick Sort
 * @array: Array to be sorted
 * @low: Starting index of the array/subarray
 * @high: Ending index of the array/subarray
 */
void quick_sort_helper(int *array, int low, int high)
{
    if (low < high)
    {
        int pivot_index = lomuto_partition(array, low, high);

        quick_sort_helper(array, low, pivot_index - 1);
        quick_sort_helper(array, pivot_index + 1, high);
    }
}
