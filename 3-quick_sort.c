#include "sort.h"
#include <stdio.h>
#include <stdlib.h>


/**
*swap - swaps nodes.
*@a: pointer.
*@b: pointer.
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

/**
*partition - function to perform lomuto partition
*@arr: array
*@low: low position  integers in array.
*@high: high position integers in array.
*@size: size of array.
*Return: pivot index.
*/
int partition(int arr[], int low, int high, size_t size)
{

	int pivot = arr[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
	if (arr[j] <= pivot)
	{
	i++;
	swap(&arr[i], &arr[j]);
	print_array(arr, size);
	}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr, size);
	return (i + 1);




}
/**
*quick_sortL- function that sorts an array of integers
*in ascending order using the Quick sort algorithm
*@arr: array of integers.
*@size:size of array
*@low: low position  integers in array.
*@high: high position integers in array.
*/
void quick_sortL(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
	int partition_index = partition(arr, low, high, size);

	quick_sortL(arr, low, partition_index - 1, size);
	quick_sortL(arr, partition_index + 1, high, size);

	}


}


/**
*quick_sort - sorts an array of integers
*in ascending order using the Quick sort algorithm
*@array: array of integers.
*@size: size of array.
*/
void quick_sort(int *array, size_t size)
{

	if (array == NULL || size <= 1)
	{
	return;
	}
	quick_sortL(array, 0, size - 1, size);
}
