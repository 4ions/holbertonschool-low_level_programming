#include "variadic_functions.h"
/**
 *print_numbers - prints numbers 
 *@separator: the string to be printed between numbers
 *@n: numbers to be printed
 *
 *Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numero;
	va_list numb_print;
	va_start(numb_print, n);


	for (i = 0; i < n; i++)
	{

			numero = va_arg(numb_print, int);
			printf("%d", numero);

			if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(numb_print);
}
