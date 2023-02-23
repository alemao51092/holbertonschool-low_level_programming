#include "main.h"
/**
 * print_line - main function
 * @n: character
 * Description: Print a line
 * Return: empty
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (n = 0; i <= n; i++)
			_putchar(95);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
