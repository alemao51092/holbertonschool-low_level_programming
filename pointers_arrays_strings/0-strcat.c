#include "main.h"
/**
 * _strcat - main function
 * @dest: char
 * @src: ch
 * Return: j
 * Description: concaten
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;
	char *j = dest;


	while (dest[i])
		i++;

	while (src[x])
	{

	dest[i] = src[x];
		i++;
		x++;
	}
	return (j);
}
