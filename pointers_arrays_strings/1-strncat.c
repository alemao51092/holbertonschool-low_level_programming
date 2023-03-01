#include "main.h"
/**
 * _strncat - main function
 * Description: concat 2 strings
 * @dest: char
 * @src: ch
 * @n: char2
 * Return: de
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x;
	char *j = dest;

	while (dest[i])
		i++;
	for (x = 0; x < n; x++)
	{
		dest[i + x] = src[x];
		if (src[x] == '\0')
			break;
	}
	return (j);
}
