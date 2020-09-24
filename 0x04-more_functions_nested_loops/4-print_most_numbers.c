#include "holberton.h"
/**
 *print_most_numbers - functions to print the numbers, less 2 and 4
 *void: no return
 *Return: dont return
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
_putchar(i);
}
_putchar('\n');
}
