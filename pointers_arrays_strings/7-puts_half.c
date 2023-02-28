#include "main.h"
/**
 * puts_half - main function
 * Description: half string
 * @str: char
 * Return: empty
 */
void puts_half(char *str)
{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x = (i / 2); x < i; x++)
		_putchar (str[x]);
	_putchar ('\n');
}
