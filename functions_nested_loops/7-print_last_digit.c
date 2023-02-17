#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - main function
 * Description: last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
	int print_last_digit = n % 10;
	putchar(print_last_digit);
	return (print_last_digit);
}
