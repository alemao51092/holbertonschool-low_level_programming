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
	int las1 = 0;
	int las2 = 0;
	int p = 0;
	int x = 0;
	char *j = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[las1] != '\0')
		las1++;
	while (s2[las2] != '\0')
		las2++;

	j = malloc(sizeof(char) * (las1 + las2) + 1);

	if (j == NULL)
		return (NULL);

	for (p = 0; p < las1; p++)
		j[p] = s1[p];

	for (x = 0; x < las2; x++)
		j[p + x] = s2[x];
	j[p + x] = '\0';
	return (j);
}
