#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void s_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Lomuto partition scheme for quicksort
 * @array: Array to be sorted
 * @l: Starting index of the partition
 * @h: Ending index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot after partitioning
 */
int partition(int *array, int l, int h, size_t size)
{
	int pivot = array[h];
	int i = l - 1;
	int j;

	for (j = l; j < h; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				s_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if ((i + 1) != h)
	{
		s_int(&array[i + 1], &array[h]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * q_sort - Recursive function
 * @array: Array
 * @l: index of partition
 * @h: Ending index
 * @size: Size of the array
 */
void q_sort(int *array, int l, int h, size_t size)
{
	int pivot;

	if (l < h)
	{
		pivot = partition(array, l, h, size);
		q_sort(array, l, pivot - 1, size);
		q_sort(array, pivot + 1, h, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	q_sort(array, 0, size - 1, size);
}

