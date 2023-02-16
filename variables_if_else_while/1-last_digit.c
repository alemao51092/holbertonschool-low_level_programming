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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf(" Last digit of %d and is greater than 5\n", n);
	if (n == 0)
		printf(" Last digit of %d an is 0\n", n);
	if (n < 6 != 0)
		printf(" Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
