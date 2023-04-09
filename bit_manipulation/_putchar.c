#include "main.h"
#include <unistd.h>

char _putchar(char c)
{
	return (write(1, &c, 1));
}

