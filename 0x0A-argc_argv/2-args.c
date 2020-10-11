#include "holberton.h"
#include <stdio.h>


/**
 *main - function main
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 to sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
