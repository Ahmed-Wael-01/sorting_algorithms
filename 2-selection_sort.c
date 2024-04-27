#include "sort.h"
#include <stdio.h>

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t l;

	for (i = 0 ; i < size ; i++){
		size_t min = i;
	for (j = i + 1 ; j < size ; j++)
	{
		if (array[j] < array[min])
		{
			min = j;
		}
	}
	if (min != i)
	{
		int temp = array[i];

		array[i] = array[min];
		array[min] = temp;
		printf("%d", array[0]);
		for (l = 1 ; l < size ; l++)
		{
			printf(", %d", array[l]);
		}
		printf("\n");
	}
}
}
