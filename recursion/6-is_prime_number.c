#include "main.h"

int
findPrime(int a, int b)
{
	if (a % b == 0 && b < a)
		return (0);
	else if (a == b)
		return (1);
	else
		return (findPrime(a, b + 1));
}

int
is_prime_number(int n)
{
	int res = 0;

	if (n <= 1)
		return (0);
	else if (n > 1)
		res = findPrime(n, 2);
	return (res);
}
