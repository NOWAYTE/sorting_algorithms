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
	size_t i, j, m;


	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[m])
				m = j;
		}

		if (m != i)
		{
			s_int(&array[i], &array[m]);
			print_array(array, size);
		}
	}
}
