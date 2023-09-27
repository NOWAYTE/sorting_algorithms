#include "sort.h"
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
 *
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t x, y;

	if (array == NULL || size < 2)
	{
		return;

	}

	for (x =0; x < size; x++)
	{
		m = array + x;

		for (y = x + 1; y <size; y++)
		{
			m = (array[y] < *m) ? (array + y) : m;

			if ((array + x) != m)
			{
				s_int(array + x, m);
				print_array(array, size);

			}

		}

	}

}
