#include <stdio.h>
/**
 * main - main function
 * Description: FizzBuzz
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("fizzbuzz");
		else if (i % 5 == 0)
			printf("buzz");
		else if (i % 3 == 0)
			printf("fizz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}
