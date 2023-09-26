#include<stdio.h>
/**
 * s_int - Swap integers in an array
 * @a: first integer
 * @b: Second integer
 *
 */

void s_int(int *a, int b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}

/**
 * bubble_sort -sort array of integers 
 * @array: array of integers
 * @size: Size of array
 */
void bubble_srt(int *array, size_t size)
{
	size_t i;
	size_t l = size;
	bool b = false;

	if (array == NULL || size < 2)
	{
		return;

	}

	whiel (!b)
	{
		b = true;

		for (i = 0; i < l - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				s_int(array + i, array + i + 1);

				print_array(array, size);

				b = false;

			}
		}

		l--;

	}
