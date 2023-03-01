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
	int x;
	
	while (src[i])
		i++;
	
	for (x = 0; x <= i; x++)
		src[x] = dest[x];

	dest[x] = '\0';
	
	return (dest);
}
