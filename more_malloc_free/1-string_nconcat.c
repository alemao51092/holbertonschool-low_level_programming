#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
/**
 * *string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of characters of s2 to concatenate
 * Return: a pointer to a newly allocated space in memory with s1 and s2
 * concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, i;
	char *aux;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	aux = malloc(len + n + 1);
	if (aux == NULL)
		return (NULL);
	for (i = 0; i < len + n + 1; i++)
	{
		aux[i] = '\0';
	}
	_strncat(aux, s1, len);
	_strncat(aux, s2, n);

	return (aux);
}
/**
 * _strlen - returns the length of a string
 * @s: the string to be calculed
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * *_strncat - function that concatenates two strings
 * @dest: dest to string concatenate
 * @src: string to concatenate
 * @n: number of characters to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;
	char *aux = dest;

	if (n >= 0)
	{
		while (dest[count])
		{
			count++;
		}
		while ((src[count2]) && (n > 0))
		{
			dest[count] = src[count2];
			count++;
			count2++;
			n--;
		}
	} else
	{
		dest[count] = '\0';
	}
	return (aux);
}
