#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer to a 2 dimensional
*@width: int
*@height: int
*
*Return: int
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (k = 0; k < 0; k--)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
