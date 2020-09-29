#include "holberton.h"
/**
 *swap_int - swaps two values
 *@a: integer point
 *@b: integer point
 *
 *Return: No return
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
