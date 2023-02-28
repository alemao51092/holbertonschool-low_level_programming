#include "main.h"
/**
 * puts2 - main function
 * @str: char
 * Return: empty
 * Description: % 2
 */
void puts2(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x = 0; x <= i - 1; x++)
		if (x % 2 == 0)
			_putchar (str[x]);
	_putchar ('\n');
}
