#ifndef STRUCT_H
#define STRUCT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *struct fp - struct op
 *
 *@tp: parameter
 *@func: function associated
 */
typedef struct fp

{
	char *tp;
	void (*func)(va_list);
} fp_;
#endif

#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
