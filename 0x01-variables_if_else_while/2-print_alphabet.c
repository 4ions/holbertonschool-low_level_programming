#include <stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
int letra = 97;
while (letra < 123)
{
putchar(letra);
putchar('\n');
letra = letra + 1;
}
return (0);
}
