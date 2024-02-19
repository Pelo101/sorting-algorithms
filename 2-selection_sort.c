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

	size_t i, j;
	int idx, temp;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
			}

		}

		temp = array[i];
		array[i] = array[idx];
		array[idx] = temp;
		print_array(array, size);
	}
}
