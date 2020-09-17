#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%o is negative \n", n);
}
else if (n > 0)
{
printf("%o is positive \n", n);
}
else
{
printf("%o is zero \n", n);
}
return (0);
}
