#include "holberton.h"
/**
 *more_numbers - Function to print numbers from 0 to 14
 *void: No return
 *Return: No return
 */
void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j / 10 != 0)
{
_putchar('0' + j / 10);
}
_putchar('0' + j % 10);

}
_putchar('\n');
}
}
