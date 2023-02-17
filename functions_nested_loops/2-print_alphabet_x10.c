#include <stdio.h>
/**
 * print_alphabet_x10 - main function
 *Description: Alphabet
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar (i);
		}
		putchar ('\n');
	}
}
