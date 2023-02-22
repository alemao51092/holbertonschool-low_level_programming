#include <ctype.h>
#include "main.h"
/**
 *_isdigit - main function
 *@c: charac
 *Description: is a digit
 *Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);

}
