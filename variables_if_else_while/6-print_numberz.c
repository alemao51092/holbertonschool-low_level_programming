#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar(10);
	return (0);
}
