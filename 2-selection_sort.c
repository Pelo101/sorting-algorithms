#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *selection_sort - function that sorts an array of integers
 *in ascending order using the Selection sort algorithm
 *@array: array of integers.
 *@size: size of array.
 */

void selection_sort(int *array, size_t size)
{

	size_t i, j, idx;
	int temp;
	int num_swaps;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
				num_swaps = 1;
			}

		}
		if (num_swaps == 1)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;
			print_array(array, size);
			num_swaps = 0;
		}
	}

}
