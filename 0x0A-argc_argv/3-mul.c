#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - function main
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 to sucess
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc - 1 >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);

		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return(0);

}
