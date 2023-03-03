#include "main.h"
/**
 * _memcpy - main function
 * @dest: char
 * @src: char1
 * @n: char2
 * Description: copy memory
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (p);
}
