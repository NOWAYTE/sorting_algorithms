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
	size_t x, y, m;

	if (array == NULL || size < 2)
	{

		return;
	}

	for (x = 0; x < size - 1; x++)
	{
		m = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[m])
				m = y;

		}

		if (m != y)
		{

			s_int(&array[x], &array[m]);

			print_array(array, size);
		}
	}
}
