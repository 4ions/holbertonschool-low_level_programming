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
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	}
	printf("%d\n", argc -1 );
	return (0);
}
