#include "main.h"
/**
 *_memset - main function
 * @s: char
 * @b: char1
 * @n: char2
 * Description: fill bytes
 * Return: j
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *j = s;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (j);

}
