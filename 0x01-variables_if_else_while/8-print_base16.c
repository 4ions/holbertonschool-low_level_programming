#include <stdio.h>
/**
 *main - main - Prints the method
 *Return: Always 0
 */
int main(void)
{
int a = 0;
int b = 0;
while (a <= 9)
{
putchar(48 + a);
a++;
}
/*if (a == 10)*/
while (b <= 5)
{
putchar(97 + b);
b++;
}


putchar('\n');
return (0);
}
