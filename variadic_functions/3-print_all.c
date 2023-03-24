#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - main function
 * @format: string
 * Description: print all
 * Return: nth
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, coma;
	char *s;

	va_start(args, format);
	while (format[i] && format != NULL)
	{
		if (i != 0 && coma == 1)
			printf(", ");
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			coma = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			coma = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			coma = 1;
			break;
			case 's':
			s = va_arg(args, char *);
			coma = 1;
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
			default:
			coma = 0;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
