#include "holberton.h"
/**
 *print_triangule - Funtion to print a triangule
 *@size: size of triangule
 *Return: no return
 */
void print_triangule(int size)
{
int i, j;

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (size - j < i)
{
_putchar('#');
}
else
{
_putchar('_');
}

}
_putchar('\n');
}
}
