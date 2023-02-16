#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Description: If exercices
 * Return:0
 */
int main(void)
{
	int n;
	int resto;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	resto = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, resto);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, resto);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, resto);
	return (0);
}
