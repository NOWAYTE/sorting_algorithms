#include "sort.h"
#include <stdio.h>

/**
 * s_int - swap integers
 * @a: first int
 * @b: second int
 */
void s_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * selection_sort - Sort array of integers
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			s_int(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
