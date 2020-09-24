#include "holberton.h"
/**
 *print_numbers - functions to print numbers from 0 to 9
 *void: no return
 *return: On success 1
 */
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
