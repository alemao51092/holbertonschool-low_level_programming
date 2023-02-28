#include "main.h"
/**
 * rev_string - main function
 * Description: ptint
 * @s: char
 * Return: empty
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	char temp[500];

	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		s[i] = temp[x];
		x++;
	}
}
