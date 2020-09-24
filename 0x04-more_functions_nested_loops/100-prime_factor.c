#include <stdio.h>
#include "holberton.h"
/**
 *main - function to print the mayor number
 *Return: no return
 */

int main(void)
{
long int i, numero;
numero = 612852475143;
for (i = 2 ; i < numero ; i++)
{
if (numero % i == 0)
{
while (numero % i == 0)
numero /= i;
}
}
printf("%li\n", numero);
return (0);
}
