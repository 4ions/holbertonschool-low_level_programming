#include "holberton.h"
/**
 * _isupper - To identify is a letter is uppercase or  not
 * Return: 1 if is a uppercase
 * @c: be the number in the loop
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);
}
