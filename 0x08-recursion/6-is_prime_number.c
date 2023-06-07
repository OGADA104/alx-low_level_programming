#include "main.h"

/**
 *is_prime_number - checks for prime numbers
 *@n: input integer
 *Return: 1 if prime 0 if not prime number
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
