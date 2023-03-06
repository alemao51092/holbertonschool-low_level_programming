#include "main.h"
/**
 * _strlen_recursion - main function
 * @s: char
 * Description: return number
 * Return: int
 */
int _strlen_recursion(char *s)
{	
	if (*s == '\0')
		_strlen_recursion(s + 1);

	return (*s);
}
