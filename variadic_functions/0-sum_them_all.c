#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - main function
 * @n: ch1
 * Description: sum parametros
 * Return: parametros
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int ini;
	unsigned int suma;
	va_list parametros;

	va_start(parametros, n);

	suma = 0;
	for (ini = 0; ini < n; ini++)
		suma += va_arg(parametros, int);

	va_end(parametros);
	return (suma);
}
