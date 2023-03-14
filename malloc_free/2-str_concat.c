#include "main.h"
/**
 * *str_concat - main function
 * Description: concat 2 strings
 * @s1: char
 * @s2: char2
 * Return: j
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int p = 0;
	int x = 0;
	char *j = NULL;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;

	j = malloc(sizeof(char) * ((i + 1) + (n + 1)));

	if (j == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		j[p] = s1[p];

	for (x = 0; x < n; x++)
		j[p + x] = s2[x];
	return (j);
}
