#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *_linear_search - recursion for search
 *@array: array of search
 *@index: index of the array
 *@value: value to found
 *@size: size of the array
 *
 *Return: return the position of the index when value is found
 */

int _linear_search(int *array, size_t index, int value, size_t size)
{
	int result = 0;

	if (index > size - 1)
		return (-1);

	printf("Value checked array[%zu] = [%d]\n", index, array[index]);

	if (array[index] == value)
	{
		return ((int)index);
	}
	else
	{
		result = _linear_search(array, index + 1, value, size);
	}

	return (result);
}

/**
 *linear_search - Searches for a value in array
 *@array: first position of array
 *@size: numbers of elements on array
 *@value: value to search
 *
 *Return: Return the first index where value is located1
 */
int linear_search(int *array, size_t size, int value)
{

	int result = 0;
	size_t index = 0;

	if (!array)
		return (-1);

	result = _linear_search(array, index, value, size);

	return (result);
}
