#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@separator: strings that separate
 *@n: number of strings
 *
 *Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_strings;
	char *string;
	unsigned int i;

	va_start(print_strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(print_strings, char*);
		if (string == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_strings);
}
