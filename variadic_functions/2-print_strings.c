#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_string - main function
 * @separator: separator
 * @n: count
 * Description: printstring
 * Return: nth
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;
	char *str;

	va_start(parameters, n);
	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(parameters, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(parameters);
}
