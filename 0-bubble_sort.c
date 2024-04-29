#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: an array that needs to be sorted
 * @size: size of the array
 *
 * Description: uses bubble sort to sort an array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int is_swaped = 1;
	int tmp;

	while (is_swaped)
	{
		is_swaped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				is_swaped = 1;
				print_array(array, size);
			}
		}
	}
}
