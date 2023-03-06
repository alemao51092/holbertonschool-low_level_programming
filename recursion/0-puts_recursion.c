#include "main.h"
/**
 * _puts_recursion - main function
 * @s:char
 * Description: print a string
 * Return: empty
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}
