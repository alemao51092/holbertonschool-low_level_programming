#include "main.h"
/**
 * _strncpy - main function
 * @dest: char1
 * @src: char2
 * @n: char3
 * Description: copy strings
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0;  cont < n && src[cont] != '\0'; cont++)
		dest[cont] = src[cont];

	for (; n > cont; cont++)
		dest[cont] = '\0';
	return (dest);
}
