#include "holberton.h"
/**
 *_pow_recursion - the value of x raised to the power of y
 *@x: value of x
 *@y: value of y
 *
 *Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		{
		return (-1);
		}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}