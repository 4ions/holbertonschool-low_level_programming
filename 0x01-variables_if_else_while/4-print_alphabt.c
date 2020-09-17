#include <stdio.h>
/**
 *main - Prints the method
 *Return: Always 0
 */
int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
if (letra != 'q' && letra != 'e')
putchar(letra);

putchar('\n');
return (0);
}
