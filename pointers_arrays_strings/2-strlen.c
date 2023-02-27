#include "main.h"
/**
 * _strlen - main function
 * Description: length
 * @s: Char
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
