#include "main.h"
/**
* _print_rev_recursion - main function
* @s: char
* Description: imprimir al reves
* Return: empty
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar (*s);
}
