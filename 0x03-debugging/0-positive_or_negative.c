#include "holberton.h"
/**
 *main - Prints the method
 *Return: Always 0
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else if (i < 0)
printf("%d is negative\n", i);
}
