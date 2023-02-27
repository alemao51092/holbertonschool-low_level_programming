#include "main.h"
/**
 * _puts - main function
 * Description: reading strings
 * @str: char
 * Return: empty
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar (*(str + i));
		i++;
	}
	putchar ('\n');
}
