#include "main.h"
/**
 * rev_string - main function
 * Description: ptint
 * @s: char
 * Return: empty
 *
 */
void rev_string(char *s)
{
        int i = 0;

        int x;

        while (*(s + i) != '\0')
	{
		_putchar (*(s+i));
		i++;
	}
	_putchar ('\n');

        for (x = i - 1; x >= 0; x--)
                _putchar (*(s + x));
        _putchar ('\n');
}
