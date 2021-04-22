#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


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
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
