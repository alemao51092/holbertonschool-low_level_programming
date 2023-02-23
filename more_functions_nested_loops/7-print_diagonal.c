#include "main.h"
/**
 * print_diagonal - main function
 * Description: diagonal
 * Return: empty
 */
/**
 * @n: char
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(32);
			}
			 _putchar('\\');
			 _putchar('\n');
		}
	}
	else
		_putchar('\n');
}
