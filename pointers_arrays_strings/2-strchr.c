#include "main.h"
/**
 * _strchr - main function
 * @s: char
 * @c: char1
 * Description: locate a char
 * Return:char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *j = NULL;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				j = s + i;
				break;
			}
		}
	}
	return (j);
}
