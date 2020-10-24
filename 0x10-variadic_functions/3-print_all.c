#include "variadic_functions.h"

/**
 *print_all - print anything
 *@format: all characters
 *
 *Return: No return
 */
void print_all(const char * const format, ...)
{
	va_list printAll;
	char *sep = " ,";
	char *string;
	int i, j;

	va_start(printAll, format);

	while (format[i])
		i++;
	while (format[j])
	{
		if (j == (i - 1))
		{
			sep = "";
		}
		switch (format[j])
		{
		case 'c':
		{
			printf("%c%s", va_arg(printAll, int), sep);
			break;
		}
		case 'i':
		{
			printf("%d%s", va_arg(printAll, int), sep);
			break;
		}
		case 'f':
		{
			printf("%f%s", va_arg(printAll, double), sep);
			break;
		}
		case 's':
		{
			string = va_arg(printAll, char *);
			if (string == NULL)
			{
				string = "(nil)";
			}
			printf("%s%s", string, sep);
			break;
		}
		}
		j++;
	}
	printf("\n");
	va_end(printAll);
}
