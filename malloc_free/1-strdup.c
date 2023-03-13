#include "main.h"
/**
 * _strdup - main func
 * Description: copy
 * @str: char
 * Return: j
 */
char *_strdup(char *str)
{
	char *j = NULL;
	int i = 0;
	int n = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	j = malloc(sizeof(char) * (i + 1));


	if (j == NULL)
		return (NULL);

	for (n = 0; n <= i; n++)
		j[n] = str[n];

	return (j);
}
