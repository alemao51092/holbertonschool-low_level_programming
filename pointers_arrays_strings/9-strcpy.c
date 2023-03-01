#include "main.h"
/**
 * _strcpy - main function
 * Description: copy
 * @dest: char
 * @src: ch
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
