#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 *binary_search - searches for a value using the Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value:  is the value to search for
 *
 *Return: if value is not present in array or if array is NULL, return -1
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int m, i = 0, index = 0;
	int _size = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (index <= _size)
	{
		i = index;
		printf("Searching in array:  ");
		while (i <= ((int)_size))
		{
			if (i == ((int)_size))
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		printf("\n");

		m = floor((index + _size) / 2);

		if (array[m] < value)
			index = m + 1;
		else if (array[m] > value)
			_size = m - 1;
		else
			return (m);
	}

	return (-1);
}
