#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Description: if , else , worck.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("is negative");
	else if (n == 0)
		printf("is zero");
	else
		printf("is positive");
	return (0);
}
