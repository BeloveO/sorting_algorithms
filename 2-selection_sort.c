#include "sort.h"
/**
 * selection_sort - sorts array of integers in ascending order
 * using selection sort algorithm
 * @array: input array
 * @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}
		if (i != k)
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
