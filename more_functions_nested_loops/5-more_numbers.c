#include "main.h"
/**
 * more_numbers - main function
 * @i: charac
 * Description: Print 10 1 to 14
 * @n: char
 * Return: empty
 */
void more_numbers(void)
{
	int i;
	int last;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar ('1');
		last = i % 10;
		_putchar (last + '0');
		}
	_putchar ('\n');
	}
}
