#include "holberton.h"
/**
 * _islower - To identify is a letter is lowercase or not
 * Return: 1 if is a lowercase
 * @c: be the number in the loop
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
return (1);

else
return (0);
}
