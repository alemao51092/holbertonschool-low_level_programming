#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - main function
 * @separator: separator
 * @n: unsigned ch
 * Description: print
 * Return: nth
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list parameters;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(parameters, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");

	va_end(parameters);
}
