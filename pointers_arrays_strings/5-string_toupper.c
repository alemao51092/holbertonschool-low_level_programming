#include "main.h"
/**
 * string_toupper - main function
 * @n: char
 * Description: touppercase
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
			n[i] -= 32;
	}
	return (n);
}
