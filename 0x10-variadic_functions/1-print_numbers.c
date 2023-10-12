#include "variadic_functions.h"
/**
 * print_numbers - ..
 * @separator: ..
 * @n: ..
 * Return: ..
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list at;

	va_start(at, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(at, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(at);
}
