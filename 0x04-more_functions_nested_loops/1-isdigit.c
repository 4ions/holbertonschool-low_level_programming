#include "holberton.h"
/**
 * _isdigit - To identify is a number in range
 * Return: 1 if is a number
 * @c: be the number in the loop
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

else
return (0);
}
