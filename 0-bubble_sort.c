#include "sort.h"

/**
 * bubble_sort - sorts an array in the bubbly way ahuevo.
 * @array: Received array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t counter1 = 0, counter2, temp;

	if (!array || size <= 0)
		return;

	for (; counter1 < size; counter1++)
	{
		for (counter2 = 0; counter2 < (size - 1); counter2++)
		{
			if (array[counter2] > array[counter2 + 1])
			{
				temp = array[counter2];
				array[counter2] = array[counter2 + 1];
				array[counter2 + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
