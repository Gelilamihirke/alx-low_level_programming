#ifndef _VARIADIC_FUNCTION_
#define _VARIADIC_FUNCTION_
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

#endif
