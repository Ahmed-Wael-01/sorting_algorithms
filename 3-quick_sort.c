#include "sort.h"

/**
 * demon - i did a deal with a demon
 * @array: array to sort
 * @size: size of the array
 * @printable: full array to print
 * @original_size: the size of the array to print
 *
 * Description: work around to print the array for test cases
 */

void demon(int *array, size_t size, int *printable, size_t original_size)
{
	size_t i = __SIZE_MAX__;
	int tmp;
	size_t j = 0;

	if (size <= 1)
		return;

	for (j = 0; j < size; j++)
	{
		if (array[j] < array[size - 1])
		{
			i++;
			if (j == i)
				continue;
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			print_array(printable, original_size);
		}
	}
	i++;
	if (size - 1 != i && array[size - 1] != array[i])
	{
		tmp = array[size - 1];
		array[size - 1] = array[i];
		array[i] = tmp;
		print_array(printable, original_size);
	}
	demon(array, i, printable, original_size);
	demon(&array[i + 1], size - i - 1, printable, original_size);
}

/**
 * quick_sort - sort with quicksort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Description: sorts an array using quicksort
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	demon(array, size, array, size);
}
