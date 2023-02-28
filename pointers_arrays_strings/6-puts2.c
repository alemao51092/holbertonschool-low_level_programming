#include "main.h"
/**
 * puts2 - main function
 *
 *
 */
void puts2(char *str)
{	
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x = 0; x <= i; x++)
		if (x%2 == 0)
			_putchar (str[x]);
}
