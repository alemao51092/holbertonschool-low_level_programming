#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *base16 = "0123456789abcdef";
	int num;

	for (num = 0; num < 17; num++)
		putchar(base16[num]);
	putchar(10);
	return (0);
}
